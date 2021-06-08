/********************************************************************************
** Form generated from reading UI file 'detailwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILWINDOW_H
#define UI_DETAILWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DetailWindow
{
public:
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_7;
    QLabel *label_8;

    void setupUi(QDialog *DetailWindow)
    {
        if (DetailWindow->objectName().isEmpty())
            DetailWindow->setObjectName(QString::fromUtf8("DetailWindow"));
        DetailWindow->resize(455, 367);
        layoutWidget = new QWidget(DetailWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 110, 381, 211));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_2);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEnabled(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setEnabled(false);

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEdit_6);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setEnabled(false);

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_5);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setEnabled(false);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_4);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setEnabled(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setEnabled(false);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_7);

        label_8 = new QLabel(DetailWindow);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(160, 30, 101, 51));

        retranslateUi(DetailWindow);

        QMetaObject::connectSlotsByName(DetailWindow);
    } // setupUi

    void retranslateUi(QDialog *DetailWindow)
    {
        DetailWindow->setWindowTitle(QCoreApplication::translate("DetailWindow", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("DetailWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Director:</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("DetailWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Actors:</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("DetailWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Year:</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("DetailWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Runtime:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("DetailWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Genre:</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("DetailWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Rating:</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("DetailWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Title:</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("DetailWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; font-style:italic; text-decoration: underline;\">Details</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DetailWindow: public Ui_DetailWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILWINDOW_H
