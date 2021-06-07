#ifndef ADDWINDOW_H
#define ADDWINDOW_H

#include "movies.h"
#include "myproximodel.h"
#include <QDialog>
#include <QStandardItemModel>

namespace Ui {
class AddWindow;
}

class AddWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddWindow(QWidget *parent = nullptr);
    ~AddWindow();
    void setModelPointer(QStandardItemModel* pointerToModel);
    void setDataPointer(MovieData* movieData);

private slots:
    void on_pushButton_clicked();

private:
    Ui::AddWindow *ui;
    QStandardItemModel* pointerToModel;
    MovieData* pointerToMovieData;
    MyProxiModel* myModel;
};

#endif // ADDWINDOW_H
