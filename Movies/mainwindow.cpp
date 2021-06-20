#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "addwindow.h"
#include "about.h"
#include "details.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Создаём модель данных для отображения таблицы из CSV файла
    csvModel = new QStandardItemModel(this);
    csvModel->setColumnCount(7);
    csvModel->setHorizontalHeaderLabels(QStringList() << "Title" << "Genre" << "Director" << "Actors" << "Year" << "Runtime" << "Rating");
    ui->tableView->setModel(csvModel); // Устанавливаем модель в таблицу

    //Setting the data for the given section in the header with the specified orientation to the value supplied.
    csvModel->setHeaderData(0, Qt::Horizontal, QObject::tr("Title"));
    csvModel->setHeaderData(1, Qt::Horizontal, QObject::tr("Genre"));
    csvModel->setHeaderData(2, Qt::Horizontal, QObject::tr("Director"));
    csvModel->setHeaderData(3, Qt::Horizontal, QObject::tr("Actors"));
    csvModel->setHeaderData(4, Qt::Horizontal, QObject::tr("Year"));
    csvModel->setHeaderData(5, Qt::Horizontal, QObject::tr("Runtime"));
    csvModel->setHeaderData(6, Qt::Horizontal, QObject::tr("Rating"));

    movieData = new MovieData(csvModel);
    ui->tableView->setModel(csvModel);

    proxyModel = new MyProxiModel();
    proxyModel->setSourceModel(csvModel);

    ui->tableView->setModel(proxyModel);
    ui->tableView->sortByColumn(4, Qt::AscendingOrder);
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

    ui->lineEdit->setText(QString::number(proxyModel->rowCount()));

}

MainWindow::~MainWindow()
{
    delete ui;
    delete csvModel;
}

void MainWindow::saveAsCSV()
{
    QString fileName = QFileDialog::getSaveFileName(this,"Save File");
    QFile f(fileName);

    if( f.open( QIODevice::WriteOnly ) )
    {
        QTextStream ts( &f ); //Tекстовый поток,чтобы записывать данные
        QStringList strList; // Вспомогательный объект QSqtringList, который сформирует строку

        for( int c = 0; c < ui->tableView->horizontalHeader()->count(); ++c )
            strList << ui->tableView->model()->headerData(c, Qt::Horizontal).toString();
        ts << strList.join(';')+"\n";

        for( int r = 0; r < ui->tableView->verticalHeader()->count(); ++r )
        {
            strList.clear();
            strList << ui->tableView->model()->headerData(r, Qt::Vertical).toString();
            for( int c = 0; c < ui->tableView->horizontalHeader()->count(); ++c )
            {
                strList << ui->tableView->model()->data(ui->tableView->model()->index(r, c), Qt::DisplayRole).toString();
            }
            ts << strList.join(';'); //отправляем весь stringList в файл через текстовый поток
        }
        f.close();
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    AddWindow addWindow;
    addWindow.setWindowTitle("Add Details");
    addWindow.setModelPointer(csvModel);
    addWindow.setDataPointer(movieData);
    addWindow.setModal(true);
    addWindow.exec();

    ui->lineEdit->setText(QString::number(proxyModel->rowCount()));
}

void MainWindow::on_pushButton_8_clicked()
{
    std :: cout << "Saving data to a file..." << std :: endl;
    this->saveAsCSV();
}

void MainWindow::on_pushButton_3_clicked()
{
    QModelIndex prindex = ui->tableView->currentIndex();
    QModelIndex modelIndex = proxyModel->mapToSource(prindex);
    int selectedRow = modelIndex.row();
    csvModel->removeRow(selectedRow);

    ui->lineEdit->setText(QString::number(proxyModel->rowCount()));
}


void MainWindow::on_pushButton_7_clicked()
{
    movieData->open(this);
    QObject::connect(csvModel, &QStringListModel::dataChanged, movieData, &MovieData::update);
    QObject::connect(csvModel, &QStringListModel::rowsRemoved, movieData, &MovieData::remove);
    ui->lineEdit->setText(QString::number(proxyModel->rowCount()));
}

void MainWindow::on_checkBox_7_stateChanged(int arg1)
{
    if (ui->checkBox_7->isChecked())
    {
        ui->statusBar->showMessage("Checkbox is clicked, you will be showed 10 movies satifying the filter you have entered!");
        ui->tableView->sortByColumn(6, Qt::SortOrder::DescendingOrder);
        for (int i=10; i < proxyModel->rowCount(); i++)
        {
            ui->tableView->hideRow(i);
        }
    }
    else
        {
            ui->statusBar->clearMessage();
            for (int i=10; i < proxyModel->rowCount(); i++)
            {
                ui->tableView->showRow(i);
            }
        }
}


void MainWindow::on_lineEdit_2_textChanged(const QString &arg1)
{
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
//    proxyModel->setMinRating(ui->doubleSpinBox->text().toDouble());
}

void MainWindow::on_doubleSpinBox_2_valueChanged(double arg1)
{
//    proxyModel->setMaxRating(ui->doubleSpinBox_2->text().toDouble());
}

void MainWindow::on_lineEdit_3_textChanged(const QString &arg1)
{
    proxyModel->setFilterActors(ui->lineEdit_3->text());
}

void MainWindow::on_actionAbout_triggered()
{
    std :: cout << "[ABOUT] action in the menu bar triggered..." << std :: endl;
    About window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_pushButton_clicked()
{
    QModelIndex prindex = ui->tableView->currentIndex();
    QModelIndex modelIndex = proxyModel->mapToSource(prindex);

    int selectedRow = modelIndex.row();
    if (prindex.row() >= 0)
    {
        Details details;
        Movies data = movieData->getMovie(selectedRow);
        details.setMoviesDetail(data);
        details.setModal(true);
        details.exec();
    }

}
