#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "sculptor.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void sair();

private:
    Ui::MainWindow *ui;
    Sculptor *s;
};
#endif // MAINWINDOW_H
