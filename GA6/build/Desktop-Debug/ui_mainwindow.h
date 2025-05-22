/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "oblastcrtanjaopengl.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_3;
    QGridLayout *gridLayout_2;
    OblastCrtanjaOpenGL *openGLWidget;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QPushButton *Zapocni_dugme;
    QPushButton *Zaustavi_dugme;
    QPushButton *Sledeci_dugme;
    QPushButton *Ispocetka_dugme;
    QVBoxLayout *vLayoutOpseg;
    QLabel *labelOpseg;
    QHBoxLayout *hLayoutTacke;
    QVBoxLayout *vLayoutPrvaTacka;
    QLineEdit *lineEditX1;
    QLineEdit *lineEditY1;
    QVBoxLayout *vLayoutDrugaTacka;
    QLineEdit *lineEditX2;
    QLineEdit *lineEditY2;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QComboBox *tipAlgoritma;
    QVBoxLayout *verticalLayout_2;
    QPushButton *datoteka_dugme;
    QLineEdit *brojNasumicniTacaka;
    QPushButton *Nasumicni_dugme;
    QPushButton *Ponisti_dugme;
    QPushButton *merenjeButton;
    QCheckBox *naivniCheck;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1183, 1040);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(221, 230, 232, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(238, 242, 243, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(110, 115, 116, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(147, 153, 154, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        QBrush brush8(QColor(0, 0, 0, 128));
        brush8.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        MainWindow->setPalette(palette);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_2 = new QGridLayout(tab_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        openGLWidget = new OblastCrtanjaOpenGL(tab_3);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));

        gridLayout_2->addWidget(openGLWidget, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 1, 3, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(300, 0));
        groupBox_2->setMaximumSize(QSize(300, 16777215));
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Zapocni_dugme = new QPushButton(groupBox_2);
        Zapocni_dugme->setObjectName(QString::fromUtf8("Zapocni_dugme"));

        verticalLayout->addWidget(Zapocni_dugme);

        Zaustavi_dugme = new QPushButton(groupBox_2);
        Zaustavi_dugme->setObjectName(QString::fromUtf8("Zaustavi_dugme"));

        verticalLayout->addWidget(Zaustavi_dugme);

        Sledeci_dugme = new QPushButton(groupBox_2);
        Sledeci_dugme->setObjectName(QString::fromUtf8("Sledeci_dugme"));

        verticalLayout->addWidget(Sledeci_dugme);

        Ispocetka_dugme = new QPushButton(groupBox_2);
        Ispocetka_dugme->setObjectName(QString::fromUtf8("Ispocetka_dugme"));

        verticalLayout->addWidget(Ispocetka_dugme);


        verticalLayout_5->addLayout(verticalLayout);

        vLayoutOpseg = new QVBoxLayout();
        vLayoutOpseg->setSpacing(6);
        vLayoutOpseg->setObjectName(QString::fromUtf8("vLayoutOpseg"));
        labelOpseg = new QLabel(groupBox_2);
        labelOpseg->setObjectName(QString::fromUtf8("labelOpseg"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelOpseg->sizePolicy().hasHeightForWidth());
        labelOpseg->setSizePolicy(sizePolicy);
        labelOpseg->setMinimumSize(QSize(300, 0));
        labelOpseg->setMaximumSize(QSize(250, 20));
        labelOpseg->setVisible(false);

        vLayoutOpseg->addWidget(labelOpseg);

        hLayoutTacke = new QHBoxLayout();
        hLayoutTacke->setSpacing(6);
        hLayoutTacke->setObjectName(QString::fromUtf8("hLayoutTacke"));
        vLayoutPrvaTacka = new QVBoxLayout();
        vLayoutPrvaTacka->setSpacing(6);
        vLayoutPrvaTacka->setObjectName(QString::fromUtf8("vLayoutPrvaTacka"));
        lineEditX1 = new QLineEdit(groupBox_2);
        lineEditX1->setObjectName(QString::fromUtf8("lineEditX1"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditX1->sizePolicy().hasHeightForWidth());
        lineEditX1->setSizePolicy(sizePolicy1);
        lineEditX1->setVisible(false);

        vLayoutPrvaTacka->addWidget(lineEditX1);

        lineEditY1 = new QLineEdit(groupBox_2);
        lineEditY1->setObjectName(QString::fromUtf8("lineEditY1"));
        sizePolicy1.setHeightForWidth(lineEditY1->sizePolicy().hasHeightForWidth());
        lineEditY1->setSizePolicy(sizePolicy1);
        lineEditY1->setVisible(false);

        vLayoutPrvaTacka->addWidget(lineEditY1);


        hLayoutTacke->addLayout(vLayoutPrvaTacka);

        vLayoutDrugaTacka = new QVBoxLayout();
        vLayoutDrugaTacka->setSpacing(6);
        vLayoutDrugaTacka->setObjectName(QString::fromUtf8("vLayoutDrugaTacka"));
        lineEditX2 = new QLineEdit(groupBox_2);
        lineEditX2->setObjectName(QString::fromUtf8("lineEditX2"));
        sizePolicy1.setHeightForWidth(lineEditX2->sizePolicy().hasHeightForWidth());
        lineEditX2->setSizePolicy(sizePolicy1);
        lineEditX2->setVisible(false);

        vLayoutDrugaTacka->addWidget(lineEditX2);

        lineEditY2 = new QLineEdit(groupBox_2);
        lineEditY2->setObjectName(QString::fromUtf8("lineEditY2"));
        sizePolicy1.setHeightForWidth(lineEditY2->sizePolicy().hasHeightForWidth());
        lineEditY2->setSizePolicy(sizePolicy1);
        lineEditY2->setVisible(false);

        vLayoutDrugaTacka->addWidget(lineEditY2);


        hLayoutTacke->addLayout(vLayoutDrugaTacka);


        vLayoutOpseg->addLayout(hLayoutTacke);


        verticalLayout_5->addLayout(vLayoutOpseg);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        gridLayout->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(300, 0));
        groupBox->setMaximumSize(QSize(300, 16777215));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        tipAlgoritma = new QComboBox(groupBox);
        tipAlgoritma->addItem(QString());
        tipAlgoritma->addItem(QString());
        tipAlgoritma->addItem(QString());
        tipAlgoritma->addItem(QString());
        tipAlgoritma->addItem(QString());
        tipAlgoritma->addItem(QString());
        tipAlgoritma->addItem(QString());
        tipAlgoritma->addItem(QString());
        tipAlgoritma->addItem(QString());
        tipAlgoritma->addItem(QString());
        tipAlgoritma->addItem(QString());
        tipAlgoritma->addItem(QString());
        tipAlgoritma->setObjectName(QString::fromUtf8("tipAlgoritma"));

        verticalLayout_3->addWidget(tipAlgoritma);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        datoteka_dugme = new QPushButton(groupBox);
        datoteka_dugme->setObjectName(QString::fromUtf8("datoteka_dugme"));

        verticalLayout_2->addWidget(datoteka_dugme);

        brojNasumicniTacaka = new QLineEdit(groupBox);
        brojNasumicniTacaka->setObjectName(QString::fromUtf8("brojNasumicniTacaka"));

        verticalLayout_2->addWidget(brojNasumicniTacaka);

        Nasumicni_dugme = new QPushButton(groupBox);
        Nasumicni_dugme->setObjectName(QString::fromUtf8("Nasumicni_dugme"));

        verticalLayout_2->addWidget(Nasumicni_dugme);

        Ponisti_dugme = new QPushButton(groupBox);
        Ponisti_dugme->setObjectName(QString::fromUtf8("Ponisti_dugme"));

        verticalLayout_2->addWidget(Ponisti_dugme);

        merenjeButton = new QPushButton(groupBox);
        merenjeButton->setObjectName(QString::fromUtf8("merenjeButton"));

        verticalLayout_2->addWidget(merenjeButton);

        naivniCheck = new QCheckBox(groupBox);
        naivniCheck->setObjectName(QString::fromUtf8("naivniCheck"));
        naivniCheck->setEnabled(false);
        naivniCheck->setToolTipDuration(3);

        verticalLayout_2->addWidget(naivniCheck);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1183, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Geometrijski algoritmi @ MATF", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Vizuelizacija 2D", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Vizuelizacija 3D", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Poredjenje efikasnosti", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "NAREDBE", nullptr));
        Zapocni_dugme->setText(QCoreApplication::translate("MainWindow", "&Zapocni", nullptr));
        Zaustavi_dugme->setText(QCoreApplication::translate("MainWindow", "Zaustavi/Nastavi", nullptr));
        Sledeci_dugme->setText(QCoreApplication::translate("MainWindow", "Sledeci", nullptr));
        Ispocetka_dugme->setText(QCoreApplication::translate("MainWindow", "&Ispocetka", nullptr));
        labelOpseg->setText(QCoreApplication::translate("MainWindow", "UPIT NAD PRAVOUGAONIM OPSEGOM", nullptr));
        lineEditX1->setPlaceholderText(QCoreApplication::translate("MainWindow", "x1", nullptr));
        lineEditY1->setPlaceholderText(QCoreApplication::translate("MainWindow", "y1", nullptr));
        lineEditX2->setPlaceholderText(QCoreApplication::translate("MainWindow", "x2", nullptr));
        lineEditY2->setPlaceholderText(QCoreApplication::translate("MainWindow", "y2", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "ODABIR PARAMETARA", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Odabrati algoritam", nullptr));
        tipAlgoritma->setItemText(0, QCoreApplication::translate("MainWindow", "SA CASOVA VEZBI", nullptr));
        tipAlgoritma->setItemText(1, QCoreApplication::translate("MainWindow", "Demonstracija iscrtavanja", nullptr));
        tipAlgoritma->setItemText(2, QCoreApplication::translate("MainWindow", "Brisuca prava", nullptr));
        tipAlgoritma->setItemText(3, QCoreApplication::translate("MainWindow", "3D iscrtavanje", nullptr));
        tipAlgoritma->setItemText(4, QCoreApplication::translate("MainWindow", "Konveksni omotac", nullptr));
        tipAlgoritma->setItemText(5, QCoreApplication::translate("MainWindow", "Konveksni omotac 3D", nullptr));
        tipAlgoritma->setItemText(6, QCoreApplication::translate("MainWindow", "Preseci duzi", nullptr));
        tipAlgoritma->setItemText(7, QCoreApplication::translate("MainWindow", "DCEL Demo", nullptr));
        tipAlgoritma->setItemText(8, QCoreApplication::translate("MainWindow", "Triangulacija", nullptr));
        tipAlgoritma->setItemText(9, QCoreApplication::translate("MainWindow", "STUDENTSKI PROJEKTI", nullptr));
        tipAlgoritma->setItemText(10, QCoreApplication::translate("MainWindow", "Presek pravougaonika", nullptr));
        tipAlgoritma->setItemText(11, QCoreApplication::translate("MainWindow", "MaxNumOfVP", nullptr));

        datoteka_dugme->setText(QCoreApplication::translate("MainWindow", "Ucitaj iz datoteke", nullptr));
        Nasumicni_dugme->setText(QCoreApplication::translate("MainWindow", "&Odaberi nasumicne", nullptr));
        Ponisti_dugme->setText(QCoreApplication::translate("MainWindow", "Ponisti sve", nullptr));
        merenjeButton->setText(QCoreApplication::translate("MainWindow", "Zapocni poredjenje", nullptr));
#if QT_CONFIG(tooltip)
        naivniCheck->setToolTip(QCoreApplication::translate("MainWindow", "Ukoliko je opcija oznacena, bice koriscen naivni algoritam umesto obicnog.", nullptr));
#endif // QT_CONFIG(tooltip)
        naivniCheck->setText(QCoreApplication::translate("MainWindow", "Koristi naivni algoritam", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
