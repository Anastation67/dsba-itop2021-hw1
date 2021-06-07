#ifndef LOGO_H
#define LOGO_H

#include <QWidget>
#include <QPainter>

class Logo;
class Logo : public QWidget
{
    Q_OBJECT

public:
    Logo(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *e);
};

#endif // LOGO_H
