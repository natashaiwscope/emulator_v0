/********************************************************************************
** Form generated from reading UI file 'display.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAY_H
#define UI_DISPLAY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QSlider *dacSliderCh1;
    QSlider *dacSliderCh2;
    QPushButton *readADCButton;
    QLCDNumber *lcdDAC_Chnl1;
    QLCDNumber *lcdDAC_Chnl2;
    QLCDNumber *lcdADC_Chnl2;
    QLCDNumber *lcdADC_Chnl1;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QComboBox *oscope_ip;
    QLabel *commLED;
    QLabel *qlbl;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(843, 711);
        dacSliderCh1 = new QSlider(Dialog);
        dacSliderCh1->setObjectName(QString::fromUtf8("dacSliderCh1"));
        dacSliderCh1->setGeometry(QRect(60, 60, 20, 611));
        dacSliderCh1->setMinimumSize(QSize(20, 0));
        dacSliderCh1->setMaximum(4095);
        dacSliderCh1->setOrientation(Qt::Vertical);
        dacSliderCh2 = new QSlider(Dialog);
        dacSliderCh2->setObjectName(QString::fromUtf8("dacSliderCh2"));
        dacSliderCh2->setGeometry(QRect(120, 60, 20, 611));
        dacSliderCh2->setMinimumSize(QSize(20, 0));
        dacSliderCh2->setMaximum(4095);
        dacSliderCh2->setOrientation(Qt::Vertical);
        readADCButton = new QPushButton(Dialog);
        readADCButton->setObjectName(QString::fromUtf8("readADCButton"));
        readADCButton->setGeometry(QRect(620, 660, 221, 51));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        readADCButton->setFont(font);
        lcdDAC_Chnl1 = new QLCDNumber(Dialog);
        lcdDAC_Chnl1->setObjectName(QString::fromUtf8("lcdDAC_Chnl1"));
        lcdDAC_Chnl1->setGeometry(QRect(170, 150, 471, 111));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        lcdDAC_Chnl1->setFont(font1);
        lcdDAC_Chnl1->setLineWidth(1);
        lcdDAC_Chnl1->setNumDigits(7);
        lcdDAC_Chnl1->setMode(QLCDNumber::Bin);
        lcdDAC_Chnl2 = new QLCDNumber(Dialog);
        lcdDAC_Chnl2->setObjectName(QString::fromUtf8("lcdDAC_Chnl2"));
        lcdDAC_Chnl2->setGeometry(QRect(170, 260, 471, 111));
        lcdDAC_Chnl2->setFont(font1);
        lcdDAC_Chnl2->setLineWidth(1);
        lcdDAC_Chnl2->setNumDigits(7);
        lcdDAC_Chnl2->setMode(QLCDNumber::Bin);
        lcdADC_Chnl2 = new QLCDNumber(Dialog);
        lcdADC_Chnl2->setObjectName(QString::fromUtf8("lcdADC_Chnl2"));
        lcdADC_Chnl2->setGeometry(QRect(170, 540, 471, 111));
        lcdADC_Chnl2->setFont(font1);
        lcdADC_Chnl2->setLineWidth(1);
        lcdADC_Chnl2->setNumDigits(7);
        lcdADC_Chnl2->setMode(QLCDNumber::Bin);
        lcdADC_Chnl1 = new QLCDNumber(Dialog);
        lcdADC_Chnl1->setObjectName(QString::fromUtf8("lcdADC_Chnl1"));
        lcdADC_Chnl1->setGeometry(QRect(170, 430, 471, 111));
        lcdADC_Chnl1->setFont(font1);
        lcdADC_Chnl1->setLineWidth(1);
        lcdADC_Chnl1->setNumDigits(7);
        lcdADC_Chnl1->setMode(QLCDNumber::Bin);
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(650, 190, 111, 41));
        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(650, 290, 111, 41));
        label_9 = new QLabel(Dialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(650, 460, 111, 41));
        label_10 = new QLabel(Dialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(650, 580, 111, 41));
        label_11 = new QLabel(Dialog);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 10, 101, 41));
        label_12 = new QLabel(Dialog);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(110, 10, 61, 41));
        label_13 = new QLabel(Dialog);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(240, 10, 451, 151));
        label_14 = new QLabel(Dialog);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(160, 660, 451, 41));
        oscope_ip = new QComboBox(Dialog);
        oscope_ip->setObjectName(QString::fromUtf8("oscope_ip"));
        oscope_ip->setGeometry(QRect(610, 20, 191, 41));
        commLED = new QLabel(Dialog);
        commLED->setObjectName(QString::fromUtf8("commLED"));
        commLED->setGeometry(QRect(650, 80, 151, 41));
        qlbl = new QLabel(Dialog);
        qlbl->setObjectName(QString::fromUtf8("qlbl"));
        qlbl->setGeometry(QRect(700, 140, 121, 41));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "IWScope Inc, DAC/ADC Test Utility", 0, QApplication::UnicodeUTF8));
        readADCButton->setText(QApplication::translate("Dialog", "Read ADC(100 ms)", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">DAC CH1</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">DAC CH2</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">ADC CH1</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">ADC CH2</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">DAC CH1</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">CH2</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">DAC(12 Bit)/ADC (12 bit) Demo</span></p><p><span style=\" font-size:14pt; font-weight:600;\">(Slider to change DAC)</span></p><p><span style=\" font-size:14pt; font-weight:600;\">(Click on Dialog Box to Read ADC)</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Read ADC CH1 and CH2 (100 ms interval)</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        commLED->setText(QApplication::translate("Dialog", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
        qlbl->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">#DEVCNT</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_H
