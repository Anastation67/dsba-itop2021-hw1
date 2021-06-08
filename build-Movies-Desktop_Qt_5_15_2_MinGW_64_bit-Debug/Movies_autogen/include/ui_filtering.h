/********************************************************************************
** Form generated from reading UI file 'filtering.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERING_H
#define UI_FILTERING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Filtering
{
public:
    QCheckBox *checkBox;
    QTableView *tableView;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Filtering)
    {
        if (Filtering->objectName().isEmpty())
            Filtering->setObjectName(QString::fromUtf8("Filtering"));
        Filtering->resize(718, 300);
        checkBox = new QCheckBox(Filtering);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(40, 30, 91, 21));
        tableView = new QTableView(Filtering);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(400, 60, 291, 221));
        layoutWidget = new QWidget(Filtering);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 80, 321, 26));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        layoutWidget1 = new QWidget(Filtering);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 120, 71, 101));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        layoutWidget2 = new QWidget(Filtering);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 240, 231, 41));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);


        retranslateUi(Filtering);

        QMetaObject::connectSlotsByName(Filtering);
    } // setupUi

    void retranslateUi(QDialog *Filtering)
    {
        Filtering->setWindowTitle(QCoreApplication::translate("Filtering", "Dialog", nullptr));
        checkBox->setText(QCoreApplication::translate("Filtering", "top 10 only", nullptr));
        label->setText(QCoreApplication::translate("Filtering", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; font-style:italic;\">Director:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Filtering", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; font-style:italic;\">Actor:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Filtering", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">year</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Filtering", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">runtime</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Filtering", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">rating</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Filtering", "Filter", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Filtering", "Save with filter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Filtering: public Ui_Filtering {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERING_H
