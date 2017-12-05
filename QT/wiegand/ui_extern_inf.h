/********************************************************************************
** Form generated from reading UI file 'extern_inf.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTERN_INF_H
#define UI_EXTERN_INF_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>
#include "qwwled.h"

QT_BEGIN_NAMESPACE

class Ui_IWExtern
{
public:
    QTextEdit *MainBox_Msg;
    QLCDNumber *Dec_LCD;
    QwwLed *P1_led_y3;
    QwwLed *P1_led_x2;
    QwwLed *P1_led_x1;
    QwwLed *P1_led_y2;
    QwwLed *P1_led_x3;
    QwwLed *P1_led_y1;
    QPushButton *startCalButton_Ex1;
    QPushButton *startCalButton_Ex2;
    QPushButton *startCalButton_Ex3;
    QPushButton *startBoot;
    QPushButton *softReset;
    QLabel *superBanner;
    QLabel *superBanner_2;
    QLabel *superBanner_3;
    QLCDNumber *Hex_LCD;
    QLabel *superBanner_4;
    QLCDNumber *Bin_LCD;

    void setupUi(QWidget *IWExtern)
    {
        if (IWExtern->objectName().isEmpty())
            IWExtern->setObjectName(QString::fromUtf8("IWExtern"));
        IWExtern->resize(920, 492);
        MainBox_Msg = new QTextEdit(IWExtern);
        MainBox_Msg->setObjectName(QString::fromUtf8("MainBox_Msg"));
        MainBox_Msg->setGeometry(QRect(0, 100, 871, 191));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        font.setPointSize(16);
        font.setStyleStrategy(QFont::PreferDefault);
        MainBox_Msg->setFont(font);
        MainBox_Msg->setReadOnly(true);
        Dec_LCD = new QLCDNumber(IWExtern);
        Dec_LCD->setObjectName(QString::fromUtf8("Dec_LCD"));
        Dec_LCD->setGeometry(QRect(80, 350, 311, 61));
        Dec_LCD->setSmallDecimalPoint(true);
        Dec_LCD->setNumDigits(3);
        Dec_LCD->setMode(QLCDNumber::Dec);
        P1_led_y3 = new QwwLed(IWExtern);
        P1_led_y3->setObjectName(QString::fromUtf8("P1_led_y3"));
        P1_led_y3->setGeometry(QRect(870, 380, 41, 41));
        P1_led_x2 = new QwwLed(IWExtern);
        P1_led_x2->setObjectName(QString::fromUtf8("P1_led_x2"));
        P1_led_x2->setGeometry(QRect(830, 340, 41, 41));
        P1_led_x1 = new QwwLed(IWExtern);
        P1_led_x1->setObjectName(QString::fromUtf8("P1_led_x1"));
        P1_led_x1->setGeometry(QRect(790, 340, 41, 41));
        P1_led_y2 = new QwwLed(IWExtern);
        P1_led_y2->setObjectName(QString::fromUtf8("P1_led_y2"));
        P1_led_y2->setGeometry(QRect(830, 380, 41, 41));
        P1_led_x3 = new QwwLed(IWExtern);
        P1_led_x3->setObjectName(QString::fromUtf8("P1_led_x3"));
        P1_led_x3->setGeometry(QRect(870, 340, 41, 41));
        P1_led_y1 = new QwwLed(IWExtern);
        P1_led_y1->setObjectName(QString::fromUtf8("P1_led_y1"));
        P1_led_y1->setGeometry(QRect(790, 380, 41, 41));
        startCalButton_Ex1 = new QPushButton(IWExtern);
        startCalButton_Ex1->setObjectName(QString::fromUtf8("startCalButton_Ex1"));
        startCalButton_Ex1->setGeometry(QRect(10, 300, 131, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Cambria"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        startCalButton_Ex1->setFont(font1);
        startCalButton_Ex1->setAutoFillBackground(true);
        startCalButton_Ex2 = new QPushButton(IWExtern);
        startCalButton_Ex2->setObjectName(QString::fromUtf8("startCalButton_Ex2"));
        startCalButton_Ex2->setGeometry(QRect(150, 300, 141, 41));
        startCalButton_Ex2->setFont(font1);
        startCalButton_Ex3 = new QPushButton(IWExtern);
        startCalButton_Ex3->setObjectName(QString::fromUtf8("startCalButton_Ex3"));
        startCalButton_Ex3->setGeometry(QRect(300, 300, 151, 41));
        startCalButton_Ex3->setFont(font1);
        startBoot = new QPushButton(IWExtern);
        startBoot->setObjectName(QString::fromUtf8("startBoot"));
        startBoot->setGeometry(QRect(610, 290, 141, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Cambria"));
        font2.setPointSize(8);
        startBoot->setFont(font2);
        softReset = new QPushButton(IWExtern);
        softReset->setObjectName(QString::fromUtf8("softReset"));
        softReset->setGeometry(QRect(760, 290, 111, 41));
        softReset->setFont(font2);
        superBanner = new QLabel(IWExtern);
        superBanner->setObjectName(QString::fromUtf8("superBanner"));
        superBanner->setGeometry(QRect(30, 30, 821, 61));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        superBanner->setFont(font3);
        superBanner_2 = new QLabel(IWExtern);
        superBanner_2->setObjectName(QString::fromUtf8("superBanner_2"));
        superBanner_2->setGeometry(QRect(10, 360, 61, 31));
        superBanner_2->setFont(font3);
        superBanner_3 = new QLabel(IWExtern);
        superBanner_3->setObjectName(QString::fromUtf8("superBanner_3"));
        superBanner_3->setGeometry(QRect(400, 360, 61, 31));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        superBanner_3->setFont(font4);
        Hex_LCD = new QLCDNumber(IWExtern);
        Hex_LCD->setObjectName(QString::fromUtf8("Hex_LCD"));
        Hex_LCD->setGeometry(QRect(460, 350, 321, 61));
        Hex_LCD->setSmallDecimalPoint(true);
        Hex_LCD->setNumDigits(3);
        Hex_LCD->setMode(QLCDNumber::Dec);
        superBanner_4 = new QLabel(IWExtern);
        superBanner_4->setObjectName(QString::fromUtf8("superBanner_4"));
        superBanner_4->setGeometry(QRect(20, 440, 51, 31));
        superBanner_4->setFont(font3);
        Bin_LCD = new QLCDNumber(IWExtern);
        Bin_LCD->setObjectName(QString::fromUtf8("Bin_LCD"));
        Bin_LCD->setGeometry(QRect(80, 430, 701, 61));
        Bin_LCD->setSmallDecimalPoint(true);
        Bin_LCD->setNumDigits(3);
        Bin_LCD->setMode(QLCDNumber::Dec);

        retranslateUi(IWExtern);

        QMetaObject::connectSlotsByName(IWExtern);
    } // setupUi

    void retranslateUi(QWidget *IWExtern)
    {
        IWExtern->setWindowTitle(QApplication::translate("IWExtern", "Dialog", 0, QApplication::UnicodeUTF8));
        startCalButton_Ex1->setText(QApplication::translate("IWExtern", "cscript1.c", 0, QApplication::UnicodeUTF8));
        startCalButton_Ex1->setShortcut(QApplication::translate("IWExtern", "F12", 0, QApplication::UnicodeUTF8));
        startCalButton_Ex2->setText(QApplication::translate("IWExtern", "cscript2.c", 0, QApplication::UnicodeUTF8));
        startCalButton_Ex2->setShortcut(QApplication::translate("IWExtern", "F12", 0, QApplication::UnicodeUTF8));
        startCalButton_Ex3->setText(QApplication::translate("IWExtern", "cscript3.c", 0, QApplication::UnicodeUTF8));
        startCalButton_Ex3->setShortcut(QApplication::translate("IWExtern", "F12", 0, QApplication::UnicodeUTF8));
        startBoot->setText(QApplication::translate("IWExtern", "Firmware Upgragde", 0, QApplication::UnicodeUTF8));
        startBoot->setShortcut(QApplication::translate("IWExtern", "F12", 0, QApplication::UnicodeUTF8));
        softReset->setText(QApplication::translate("IWExtern", "Soft Reset ", 0, QApplication::UnicodeUTF8));
        softReset->setShortcut(QApplication::translate("IWExtern", "F12", 0, QApplication::UnicodeUTF8));
        superBanner->setText(QApplication::translate("IWExtern", "GUI_BANNER(\"YOUR APPNAME HERE\"); // C CODE", 0, QApplication::UnicodeUTF8));
        superBanner_2->setText(QApplication::translate("IWExtern", "DEC", 0, QApplication::UnicodeUTF8));
        superBanner_3->setText(QApplication::translate("IWExtern", "HEX", 0, QApplication::UnicodeUTF8));
        superBanner_4->setText(QApplication::translate("IWExtern", "BIN", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class IWExtern: public Ui_IWExtern {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTERN_INF_H
