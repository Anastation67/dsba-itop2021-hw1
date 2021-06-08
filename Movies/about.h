#ifndef ABOUT_H
#define ABOUT_H
#include <QDialog>
#include <QPainter>

namespace Ui {
class About;
}

class About : public QDialog
{
    Q_OBJECT

public:
    explicit About(QWidget *parent = nullptr);
    ~About();

protected:
    void paintEvent(QPaintEvent *e);

private:
    Ui::About *ui;
};

#endif // ABOUT_H
