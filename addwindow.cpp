#include "addwindow.h"
#include "ui_addwindow.h"

AddWindow::AddWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddWindow)
{
    ui->setupUi(this);
}

void AddWindow::setModelPointer(QStandardItemModel* model)
{
    pointerToModel = model;
}

void AddWindow::setDataPointer(MovieData *movieData)
{
    pointerToMovieData = movieData;
}

AddWindow::~AddWindow()
{
    delete ui;
}

void AddWindow::on_pushButton_clicked()
{
    int row = pointerToModel->rowCount();

    pointerToModel->insertRows(row, 1); // inserting row

        QModelIndex index = pointerToModel->index(row, 0, QModelIndex());
        pointerToModel->setData(index,ui->lineEdit->text()); //Title

        index = pointerToModel->index(row, 1, QModelIndex());
        pointerToModel->setData(index,ui->lineEdit_4->text()); //"Genre"

        index = pointerToModel->index(row, 2, QModelIndex());
        pointerToModel->setData(index,ui->lineEdit_6->text()); //"Director"

        index = pointerToModel->index(row,4, QModelIndex());
        pointerToModel->setData(index, ui->lineEdit_2->text()); //"Actors"

        index = pointerToModel->index(row,5, QModelIndex());
        pointerToModel->setData(index, ui->lineEdit_3->text()); //"Year"

        index = pointerToModel->index(row,6, QModelIndex());
        pointerToModel->setData(index, ui->lineEdit_7->text()); //"Runtime"

        index = pointerToModel->index(row,7, QModelIndex());
        pointerToModel->setData(index, ui->lineEdit_5->text()); //"Rating"

}
