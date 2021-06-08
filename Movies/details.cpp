#include "details.h"
#include "ui_details.h"

Details::Details(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Details)
{
    ui->setupUi(this);
}

void Details::setMoviesDetail(Movies movie)
{
    ui->lineEdit->setText(QString::fromStdString(movie.rating));
    ui->lineEdit_2->setText(QString::number(movie.year));
    ui->lineEdit_3->setText(QString::fromStdString(movie.title));
    ui->lineEdit_4->setText(QString::fromStdString(movie.genres));
    ui->lineEdit_5->setText(QString::number(movie.runtime));
    ui->lineEdit_6->setText(QString::fromStdString(movie.actors));
    ui->lineEdit_7->setText(QString::fromStdString(movie.director));
    ui->plainTextEdit->setPlainText(QString::fromStdString(movie.description));
}

Details::~Details()
{
    delete ui;
}
