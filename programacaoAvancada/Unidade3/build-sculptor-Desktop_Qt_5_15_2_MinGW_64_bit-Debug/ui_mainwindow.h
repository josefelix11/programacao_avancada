/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
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
    QWidget *centralwidget;
    VisaoXY *widget;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonNew;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonPutVoxel;
    QPushButton *pushButtonCutVoxel;
    QPushButton *pushButtonPutBox;
    QPushButton *pushButtonCutBox;
    QPushButton *pushButtonPutCircle;
    QPushButton *pushButtonCutCircle;
    QPushButton *pushButtonPutSphere;
    QPushButton *pushButtonCutSphere;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBoxRaio;
    QWidget *widget3;
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
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBoxCoordenadas;
    QWidget *widget5;
    QGridLayout *gridLayout_7;
    QSlider *horizontalSliderZ;
    QLabel *labelZ;
    QLCDNumber *lcdNumberZ;
    QGroupBox *groupBox;
    QWidget *widget6;
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
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new VisaoXY(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 40, 331, 331));
        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 10, 781, 26));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButtonNew = new QPushButton(widget1);
        pushButtonNew->setObjectName(QString::fromUtf8("pushButtonNew"));

        horizontalLayout_3->addWidget(pushButtonNew);

        pushButtonSave = new QPushButton(widget1);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));

        horizontalLayout_3->addWidget(pushButtonSave);

        pushButtonPutVoxel = new QPushButton(widget1);
        pushButtonPutVoxel->setObjectName(QString::fromUtf8("pushButtonPutVoxel"));

        horizontalLayout_3->addWidget(pushButtonPutVoxel);

        pushButtonCutVoxel = new QPushButton(widget1);
        pushButtonCutVoxel->setObjectName(QString::fromUtf8("pushButtonCutVoxel"));

        horizontalLayout_3->addWidget(pushButtonCutVoxel);

        pushButtonPutBox = new QPushButton(widget1);
        pushButtonPutBox->setObjectName(QString::fromUtf8("pushButtonPutBox"));

        horizontalLayout_3->addWidget(pushButtonPutBox);

        pushButtonCutBox = new QPushButton(widget1);
        pushButtonCutBox->setObjectName(QString::fromUtf8("pushButtonCutBox"));

        horizontalLayout_3->addWidget(pushButtonCutBox);

        pushButtonPutCircle = new QPushButton(widget1);
        pushButtonPutCircle->setObjectName(QString::fromUtf8("pushButtonPutCircle"));

        horizontalLayout_3->addWidget(pushButtonPutCircle);

        pushButtonCutCircle = new QPushButton(widget1);
        pushButtonCutCircle->setObjectName(QString::fromUtf8("pushButtonCutCircle"));

        horizontalLayout_3->addWidget(pushButtonCutCircle);

        pushButtonPutSphere = new QPushButton(widget1);
        pushButtonPutSphere->setObjectName(QString::fromUtf8("pushButtonPutSphere"));

        horizontalLayout_3->addWidget(pushButtonPutSphere);

        pushButtonCutSphere = new QPushButton(widget1);
        pushButtonCutSphere->setObjectName(QString::fromUtf8("pushButtonCutSphere"));

        horizontalLayout_3->addWidget(pushButtonCutSphere);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(530, 50, 261, 311));
        verticalLayout_2 = new QVBoxLayout(widget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBoxRaio = new QGroupBox(widget2);
        groupBoxRaio->setObjectName(QString::fromUtf8("groupBoxRaio"));
        groupBoxRaio->setLayoutDirection(Qt::RightToLeft);
        groupBoxRaio->setAlignment(Qt::AlignCenter);
        widget3 = new QWidget(groupBoxRaio);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(10, 20, 251, 25));
        gridLayout_6 = new QGridLayout(widget3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        lcdNumberRaio = new QLCDNumber(widget3);
        lcdNumberRaio->setObjectName(QString::fromUtf8("lcdNumberRaio"));

        gridLayout_6->addWidget(lcdNumberRaio, 0, 1, 1, 1);

        horizontalSliderRaio = new QSlider(widget3);
        horizontalSliderRaio->setObjectName(QString::fromUtf8("horizontalSliderRaio"));
        horizontalSliderRaio->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(horizontalSliderRaio, 0, 2, 1, 1);


        verticalLayout_2->addWidget(groupBoxRaio);

        groupBoxElipse = new QGroupBox(widget2);
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
        horizontalSlider1ELipse->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider1ELipse, 0, 1, 1, 1);

        horizontalSlider3Elipseslider3Elipse = new QSlider(groupBoxElipse);
        horizontalSlider3Elipseslider3Elipse->setObjectName(QString::fromUtf8("horizontalSlider3Elipseslider3Elipse"));
        horizontalSlider3Elipseslider3Elipse->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider3Elipseslider3Elipse, 2, 1, 1, 1);

        horizontalSlider2Elipse = new QSlider(groupBoxElipse);
        horizontalSlider2Elipse->setObjectName(QString::fromUtf8("horizontalSlider2Elipse"));
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

        groupBoxCaixa = new QGroupBox(widget2);
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
        horizontalSliderDimZ->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSliderDimZ, 2, 1, 1, 1);

        lcdNumber_2 = new QLCDNumber(groupBoxCaixa);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        gridLayout_5->addWidget(lcdNumber_2, 2, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout_5, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBoxCaixa);

        widget4 = new QWidget(centralwidget);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(10, 390, 781, 151));
        horizontalLayout_2 = new QHBoxLayout(widget4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBoxCoordenadas = new QGroupBox(widget4);
        groupBoxCoordenadas->setObjectName(QString::fromUtf8("groupBoxCoordenadas"));
        groupBoxCoordenadas->setAlignment(Qt::AlignCenter);
        widget5 = new QWidget(groupBoxCoordenadas);
        widget5->setObjectName(QString::fromUtf8("widget5"));
        widget5->setGeometry(QRect(18, 22, 341, 111));
        gridLayout_7 = new QGridLayout(widget5);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalSliderZ = new QSlider(widget5);
        horizontalSliderZ->setObjectName(QString::fromUtf8("horizontalSliderZ"));
        horizontalSliderZ->setMaximum(30);
        horizontalSliderZ->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(horizontalSliderZ, 0, 1, 1, 1);

        labelZ = new QLabel(widget5);
        labelZ->setObjectName(QString::fromUtf8("labelZ"));
        labelZ->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(labelZ, 0, 0, 1, 1);

        lcdNumberZ = new QLCDNumber(widget5);
        lcdNumberZ->setObjectName(QString::fromUtf8("lcdNumberZ"));

        gridLayout_7->addWidget(lcdNumberZ, 0, 2, 1, 1);


        horizontalLayout_2->addWidget(groupBoxCoordenadas);

        groupBox = new QGroupBox(widget4);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        widget6 = new QWidget(groupBox);
        widget6->setObjectName(QString::fromUtf8("widget6"));
        widget6->setGeometry(QRect(20, 20, 351, 111));
        gridLayout_8 = new QGridLayout(widget6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalSliderG = new QSlider(widget6);
        horizontalSliderG->setObjectName(QString::fromUtf8("horizontalSliderG"));
        horizontalSliderG->setOrientation(Qt::Horizontal);

        gridLayout_8->addWidget(horizontalSliderG, 1, 1, 1, 1);

        lcdNumberB = new QLCDNumber(widget6);
        lcdNumberB->setObjectName(QString::fromUtf8("lcdNumberB"));

        gridLayout_8->addWidget(lcdNumberB, 2, 2, 1, 1);

        labelB = new QLabel(widget6);
        labelB->setObjectName(QString::fromUtf8("labelB"));
        labelB->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(labelB, 2, 0, 1, 1);

        lcdNumberG = new QLCDNumber(widget6);
        lcdNumberG->setObjectName(QString::fromUtf8("lcdNumberG"));

        gridLayout_8->addWidget(lcdNumberG, 1, 2, 1, 1);

        horizontalSliderB = new QSlider(widget6);
        horizontalSliderB->setObjectName(QString::fromUtf8("horizontalSliderB"));
        horizontalSliderB->setOrientation(Qt::Horizontal);

        gridLayout_8->addWidget(horizontalSliderB, 2, 1, 1, 1);

        labelG = new QLabel(widget6);
        labelG->setObjectName(QString::fromUtf8("labelG"));
        labelG->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(labelG, 1, 0, 1, 1);

        lcdNumberR = new QLCDNumber(widget6);
        lcdNumberR->setObjectName(QString::fromUtf8("lcdNumberR"));

        gridLayout_8->addWidget(lcdNumberR, 0, 2, 1, 1);

        labelR = new QLabel(widget6);
        labelR->setObjectName(QString::fromUtf8("labelR"));
        labelR->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(labelR, 0, 0, 1, 1);

        horizontalSliderR = new QSlider(widget6);
        horizontalSliderR->setObjectName(QString::fromUtf8("horizontalSliderR"));
        horizontalSliderR->setOrientation(Qt::Horizontal);

        gridLayout_8->addWidget(horizontalSliderR, 0, 1, 1, 1);


        horizontalLayout_2->addWidget(groupBox);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 798, 22));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuArquivo->menuAction());
        menuArquivo->addSeparator();
        menuArquivo->addSeparator();
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionEditar);
        menuArquivo->addAction(actionSair);

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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
        actionEditar->setText(QCoreApplication::translate("MainWindow", "Editar", nullptr));
        actionSair->setText(QCoreApplication::translate("MainWindow", "Sair", nullptr));
        pushButtonNew->setText(QCoreApplication::translate("MainWindow", "NEW", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        pushButtonPutVoxel->setText(QCoreApplication::translate("MainWindow", "PutV", nullptr));
        pushButtonCutVoxel->setText(QCoreApplication::translate("MainWindow", "CUTV", nullptr));
        pushButtonPutBox->setText(QCoreApplication::translate("MainWindow", "PutBox", nullptr));
        pushButtonCutBox->setText(QCoreApplication::translate("MainWindow", "CutBox", nullptr));
        pushButtonPutCircle->setText(QCoreApplication::translate("MainWindow", "PutCircle", nullptr));
        pushButtonCutCircle->setText(QCoreApplication::translate("MainWindow", "CutCircle", nullptr));
        pushButtonPutSphere->setText(QCoreApplication::translate("MainWindow", "PutSphere", nullptr));
        pushButtonCutSphere->setText(QCoreApplication::translate("MainWindow", "CutSphere", nullptr));
        groupBoxRaio->setTitle(QCoreApplication::translate("MainWindow", "Raio ", nullptr));
        groupBoxElipse->setTitle(QCoreApplication::translate("MainWindow", "Elipse", nullptr));
        labelRx->setText(QCoreApplication::translate("MainWindow", "   Rx  ", nullptr));
        labelRy->setText(QCoreApplication::translate("MainWindow", " Ry", nullptr));
        labelRz->setText(QCoreApplication::translate("MainWindow", "Rz", nullptr));
        groupBoxCaixa->setTitle(QCoreApplication::translate("MainWindow", "Caixa", nullptr));
        labelDimx->setText(QCoreApplication::translate("MainWindow", "DimX", nullptr));
        labelDimY->setText(QCoreApplication::translate("MainWindow", "DimY", nullptr));
        labelDimZ->setText(QCoreApplication::translate("MainWindow", "DimZ", nullptr));
        groupBoxCoordenadas->setTitle(QCoreApplication::translate("MainWindow", "Profundisade", nullptr));
        labelZ->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Cor", nullptr));
        labelB->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        labelG->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        labelR->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainWindow", "Arquivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
