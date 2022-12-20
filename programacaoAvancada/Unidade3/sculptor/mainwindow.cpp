#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);

    s = new Sculptor(30,30,30);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::sair(){
    exit(0);
}

