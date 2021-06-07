#include "logo.h"
#include <QPainter>
#include <QPainterPath>

Logo::Logo(QWidget *parent) : QWidget(parent)
{}

void Logo::paintEvent(QPaintEvent *e)
{
    QPainter *p = new QPainter(this);

    p->setPen(Qt::black);
    p->setBrush(QBrush(QBrush(Qt::black)));
    QRectF rect1(70.0, 150.0, 180.0, 120.0);
    p->drawRoundedRect(rect1, 5.0, 5.0);

    static const QPointF tail[4] = {
        QPointF(58.0, 200.0),
        QPointF(65.0, 210.0),
        QPointF(65.0, 220.0),
        QPointF(58.0, 230.0)
    };
    p->drawPolygon(tail, 4);

    static const QPointF cam[4] = {
        QPointF(275.0, 190.0),
        QPointF(290.0, 170.0),
        QPointF(290.0, 250.0),
        QPointF(275.0, 230.0)
    };
    p->drawPolygon(cam, 4);

    p->setPen(Qt::transparent);
    p->setBrush(QBrush(QBrush(Qt::transparent)));
    QRectF rect5(50.0, 105.0, 90.0, 90.0);
    p->drawEllipse(rect5);
    QRectF rect6(170.0, 85.0, 110.0, 110.0);
    p->drawEllipse(rect6);

    p->setPen(Qt::red);
    p->setBrush(QBrush(QBrush(Qt::red)));
    static const QPointF rainbow[4] = {
        QPointF(300.0, 160.0),
        QPointF(320.0, 140.0),
        QPointF(320.0, 280.0),
        QPointF(300.0, 260.0)
    };
    p->drawPolygon(rainbow, 4);

    p->setPen(Qt::black);
    p->setBrush(QBrush(QBrush(Qt::black)));
    QRectF rect2(55.0, 110.0, 80.0, 80.0);
    p->drawEllipse(rect2);
    QRectF rect3(175.0, 90.0, 100.0, 100.0);
    p->drawEllipse(rect3);

    p->setPen(Qt::white);
    p->setBrush(QBrush(QBrush(Qt::white)));
    QRectF rect4(67.0, 125.0, 55.0, 55.0);
    p->drawEllipse(rect4);
    QRectF rect7(187.0, 110.0, 67.0, 67.0);
    p->drawEllipse(rect7);

    p->setBrush(Qt::red);
    p->setBrush(QBrush(QBrush(Qt::red)));
    QRectF rect9(72.0, 134.0, 40.0, 40.0);
    p->drawEllipse(rect9);
    QRectF rect10(196.0, 120.0, 50.0, 50.0);
    p->drawEllipse(rect10);

    p->drawText(120,200, "MOVIES");

}
