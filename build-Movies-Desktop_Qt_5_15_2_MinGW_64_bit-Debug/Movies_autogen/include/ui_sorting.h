/********************************************************************************
** Form generated from reading UI file 'sorting.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTING_H
#define UI_SORTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sorting
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QTableView *tableView;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;

    void setupUi(QDialog *Sorting)
    {
        if (Sorting->objectName().isEmpty())
            Sorting->setObjectName(QString::fromUtf8("Sorting"));
        Sorting->resize(654, 300);
        pushButton = new QPushButton(Sorting);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 260, 80, 22));
        label = new QLabel(Sorting);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 20, 111, 31));
        tableView = new QTableView(Sorting);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(350, 50, 291, 231));
        widget = new QWidget(Sorting);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 60, 281, 181));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBox = new QCheckBox(widget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(widget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout->addWidget(checkBox_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBox_3 = new QCheckBox(widget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        horizontalLayout_2->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(widget);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        horizontalLayout_2->addWidget(checkBox_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        checkBox_5 = new QCheckBox(widget);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        horizontalLayout_3->addWidget(checkBox_5);

        checkBox_6 = new QCheckBox(widget);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        horizontalLayout_3->addWidget(checkBox_6);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Sorting);

        QMetaObject::connectSlotsByName(Sorting);
    } // setupUi

    void retranslateUi(QDialog *Sorting)
    {
        Sorting->setWindowTitle(QCoreApplication::translate("Sorting", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Sorting", "Sort", nullptr));
        label->setText(QCoreApplication::translate("Sorting", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; font-style:italic; text-decoration: underline;\">Sorting</span></p></body></html>", nullptr));
        checkBox->setText(QCoreApplication::translate("Sorting", "Year (increasing)", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Sorting", "Year (decreasing)", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Sorting", "Runtime (increasing)", nullptr));
        checkBox_4->setText(QCoreApplication::translate("Sorting", "Runtime (decreasing)", nullptr));
        checkBox_5->setText(QCoreApplication::translate("Sorting", "Rating (increasing)", nullptr));
        checkBox_6->setText(QCoreApplication::translate("Sorting", "Rating (decreasing)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sorting: public Ui_Sorting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTING_H
