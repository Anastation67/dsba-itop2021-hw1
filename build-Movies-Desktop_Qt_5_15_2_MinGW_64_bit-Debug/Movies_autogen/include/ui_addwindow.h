/********************************************************************************
** Form generated from reading UI file 'addwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWINDOW_H
#define UI_ADDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddWindow
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_6;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QLabel *label_2;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_7;
    QLabel *label_9;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton;

    void setupUi(QDialog *AddWindow)
    {
        if (AddWindow->objectName().isEmpty())
            AddWindow->setObjectName(QString::fromUtf8("AddWindow"));
        AddWindow->resize(381, 367);
        AddWindow->setSizeGripEnabled(false);
        formLayout = new QFormLayout(AddWindow);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(AddWindow);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit_3 = new QLineEdit(AddWindow);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_3);

        label_4 = new QLabel(AddWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        lineEdit_6 = new QLineEdit(AddWindow);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_6);

        label_5 = new QLabel(AddWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        lineEdit_2 = new QLineEdit(AddWindow);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_2);

        label_6 = new QLabel(AddWindow);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        lineEdit_5 = new QLineEdit(AddWindow);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_5);

        label_2 = new QLabel(AddWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_2);

        lineEdit_4 = new QLineEdit(AddWindow);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_4);

        label_7 = new QLabel(AddWindow);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        lineEdit = new QLineEdit(AddWindow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit);

        label_3 = new QLabel(AddWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_3);

        lineEdit_7 = new QLineEdit(AddWindow);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEdit_7);

        label_9 = new QLabel(AddWindow);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_9);

        lineEdit_8 = new QLineEdit(AddWindow);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        formLayout->setWidget(7, QFormLayout::FieldRole, lineEdit_8);

        pushButton = new QPushButton(AddWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(8, QFormLayout::FieldRole, pushButton);


        retranslateUi(AddWindow);

        QMetaObject::connectSlotsByName(AddWindow);
    } // setupUi

    void retranslateUi(QDialog *AddWindow)
    {
        AddWindow->setWindowTitle(QCoreApplication::translate("AddWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Title:</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("AddWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Actors:</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("AddWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Year:</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("AddWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Runtime:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("AddWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Genre:</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("AddWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Rating:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("AddWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Director:</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("AddWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Description:</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("AddWindow", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddWindow: public Ui_AddWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWINDOW_H
