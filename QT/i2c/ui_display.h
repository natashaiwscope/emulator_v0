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
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *i2cBusScanButton;
    QComboBox *oscope_ip;
    QLabel *commLED;
    QComboBox *i2c_addr_cmb;
    QLCDNumber *lcdADC_Chnl2;
    QLCDNumber *lcdADC_Chnl1;
    QLabel *qlbl;
    QLineEdit *devAddress_box;
    QLabel *qlbl_2;
    QLabel *qlbl_3;
    QLineEdit *intAddress_box;
    QPushButton *buttonReadI2CDevice;
    QPushButton *buttonWriteI2CDevice;
    QLabel *qlbl_4;
    QLineEdit *intAddressLen_box;
    QLineEdit *intAddressData_box;
    QLabel *qlbl_5;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(843, 711);
        i2cBusScanButton = new QPushButton(Dialog);
        i2cBusScanButton->setObjectName(QString::fromUtf8("i2cBusScanButton"));
        i2cBusScanButton->setGeometry(QRect(600, 20, 221, 51));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        i2cBusScanButton->setFont(font);
        oscope_ip = new QComboBox(Dialog);
        oscope_ip->setObjectName(QString::fromUtf8("oscope_ip"));
        oscope_ip->setGeometry(QRect(30, 20, 191, 41));
        commLED = new QLabel(Dialog);
        commLED->setObjectName(QString::fromUtf8("commLED"));
        commLED->setGeometry(QRect(30, 80, 151, 41));
        i2c_addr_cmb = new QComboBox(Dialog);
        i2c_addr_cmb->setObjectName(QString::fromUtf8("i2c_addr_cmb"));
        i2c_addr_cmb->setGeometry(QRect(600, 90, 221, 51));
        lcdADC_Chnl2 = new QLCDNumber(Dialog);
        lcdADC_Chnl2->setObjectName(QString::fromUtf8("lcdADC_Chnl2"));
        lcdADC_Chnl2->setGeometry(QRect(530, 330, 291, 111));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        lcdADC_Chnl2->setFont(font1);
        lcdADC_Chnl2->setLineWidth(1);
        lcdADC_Chnl2->setNumDigits(7);
        lcdADC_Chnl2->setMode(QLCDNumber::Bin);
        lcdADC_Chnl1 = new QLCDNumber(Dialog);
        lcdADC_Chnl1->setObjectName(QString::fromUtf8("lcdADC_Chnl1"));
        lcdADC_Chnl1->setGeometry(QRect(530, 200, 291, 111));
        lcdADC_Chnl1->setFont(font1);
        lcdADC_Chnl1->setLineWidth(1);
        lcdADC_Chnl1->setNumDigits(7);
        lcdADC_Chnl1->setMode(QLCDNumber::Bin);
        qlbl = new QLabel(Dialog);
        qlbl->setObjectName(QString::fromUtf8("qlbl"));
        qlbl->setGeometry(QRect(240, 20, 121, 41));
        devAddress_box = new QLineEdit(Dialog);
        devAddress_box->setObjectName(QString::fromUtf8("devAddress_box"));
        devAddress_box->setGeometry(QRect(290, 200, 221, 41));
        devAddress_box->setFont(font);
        qlbl_2 = new QLabel(Dialog);
        qlbl_2->setObjectName(QString::fromUtf8("qlbl_2"));
        qlbl_2->setGeometry(QRect(30, 200, 211, 41));
        qlbl_3 = new QLabel(Dialog);
        qlbl_3->setObjectName(QString::fromUtf8("qlbl_3"));
        qlbl_3->setGeometry(QRect(30, 270, 211, 41));
        intAddress_box = new QLineEdit(Dialog);
        intAddress_box->setObjectName(QString::fromUtf8("intAddress_box"));
        intAddress_box->setGeometry(QRect(290, 270, 221, 41));
        intAddress_box->setFont(font);
        buttonReadI2CDevice = new QPushButton(Dialog);
        buttonReadI2CDevice->setObjectName(QString::fromUtf8("buttonReadI2CDevice"));
        buttonReadI2CDevice->setGeometry(QRect(20, 500, 221, 51));
        buttonReadI2CDevice->setFont(font);
        buttonWriteI2CDevice = new QPushButton(Dialog);
        buttonWriteI2CDevice->setObjectName(QString::fromUtf8("buttonWriteI2CDevice"));
        buttonWriteI2CDevice->setGeometry(QRect(280, 500, 221, 51));
        buttonWriteI2CDevice->setFont(font);
        qlbl_4 = new QLabel(Dialog);
        qlbl_4->setObjectName(QString::fromUtf8("qlbl_4"));
        qlbl_4->setGeometry(QRect(30, 340, 231, 41));
        intAddressLen_box = new QLineEdit(Dialog);
        intAddressLen_box->setObjectName(QString::fromUtf8("intAddressLen_box"));
        intAddressLen_box->setGeometry(QRect(290, 340, 221, 41));
        intAddressLen_box->setFont(font);
        intAddressData_box = new QLineEdit(Dialog);
        intAddressData_box->setObjectName(QString::fromUtf8("intAddressData_box"));
        intAddressData_box->setGeometry(QRect(290, 430, 221, 41));
        intAddressData_box->setFont(font);
        qlbl_5 = new QLabel(Dialog);
        qlbl_5->setObjectName(QString::fromUtf8("qlbl_5"));
        qlbl_5->setGeometry(QRect(30, 430, 241, 41));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "IWScope Inc, DAC/ADC Test Utility", 0, QApplication::UnicodeUTF8));
        i2cBusScanButton->setText(QApplication::translate("Dialog", "Scan I2C Bus", 0, QApplication::UnicodeUTF8));
        commLED->setText(QApplication::translate("Dialog", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
        qlbl->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">#DEVCNT</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        qlbl_2->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">I2C Device Address</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        qlbl_3->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Internal Address</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        buttonReadI2CDevice->setText(QApplication::translate("Dialog", "Read I2C Device", 0, QApplication::UnicodeUTF8));
        buttonWriteI2CDevice->setText(QApplication::translate("Dialog", "Write I2C Device", 0, QApplication::UnicodeUTF8));
        qlbl_4->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Internal Address Len</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        qlbl_5->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Internal Address Data</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_H
