#include "visaoxy.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

VisaoXY::VisaoXY(QWidget *parent) : QWidget{parent}{

}

void VisaoXY::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    int nV = 30;
    int nH = 30;

    brush.setColor(QColor(211,211,211));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(0,0,0));
    pen.setWidth(2);

    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(0,0,width(),height());

    pen.setWidth(1);
    painter.setPen(pen);

    for(int i = 0; i < nH; i++){
        painter.drawLine(0, i*height()/nH, width(), i*height()/nH);
    }
    for(int i = 0; i < nV; i++){
        painter.drawLine(i*width()/nV, 0, i*width()/nV, height());
    }
}
