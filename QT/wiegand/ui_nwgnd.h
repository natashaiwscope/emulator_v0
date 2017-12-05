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
    QLineEdit *status;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QLineEdit *facCode_2;
    QLineEdit *csvFilePath;
    QLineEdit *cardNum_2;
    QPushButton *startCScript;
    QPushButton *startCSV;
    QLabel *label_4;
    QPushButton *wiegScan;
    QLineEdit *cFilePath;
    QLabel *connLED;
    QPushButton *browseCSVFile;
    QPushButton *browseCFile;
    QLabel *label_5;
    QLineEdit *cardNumInt;
    QPushButton *wiegScanRAW;
    QLineEdit *cardNumRAW;
    QLabel *label_6;
    QPushButton *wiegScanRAW_2;
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
        status = new QLineEdit(Nwgnd);
        status->setObjectName(QString::fromUtf8("status"));
        status->setGeometry(QRect(0, 510, 881, 41));
        QFont font1;
        font1.setPointSize(20);
        status->setFont(font1);
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
        facCode_2 = new QLineEdit(tab_3);
        facCode_2->setObjectName(QString::fromUtf8("facCode_2"));
        facCode_2->setGeometry(QRect(140, 90, 201, 41));
        facCode_2->setFont(font1);
        csvFilePath = new QLineEdit(tab_3);
        csvFilePath->setObjectName(QString::fromUtf8("csvFilePath"));
        csvFilePath->setGeometry(QRect(200, 310, 661, 41));
        csvFilePath->setFont(font1);
        cardNum_2 = new QLineEdit(tab_3);
        cardNum_2->setObjectName(QString::fromUtf8("cardNum_2"));
        cardNum_2->setGeometry(QRect(350, 90, 391, 41));
        cardNum_2->setFont(font1);
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
        label_4->setGeometry(QRect(10, 100, 131, 31));
        label_4->setFont(font);
        wiegScan = new QPushButton(tab_3);
        wiegScan->setObjectName(QString::fromUtf8("wiegScan"));
        wiegScan->setGeometry(QRect(750, 90, 121, 41));
        wiegScan->setFont(font2);
        cFilePath = new QLineEdit(tab_3);
        cFilePath->setObjectName(QString::fromUtf8("cFilePath"));
        cFilePath->setGeometry(QRect(200, 360, 661, 41));
        cFilePath->setFont(font1);
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
        label_5->setGeometry(QRect(10, 30, 121, 31));
        label_5->setFont(font);
        cardNumInt = new QLineEdit(tab_3);
        cardNumInt->setObjectName(QString::fromUtf8("cardNumInt"));
        cardNumInt->setGeometry(QRect(140, 30, 601, 41));
        cardNumInt->setFont(font1);
        wiegScanRAW = new QPushButton(tab_3);
        wiegScanRAW->setObjectName(QString::fromUtf8("wiegScanRAW"));
        wiegScanRAW->setGeometry(QRect(750, 150, 121, 41));
        wiegScanRAW->setFont(font2);
        cardNumRAW = new QLineEdit(tab_3);
        cardNumRAW->setObjectName(QString::fromUtf8("cardNumRAW"));
        cardNumRAW->setGeometry(QRect(140, 150, 601, 41));
        cardNumRAW->setFont(font1);
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 160, 121, 31));
        label_6->setFont(font);
        wiegScanRAW_2 = new QPushButton(tab_3);
        wiegScanRAW_2->setObjectName(QString::fromUtf8("wiegScanRAW_2"));
        wiegScanRAW_2->setGeometry(QRect(750, 30, 121, 41));
        wiegScanRAW_2->setFont(font2);
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
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Nwgnd", "Tab 1", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Nwgnd", "Tab 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Nwgnd: public Ui_Nwgnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NWGND_H
