/********************************************************************************
** Form generated from reading UI file 'details.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILS_H
#define UI_DETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Details
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_7;
    QLabel *label_9;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *Details)
    {
        if (Details->objectName().isEmpty())
            Details->setObjectName(QString::fromUtf8("Details"));
        Details->resize(567, 352);
        gridLayout = new QGridLayout(Details);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Details);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_4 = new QLabel(Details);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(Details);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(Details);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        label_2 = new QLabel(Details);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_7 = new QLabel(Details);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        label_3 = new QLabel(Details);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_3 = new QLineEdit(Details);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_6 = new QLineEdit(Details);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        verticalLayout_2->addWidget(lineEdit_6);

        lineEdit_2 = new QLineEdit(Details);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_5 = new QLineEdit(Details);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout_2->addWidget(lineEdit_5);

        lineEdit_4 = new QLineEdit(Details);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout_2->addWidget(lineEdit_4);

        lineEdit = new QLineEdit(Details);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_7 = new QLineEdit(Details);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        verticalLayout_2->addWidget(lineEdit_7);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        label_9 = new QLabel(Details);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(Details);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 1, 1, 1, 1);


        retranslateUi(Details);

        QMetaObject::connectSlotsByName(Details);
    } // setupUi

    void retranslateUi(QDialog *Details)
    {
        Details->setWindowTitle(QCoreApplication::translate("Details", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Details", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Title:</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Details", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Actors:</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Details", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Year:</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Details", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Runtime:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Details", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Genre:</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("Details", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Rating:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Details", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Director:</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("Details", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Description:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Details: public Ui_Details {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILS_H
