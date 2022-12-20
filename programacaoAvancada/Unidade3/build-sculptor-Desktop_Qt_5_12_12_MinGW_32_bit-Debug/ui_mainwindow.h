/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "visaoxy.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSalvar;
    QAction *actionEditar;
    QAction *actionSair;
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionPutV;
    QAction *actionCutV;
    QAction *actionPutBox;
    QAction *actionCutbox;
    QAction *actionPutCircle;
    QAction *actionCutcircle;
    QAction *actionPutsphere;
    QAction *actionCutSphere;
    QWidget *centralwidget;
    VisaoXY *widget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBoxRaio;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_6;
    QLCDNumber *lcdNumberRaio;
    QSlider *horizontalSliderRaio;
    QGroupBox *groupBoxElipse;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *labelRx;
    QLabel *labelRy;
    QLabel *labelRz;
    QSlider *horizontalSlider1ELipse;
    QSlider *horizontalSlider3Elipseslider3Elipse;
    QSlider *horizontalSlider2Elipse;
    QLCDNumber *lcdNumber_4;
    QLCDNumber *lcdNumber_5;
    QLCDNumber *lcdNumber_6;
    QGroupBox *groupBoxCaixa;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_5;
    QLabel *labelDimx;
    QSlider *horizontalSliderDimX;
    QLCDNumber *lcdNumber;
    QLabel *labelDimY;
    QSlider *horizontalSliderDimY;
    QLCDNumber *lcdNumber_3;
    QLabel *labelDimZ;
    QSlider *horizontalSliderDimZ;
    QLCDNumber *lcdNumber_2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBoxCoordenadas;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_7;
    QSlider *horizontalSliderZ;
    QLabel *labelZ;
    QLCDNumber *lcdNumberZ;
    QGroupBox *groupBox;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_8;
    QSlider *horizontalSliderG;
    QLCDNumber *lcdNumberB;
    QLabel *labelB;
    QLCDNumber *lcdNumberG;
    QSlider *horizontalSliderB;
    QLabel *labelG;
    QLCDNumber *lcdNumberR;
    QLabel *labelR;
    QSlider *horizontalSliderR;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(798, 602);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        actionEditar = new QAction(MainWindow);
        actionEditar->setObjectName(QString::fromUtf8("actionEditar"));
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icones/recursos/voxel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSair->setIcon(icon);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icones/recursos/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icones/recursos/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionPutV = new QAction(MainWindow);
        actionPutV->setObjectName(QString::fromUtf8("actionPutV"));
        actionPutV->setIcon(icon);
        actionCutV = new QAction(MainWindow);
        actionCutV->setObjectName(QString::fromUtf8("actionCutV"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icones/recursos/cutvoxel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutV->setIcon(icon3);
        actionPutBox = new QAction(MainWindow);
        actionPutBox->setObjectName(QString::fromUtf8("actionPutBox"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icones/recursos/putbox.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutBox->setIcon(icon4);
        actionCutbox = new QAction(MainWindow);
        actionCutbox->setObjectName(QString::fromUtf8("actionCutbox"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icones/recursos/cutbox.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutbox->setIcon(icon5);
        actionPutCircle = new QAction(MainWindow);
        actionPutCircle->setObjectName(QString::fromUtf8("actionPutCircle"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icones/recursos/putcircle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutCircle->setIcon(icon6);
        actionCutcircle = new QAction(MainWindow);
        actionCutcircle->setObjectName(QString::fromUtf8("actionCutcircle"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icones/recursos/cutcircle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutcircle->setIcon(icon7);
        actionPutsphere = new QAction(MainWindow);
        actionPutsphere->setObjectName(QString::fromUtf8("actionPutsphere"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icones/recursos/putEllipse.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutsphere->setIcon(icon8);
        actionCutSphere = new QAction(MainWindow);
        actionCutSphere->setObjectName(QString::fromUtf8("actionCutSphere"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icones/recursos/cutEllipse.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutSphere->setIcon(icon9);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new VisaoXY(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 40, 331, 331));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 856, 26));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(530, 50, 261, 311));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBoxRaio = new QGroupBox(layoutWidget1);
        groupBoxRaio->setObjectName(QString::fromUtf8("groupBoxRaio"));
        groupBoxRaio->setLayoutDirection(Qt::RightToLeft);
        groupBoxRaio->setAlignment(Qt::AlignCenter);
        layoutWidget2 = new QWidget(groupBoxRaio);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 251, 25));
        gridLayout_6 = new QGridLayout(layoutWidget2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        lcdNumberRaio = new QLCDNumber(layoutWidget2);
        lcdNumberRaio->setObjectName(QString::fromUtf8("lcdNumberRaio"));

        gridLayout_6->addWidget(lcdNumberRaio, 0, 1, 1, 1);

        horizontalSliderRaio = new QSlider(layoutWidget2);
        horizontalSliderRaio->setObjectName(QString::fromUtf8("horizontalSliderRaio"));
        horizontalSliderRaio->setMaximum(15);
        horizontalSliderRaio->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(horizontalSliderRaio, 0, 2, 1, 1);


        verticalLayout_2->addWidget(groupBoxRaio);

        groupBoxElipse = new QGroupBox(layoutWidget1);
        groupBoxElipse->setObjectName(QString::fromUtf8("groupBoxElipse"));
        groupBoxElipse->setAlignment(Qt::AlignCenter);
        gridLayout_3 = new QGridLayout(groupBoxElipse);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelRx = new QLabel(groupBoxElipse);
        labelRx->setObjectName(QString::fromUtf8("labelRx"));
        labelRx->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelRx, 0, 0, 1, 1);

        labelRy = new QLabel(groupBoxElipse);
        labelRy->setObjectName(QString::fromUtf8("labelRy"));
        labelRy->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelRy, 1, 0, 1, 1);

        labelRz = new QLabel(groupBoxElipse);
        labelRz->setObjectName(QString::fromUtf8("labelRz"));
        labelRz->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelRz, 2, 0, 1, 1);

        horizontalSlider1ELipse = new QSlider(groupBoxElipse);
        horizontalSlider1ELipse->setObjectName(QString::fromUtf8("horizontalSlider1ELipse"));
        horizontalSlider1ELipse->setMaximum(15);
        horizontalSlider1ELipse->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider1ELipse, 0, 1, 1, 1);

        horizontalSlider3Elipseslider3Elipse = new QSlider(groupBoxElipse);
        horizontalSlider3Elipseslider3Elipse->setObjectName(QString::fromUtf8("horizontalSlider3Elipseslider3Elipse"));
        horizontalSlider3Elipseslider3Elipse->setMaximum(15);
        horizontalSlider3Elipseslider3Elipse->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider3Elipseslider3Elipse, 2, 1, 1, 1);

        horizontalSlider2Elipse = new QSlider(groupBoxElipse);
        horizontalSlider2Elipse->setObjectName(QString::fromUtf8("horizontalSlider2Elipse"));
        horizontalSlider2Elipse->setMaximum(15);
        horizontalSlider2Elipse->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider2Elipse, 1, 1, 1, 1);

        lcdNumber_4 = new QLCDNumber(groupBoxElipse);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));

        gridLayout->addWidget(lcdNumber_4, 0, 2, 1, 1);

        lcdNumber_5 = new QLCDNumber(groupBoxElipse);
        lcdNumber_5->setObjectName(QString::fromUtf8("lcdNumber_5"));

        gridLayout->addWidget(lcdNumber_5, 1, 2, 1, 1);

        lcdNumber_6 = new QLCDNumber(groupBoxElipse);
        lcdNumber_6->setObjectName(QString::fromUtf8("lcdNumber_6"));

        gridLayout->addWidget(lcdNumber_6, 2, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBoxElipse);

        groupBoxCaixa = new QGroupBox(layoutWidget1);
        groupBoxCaixa->setObjectName(QString::fromUtf8("groupBoxCaixa"));
        groupBoxCaixa->setAlignment(Qt::AlignCenter);
        gridLayout_2 = new QGridLayout(groupBoxCaixa);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        labelDimx = new QLabel(groupBoxCaixa);
        labelDimx->setObjectName(QString::fromUtf8("labelDimx"));
        labelDimx->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelDimx, 0, 0, 1, 1);

        horizontalSliderDimX = new QSlider(groupBoxCaixa);
        horizontalSliderDimX->setObjectName(QString::fromUtf8("horizontalSliderDimX"));
        horizontalSliderDimX->setMaximum(15);
        horizontalSliderDimX->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSliderDimX, 0, 1, 1, 1);

        lcdNumber = new QLCDNumber(groupBoxCaixa);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        gridLayout_5->addWidget(lcdNumber, 0, 2, 1, 1);

        labelDimY = new QLabel(groupBoxCaixa);
        labelDimY->setObjectName(QString::fromUtf8("labelDimY"));
        labelDimY->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelDimY, 1, 0, 1, 1);

        horizontalSliderDimY = new QSlider(groupBoxCaixa);
        horizontalSliderDimY->setObjectName(QString::fromUtf8("horizontalSliderDimY"));
        horizontalSliderDimY->setMaximum(15);
        horizontalSliderDimY->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSliderDimY, 1, 1, 1, 1);

        lcdNumber_3 = new QLCDNumber(groupBoxCaixa);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));

        gridLayout_5->addWidget(lcdNumber_3, 1, 2, 1, 1);

        labelDimZ = new QLabel(groupBoxCaixa);
        labelDimZ->setObjectName(QString::fromUtf8("labelDimZ"));
        labelDimZ->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelDimZ, 2, 0, 1, 1);

        horizontalSliderDimZ = new QSlider(groupBoxCaixa);
        horizontalSliderDimZ->setObjectName(QString::fromUtf8("horizontalSliderDimZ"));
        horizontalSliderDimZ->setMaximum(15);
        horizontalSliderDimZ->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSliderDimZ, 2, 1, 1, 1);

        lcdNumber_2 = new QLCDNumber(groupBoxCaixa);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        gridLayout_5->addWidget(lcdNumber_2, 2, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout_5, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBoxCaixa);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 390, 781, 151));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBoxCoordenadas = new QGroupBox(layoutWidget3);
        groupBoxCoordenadas->setObjectName(QString::fromUtf8("groupBoxCoordenadas"));
        groupBoxCoordenadas->setAlignment(Qt::AlignCenter);
        layoutWidget4 = new QWidget(groupBoxCoordenadas);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(18, 22, 341, 111));
        gridLayout_7 = new QGridLayout(layoutWidget4);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalSliderZ = new QSlider(layoutWidget4);
        horizontalSliderZ->setObjectName(QString::fromUtf8("horizontalSliderZ"));
        horizontalSliderZ->setMaximum(30);
        horizontalSliderZ->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(horizontalSliderZ, 0, 1, 1, 1);

        labelZ = new QLabel(layoutWidget4);
        labelZ->setObjectName(QString::fromUtf8("labelZ"));
        labelZ->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(labelZ, 0, 0, 1, 1);

        lcdNumberZ = new QLCDNumber(layoutWidget4);
        lcdNumberZ->setObjectName(QString::fromUtf8("lcdNumberZ"));

        gridLayout_7->addWidget(lcdNumberZ, 0, 2, 1, 1);


        horizontalLayout_2->addWidget(groupBoxCoordenadas);

        groupBox = new QGroupBox(layoutWidget3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        layoutWidget5 = new QWidget(groupBox);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(20, 20, 351, 111));
        gridLayout_8 = new QGridLayout(layoutWidget5);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalSliderG = new QSlider(layoutWidget5);
        horizontalSliderG->setObjectName(QString::fromUtf8("horizontalSliderG"));
        horizontalSliderG->setMaximum(255);
        horizontalSliderG->setOrientation(Qt::Horizontal);

        gridLayout_8->addWidget(horizontalSliderG, 1, 1, 1, 1);

        lcdNumberB = new QLCDNumber(layoutWidget5);
        lcdNumberB->setObjectName(QString::fromUtf8("lcdNumberB"));

        gridLayout_8->addWidget(lcdNumberB, 2, 2, 1, 1);

        labelB = new QLabel(layoutWidget5);
        labelB->setObjectName(QString::fromUtf8("labelB"));
        labelB->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(labelB, 2, 0, 1, 1);

        lcdNumberG = new QLCDNumber(layoutWidget5);
        lcdNumberG->setObjectName(QString::fromUtf8("lcdNumberG"));

        gridLayout_8->addWidget(lcdNumberG, 1, 2, 1, 1);

        horizontalSliderB = new QSlider(layoutWidget5);
        horizontalSliderB->setObjectName(QString::fromUtf8("horizontalSliderB"));
        horizontalSliderB->setMaximum(255);
        horizontalSliderB->setOrientation(Qt::Horizontal);

        gridLayout_8->addWidget(horizontalSliderB, 2, 1, 1, 1);

        labelG = new QLabel(layoutWidget5);
        labelG->setObjectName(QString::fromUtf8("labelG"));
        labelG->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(labelG, 1, 0, 1, 1);

        lcdNumberR = new QLCDNumber(layoutWidget5);
        lcdNumberR->setObjectName(QString::fromUtf8("lcdNumberR"));

        gridLayout_8->addWidget(lcdNumberR, 0, 2, 1, 1);

        labelR = new QLabel(layoutWidget5);
        labelR->setObjectName(QString::fromUtf8("labelR"));
        labelR->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(labelR, 0, 0, 1, 1);

        horizontalSliderR = new QSlider(layoutWidget5);
        horizontalSliderR->setObjectName(QString::fromUtf8("horizontalSliderR"));
        horizontalSliderR->setMaximum(255);
        horizontalSliderR->setOrientation(Qt::Horizontal);

        gridLayout_8->addWidget(horizontalSliderR, 0, 1, 1, 1);


        horizontalLayout_2->addWidget(groupBox);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 798, 20));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuArquivo->menuAction());
        menuArquivo->addSeparator();
        menuArquivo->addSeparator();
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionEditar);
        menuArquivo->addAction(actionSair);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionPutV);
        toolBar->addAction(actionCutV);
        toolBar->addAction(actionPutBox);
        toolBar->addAction(actionCutbox);
        toolBar->addAction(actionPutCircle);
        toolBar->addAction(actionCutcircle);
        toolBar->addAction(actionPutsphere);
        toolBar->addAction(actionCutSphere);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderRaio, SIGNAL(valueChanged(int)), lcdNumberRaio, SLOT(display(int)));
        QObject::connect(horizontalSlider1ELipse, SIGNAL(valueChanged(int)), lcdNumber_4, SLOT(display(int)));
        QObject::connect(horizontalSlider2Elipse, SIGNAL(valueChanged(int)), lcdNumber_5, SLOT(display(int)));
        QObject::connect(horizontalSlider3Elipseslider3Elipse, SIGNAL(valueChanged(int)), lcdNumber_6, SLOT(display(int)));
        QObject::connect(horizontalSliderDimX, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(horizontalSliderDimY, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));
        QObject::connect(horizontalSliderDimZ, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(horizontalSliderR, SIGNAL(valueChanged(int)), lcdNumberR, SLOT(display(int)));
        QObject::connect(horizontalSliderG, SIGNAL(valueChanged(int)), lcdNumberG, SLOT(display(int)));
        QObject::connect(horizontalSliderB, SIGNAL(valueChanged(int)), lcdNumberB, SLOT(display(int)));
        QObject::connect(actionSair, SIGNAL(triggered()), MainWindow, SLOT(sair()));
        QObject::connect(horizontalSliderZ, SIGNAL(valueChanged(int)), lcdNumberZ, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSalvar->setText(QApplication::translate("MainWindow", "Salvar", nullptr));
        actionEditar->setText(QApplication::translate("MainWindow", "Editar", nullptr));
        actionSair->setText(QApplication::translate("MainWindow", "Sair", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "New", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionPutV->setText(QApplication::translate("MainWindow", "PutV", nullptr));
        actionCutV->setText(QApplication::translate("MainWindow", "CutV", nullptr));
        actionPutBox->setText(QApplication::translate("MainWindow", "PutBox", nullptr));
        actionCutbox->setText(QApplication::translate("MainWindow", "Cutbox", nullptr));
        actionPutCircle->setText(QApplication::translate("MainWindow", "PutCircle", nullptr));
        actionCutcircle->setText(QApplication::translate("MainWindow", "Cutcircle", nullptr));
        actionPutsphere->setText(QApplication::translate("MainWindow", "Putsphere", nullptr));
        actionCutSphere->setText(QApplication::translate("MainWindow", "CutSphere", nullptr));
        groupBoxRaio->setTitle(QApplication::translate("MainWindow", "Raio ", nullptr));
        groupBoxElipse->setTitle(QApplication::translate("MainWindow", "Elipse", nullptr));
        labelRx->setText(QApplication::translate("MainWindow", "   Rx  ", nullptr));
        labelRy->setText(QApplication::translate("MainWindow", " Ry", nullptr));
        labelRz->setText(QApplication::translate("MainWindow", "Rz", nullptr));
        groupBoxCaixa->setTitle(QApplication::translate("MainWindow", "Caixa", nullptr));
        labelDimx->setText(QApplication::translate("MainWindow", "DimX", nullptr));
        labelDimY->setText(QApplication::translate("MainWindow", "DimY", nullptr));
        labelDimZ->setText(QApplication::translate("MainWindow", "DimZ", nullptr));
        groupBoxCoordenadas->setTitle(QApplication::translate("MainWindow", "Profundisade", nullptr));
        labelZ->setText(QApplication::translate("MainWindow", "Z", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Cor", nullptr));
        labelB->setText(QApplication::translate("MainWindow", "B", nullptr));
        labelG->setText(QApplication::translate("MainWindow", "G", nullptr));
        labelR->setText(QApplication::translate("MainWindow", "R", nullptr));
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Arquivo", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
