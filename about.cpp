#include "about.h"
#include "ui_about.h"
#include "QtWidgets/QHBoxLayout"

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);

    logo = new Logo(this);
    ui->verticalLayout->addWidget(logo);
}

About::~About()
{
    delete ui;
}
