#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "addwindow.h"
#include "about.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    movieData = new MovieData(csvModel);

    // Создаём модель данных для отображения таблицы из CSV файла
    csvModel = new QStandardItemModel(this);
    csvModel->setColumnCount(7);
    csvModel->setHorizontalHeaderLabels(QStringList() << "Title" << "Genre" << "Director" << "Actors" << "Year" << "Runtime" << "Rating");
    ui->tableView->setModel(csvModel); // Устанавливаем модель в таблицу

    QFile file("D:/HSE/Programming/C++/Project/IMDB-Movie-Data.csv");
    if ( !file.open(QFile::ReadOnly | QFile::Text) )
    {
        qDebug() << "File does not exist!";
    }
    else
    {
        QTextStream in(&file); // Создаём поток для извлечения данных из файла
        // Считываем данные до конца файла
        while (!in.atEnd())
        {
            QString line = in.readLine(); // ... построчно
            QList<QStandardItem *> standardItemsList; // Добавляем в модель по строке с элементами
            for (QString item : line.split(";"))
            {
                standardItemsList.append(new QStandardItem(item));
            }
            csvModel->insertRow(csvModel->rowCount(), standardItemsList);
        }

        file.close();
    }

    csvModel->setHeaderData(0, Qt::Horizontal, QObject::tr("Title"));
    csvModel->setHeaderData(1, Qt::Horizontal, QObject::tr("Genre"));
    csvModel->setHeaderData(2, Qt::Horizontal, QObject::tr("Director"));
    csvModel->setHeaderData(3, Qt::Horizontal, QObject::tr("Actors"));
    csvModel->setHeaderData(4, Qt::Horizontal, QObject::tr("Year"));
    csvModel->setHeaderData(5, Qt::Horizontal, QObject::tr("Runtime"));
    csvModel->setHeaderData(6, Qt::Horizontal, QObject::tr("Rating"));

    proxyModel = new MyProxiModel();
    proxyModel->setSourceModel(csvModel);

    ui->tableView->setModel(proxyModel);
    ui->tableView->setSortingEnabled(true);

    // MIN-MAX VALUES OF SPINBOXES
    ui->spinBox->setMinimum(0);
    ui->spinBox->setMaximum(3000);
    ui->spinBox->setValue(0);

    ui->spinBox_2->setMinimum(0);
    ui->spinBox_2->setMaximum(1500);
    ui->spinBox_2->setValue(0);

    ui->spinBox_4->setMinimum(0);
    ui->spinBox_4->setMaximum(3000);
    ui->spinBox_4->setValue(3000);

    ui->spinBox_5->setMinimum(0);
    ui->spinBox_5->setMaximum(1500);
    ui->spinBox_5->setValue(1500);

    ui->doubleSpinBox->setMinimum(0);
    ui->doubleSpinBox->setMaximum(10.0);
    ui->doubleSpinBox->setValue(0);

    ui->doubleSpinBox_2->setMinimum(0);
    ui->doubleSpinBox_2->setMaximum(10.0);
    ui->doubleSpinBox_2->setValue(10.0);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete csvModel;
}


void MainWindow::on_pushButton_2_clicked() //adding data // the programm automatically closes, nothing happens
{
    AddWindow addWindow;
    addWindow.setModelPointer(csvModel);
    addWindow.setDataPointer(movieData);
    addWindow.setModal(true);
    addWindow.exec();
}

void MainWindow::on_pushButton_8_clicked() //saving data into a file //works, but saves not what is needed to be saved
{
    std :: cout << "Saving data to a file..." << std :: endl;
    movieData->save(this);
}

void MainWindow::on_pushButton_3_clicked()  //deleting data   //works
{
    int selectedRow = ui->tableView->currentIndex().row();
    std :: cout << "Erasing row#" << selectedRow << std :: endl;
    csvModel->removeRows(selectedRow, 1);

    proxyModel->removeRow(selectedRow);
    QModelIndex proxyIndex = ui->tableView->currentIndex();
    QModelIndex modelIndex = proxyModel->mapToSource(proxyIndex);
    std :: cout << "Proxy Index:" << proxyIndex.row() << " Model Index: " << modelIndex.row() << std :: endl;
}

void MainWindow::on_pushButton_9_clicked() //counts number of rows // works
{
    int total = proxyModel->rowCount();
    std::cout << "Counting number of movies in the table after deleting the data" << total << std::endl;
    ui->lineEdit->setText(QString::number(total));
}

void MainWindow::on_pushButton_clicked()
{
    About logo;
    logo.setModal(true);
    logo.exec();
}

void MainWindow::on_pushButton_7_clicked()
{
    csvModel->clear();
    csvModel = new QStandardItemModel(this);
    csvModel->setColumnCount(7);
    csvModel->setHorizontalHeaderLabels(QStringList() << "Title" << "Genre" << "Director" << "Actors" << "Year" << "Runtime" << "Rating");
    ui->tableView->setModel(csvModel);

    QString fileName = QFileDialog::getOpenFileName(this,"Open File","*.csv");
    QFile file(fileName);
    file.open(QIODevice::ReadOnly);

    int row=0;

    while(!file.atEnd())
    {
        QByteArray line = file.readLine();
        QList<QByteArray> vectorLine = line.split(';');
        csvModel->insertRows(row, 1);
        csvModel->setData(csvModel->index(row,0), QString(vectorLine.at(0)));
        csvModel->setData(csvModel->index(row,1), QString(vectorLine.at(1)));
        csvModel->setData(csvModel->index(row,2), QString(vectorLine.at(2)));
        csvModel->setData(csvModel->index(row,3), QString(vectorLine.at(3)));
        csvModel->setData(csvModel->index(row,4), vectorLine.at(4).toInt());
        csvModel->setData(csvModel->index(row,5), vectorLine.at(5).toInt());
        csvModel->setData(csvModel->index(row,6), vectorLine.at(6).toDouble());

        row++;
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,"Open File","*.csv");
    QFile file(fileName);
    file.open(QIODevice::ReadOnly);

    int row=0;

    while(!file.atEnd())
    {
        QByteArray line = file.readLine();
        QList<QByteArray> vectorLine = line.split(';');
        csvModel->insertRows(row, 1);
        csvModel->setData(csvModel->index(row,0), QString(vectorLine.at(0)));
        csvModel->setData(csvModel->index(row,1), QString(vectorLine.at(1)));
        csvModel->setData(csvModel->index(row,2), QString(vectorLine.at(2)));
        csvModel->setData(csvModel->index(row,3), QString(vectorLine.at(3)));
        csvModel->setData(csvModel->index(row,4), vectorLine.at(4).toInt());
        csvModel->setData(csvModel->index(row,5), vectorLine.at(5).toInt());
        csvModel->setData(csvModel->index(row,6), vectorLine.at(6).toDouble());

        row++;
    }
}

void MainWindow::on_checkBox_7_stateChanged(int arg1)
{
    if (ui->checkBox_7->isChecked())
    {
        ui->statusBar->showMessage("Checkbox is clicked, you will be showed 10 movies satifying the filter you have entered!");
    }
    else
        ui->statusBar->clearMessage();
}


void MainWindow::on_lineEdit_2_textChanged(const QString &arg1)
{
//    QRegExp::PatternSyntax syntax = QRegExp::PatternSyntax(QRegExp::FixedString);
//    Qt::CaseSensitivity caseSensitivity = Qt::CaseSensitive;
//    QString text = ui->lineEdit->text();
//    QRegExp filter(text, caseSensitivity, syntax);
//    proxyModel->setFilterRegExp(filter);
    proxyModel->setFilterDirector(ui->lineEdit_2->text());
}

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    proxyModel->setMinYear(ui->spinBox->text().toInt());
}

void MainWindow::on_spinBox_4_valueChanged(int arg1)
{
    proxyModel->setMaxYear(ui->spinBox_4->text().toInt());
}

void MainWindow::on_spinBox_2_valueChanged(int arg1)
{
    proxyModel->setMinRuntime(ui->spinBox_2->text().toInt());
}

void MainWindow::on_spinBox_5_valueChanged(int arg1)
{
    proxyModel->setMaxRuntime(ui->spinBox_5->text().toInt());
}

void MainWindow::on_doubleSpinBox_valueChanged(double arg1)
{
    proxyModel->setMinRating(ui->doubleSpinBox->text().toDouble());
}

void MainWindow::on_doubleSpinBox_2_valueChanged(double arg1)
{
    proxyModel->setMaxRating(ui->doubleSpinBox_2->text().toDouble());
}

void MainWindow::on_lineEdit_3_textChanged(const QString &arg1)
{
    proxyModel->setFilterActors(ui->lineEdit_3->text());
}
