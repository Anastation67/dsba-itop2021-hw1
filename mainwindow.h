#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "movies.h"
#include <QMainWindow>
#include "myproximodel.h"
#include <QSortFilterProxyModel>
#include <QtGui>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui; // the views
    QStandardItemModel *csvModel; // Объявим указатель на модель данных, которая будет содержать данные из CSV файла // our "table-like" model
    MovieData* movieData; // data
    MyProxiModel *proxyModel;

    QAction* about; // my nice actions inside the menu bar

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_6_clicked();
    void on_checkBox_7_stateChanged(int arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);
    void on_spinBox_valueChanged(int arg1);
    void on_spinBox_4_valueChanged(int arg1);
    void on_spinBox_2_valueChanged(int arg1);
    void on_spinBox_5_valueChanged(int arg1);
    void on_doubleSpinBox_valueChanged(double arg1);
    void on_doubleSpinBox_2_valueChanged(double arg1);
    void on_lineEdit_3_textChanged(const QString &arg1);
};
#endif // MAINWINDOW_H
