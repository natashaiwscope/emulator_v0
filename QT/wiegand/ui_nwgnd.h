/********************************************************************************
** Form generated from reading UI file 'nwgnd.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NWGND_H
#define UI_NWGND_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Nwgnd
{
public:
    QLabel *commLED;
    QLineEdit *statusLineEdit;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QLineEdit *facCodeLineEdit;
    QLineEdit *csvFilePathLineEdit;
    QLineEdit *cardNumLineEdit;
    QPushButton *startCScript;
    QPushButton *startCSV;
    QLabel *label_4;
    QPushButton *wiegScan;
    QLineEdit *cFilePathLineEdit;
    QLabel *connLED;
    QPushButton *browseCSVFile;
    QPushButton *browseCFile;
    QLabel *label_5;
    QLineEdit *cardNumIntLineEdit;
    QPushButton *wiegScanRAW;
    QLineEdit *cardNumRAWLineEdit;
    QLabel *label_6;
    QPushButton *wiegScanRAW_2;
    QLabel *label_7;
    QLineEdit *timeOUTLineEdit;
    QWidget *tab_4;

    void setupUi(QWidget *Nwgnd)
    {
        if (Nwgnd->objectName().isEmpty())
            Nwgnd->setObjectName(QString::fromUtf8("Nwgnd"));
        Nwgnd->resize(976, 637);
        commLED = new QLabel(Nwgnd);
        commLED->setObjectName(QString::fromUtf8("commLED"));
        commLED->setGeometry(QRect(630, 10, 291, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        commLED->setFont(font);
        statusLineEdit = new QLineEdit(Nwgnd);
        statusLineEdit->setObjectName(QString::fromUtf8("statusLineEdit"));
        statusLineEdit->setGeometry(QRect(0, 490, 881, 41));
        QFont font1;
        font1.setPointSize(20);
        statusLineEdit->setFont(font1);
        tabWidget = new QTabWidget(Nwgnd);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 50, 881, 441));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        tabWidget->setFont(font2);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        facCodeLineEdit = new QLineEdit(tab_3);
        facCodeLineEdit->setObjectName(QString::fromUtf8("facCodeLineEdit"));
        facCodeLineEdit->setGeometry(QRect(130, 140, 201, 41));
        facCodeLineEdit->setFont(font1);
        csvFilePathLineEdit = new QLineEdit(tab_3);
        csvFilePathLineEdit->setObjectName(QString::fromUtf8("csvFilePathLineEdit"));
        csvFilePathLineEdit->setGeometry(QRect(200, 310, 661, 41));
        csvFilePathLineEdit->setFont(font1);
        cardNumLineEdit = new QLineEdit(tab_3);
        cardNumLineEdit->setObjectName(QString::fromUtf8("cardNumLineEdit"));
        cardNumLineEdit->setGeometry(QRect(340, 140, 391, 41));
        cardNumLineEdit->setFont(font1);
        startCScript = new QPushButton(tab_3);
        startCScript->setObjectName(QString::fromUtf8("startCScript"));
        startCScript->setGeometry(QRect(10, 360, 181, 41));
        startCScript->setFont(font2);
        startCSV = new QPushButton(tab_3);
        startCSV->setObjectName(QString::fromUtf8("startCSV"));
        startCSV->setGeometry(QRect(450, 260, 181, 41));
        startCSV->setFont(font2);
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 150, 131, 31));
        label_4->setFont(font);
        wiegScan = new QPushButton(tab_3);
        wiegScan->setObjectName(QString::fromUtf8("wiegScan"));
        wiegScan->setGeometry(QRect(740, 140, 121, 41));
        wiegScan->setFont(font2);
        cFilePathLineEdit = new QLineEdit(tab_3);
        cFilePathLineEdit->setObjectName(QString::fromUtf8("cFilePathLineEdit"));
        cFilePathLineEdit->setGeometry(QRect(200, 360, 661, 41));
        cFilePathLineEdit->setFont(font1);
        connLED = new QLabel(tab_3);
        connLED->setObjectName(QString::fromUtf8("connLED"));
        connLED->setGeometry(QRect(0, 10, 10, 30));
        connLED->setAutoFillBackground(true);
        browseCSVFile = new QPushButton(tab_3);
        browseCSVFile->setObjectName(QString::fromUtf8("browseCSVFile"));
        browseCSVFile->setGeometry(QRect(10, 310, 181, 41));
        browseCSVFile->setFont(font2);
        browseCFile = new QPushButton(tab_3);
        browseCFile->setObjectName(QString::fromUtf8("browseCFile"));
        browseCFile->setGeometry(QRect(730, 260, 121, 41));
        browseCFile->setFont(font2);
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 80, 121, 31));
        label_5->setFont(font);
        cardNumIntLineEdit = new QLineEdit(tab_3);
        cardNumIntLineEdit->setObjectName(QString::fromUtf8("cardNumIntLineEdit"));
        cardNumIntLineEdit->setGeometry(QRect(130, 80, 601, 41));
        cardNumIntLineEdit->setFont(font1);
        wiegScanRAW = new QPushButton(tab_3);
        wiegScanRAW->setObjectName(QString::fromUtf8("wiegScanRAW"));
        wiegScanRAW->setGeometry(QRect(740, 200, 121, 41));
        wiegScanRAW->setFont(font2);
        cardNumRAWLineEdit = new QLineEdit(tab_3);
        cardNumRAWLineEdit->setObjectName(QString::fromUtf8("cardNumRAWLineEdit"));
        cardNumRAWLineEdit->setGeometry(QRect(130, 200, 601, 41));
        cardNumRAWLineEdit->setFont(font1);
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 210, 121, 31));
        label_6->setFont(font);
        wiegScanRAW_2 = new QPushButton(tab_3);
        wiegScanRAW_2->setObjectName(QString::fromUtf8("wiegScanRAW_2"));
        wiegScanRAW_2->setGeometry(QRect(740, 80, 121, 41));
        wiegScanRAW_2->setFont(font2);
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(540, 10, 111, 31));
        label_7->setFont(font);
        timeOUTLineEdit = new QLineEdit(tab_3);
        timeOUTLineEdit->setObjectName(QString::fromUtf8("timeOUTLineEdit"));
        timeOUTLineEdit->setGeometry(QRect(660, 10, 201, 41));
        timeOUTLineEdit->setFont(font1);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());

        retranslateUi(Nwgnd);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Nwgnd);
    } // setupUi

    void retranslateUi(QWidget *Nwgnd)
    {
        Nwgnd->setWindowTitle(QApplication::translate("Nwgnd", "MainWindow", 0, QApplication::UnicodeUTF8));
        commLED->setText(QApplication::translate("Nwgnd", "<html><head/><body><p>TEST APPLICATION</p></body></html>", 0, QApplication::UnicodeUTF8));
        startCScript->setText(QApplication::translate("Nwgnd", "Start \"C\"", 0, QApplication::UnicodeUTF8));
        startCSV->setText(QApplication::translate("Nwgnd", "Start CSV", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Nwgnd", "<html><head/><body><p>CARD Num</p></body></html>", 0, QApplication::UnicodeUTF8));
        wiegScan->setText(QApplication::translate("Nwgnd", "SCAN", 0, QApplication::UnicodeUTF8));
        connLED->setText(QString());
        browseCSVFile->setText(QApplication::translate("Nwgnd", "BrowseCSV", 0, QApplication::UnicodeUTF8));
        browseCFile->setText(QApplication::translate("Nwgnd", "Browse \"C\"", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Nwgnd", "<html><head/><body><p>Uint Card</p></body></html>", 0, QApplication::UnicodeUTF8));
        wiegScanRAW->setText(QApplication::translate("Nwgnd", "RAW Scan", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Nwgnd", "<html><head/><body><p>RAW Card</p></body></html>", 0, QApplication::UnicodeUTF8));
        wiegScanRAW_2->setText(QApplication::translate("Nwgnd", "INTCardScan", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Nwgnd", "<html><head/><body><p>TIMEOUT</p></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Nwgnd", "Tab 1", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Nwgnd", "Tab 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Nwgnd: public Ui_Nwgnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NWGND_H
