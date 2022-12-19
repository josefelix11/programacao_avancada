#ifndef VISAOXY_H
#define VISAOXY_H

#include <QWidget>

class VisaoXY : public QWidget
{
    Q_OBJECT
public:
    explicit VisaoXY(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);

signals:

};

#endif // VISAOXY_H
