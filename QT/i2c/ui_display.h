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
#include <QtGui/QGroupBox>
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
    QLabel *qlbl;
    QGroupBox *groupBox;
    QLabel *qlbl_3;
    QLabel *qlbl_2;
    QLineEdit *intAddressLen_box;
    QLineEdit *devAddressm24lr_box;
    QLineEdit *intAddressData_box;
    QPushButton *buttonWriteI2CDevice;
    QLabel *qlbl_5;
    QLabel *qlbl_4;
    QLineEdit *intAddress_box;
    QPushButton *buttonReadI2CDevice;
    QGroupBox *groupBox_2;
    QPushButton *buttonWriteI2CDevice_2;
    QLineEdit *MatrixLCDData_box;
    QLabel *qlbl_6;
    QLineEdit *devAddressI2CDisplay_box;
    QPushButton *buttonWriteI2CDevice_4;
    QGroupBox *groupBox_3;
    QPushButton *buttonWriteI2CDevice_3;
    QLCDNumber *lcdADC_Chnl1;
    QLCDNumber *lcdADC_Chnl2;
    QLabel *qlbl_7;
    QLineEdit *devAddressHumidity_box;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1101, 784);
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
        qlbl = new QLabel(Dialog);
        qlbl->setObjectName(QString::fromUtf8("qlbl"));
        qlbl->setGeometry(QRect(240, 20, 121, 41));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 90, 531, 311));
        qlbl_3 = new QLabel(groupBox);
        qlbl_3->setObjectName(QString::fromUtf8("qlbl_3"));
        qlbl_3->setGeometry(QRect(60, 100, 211, 41));
        qlbl_2 = new QLabel(groupBox);
        qlbl_2->setObjectName(QString::fromUtf8("qlbl_2"));
        qlbl_2->setGeometry(QRect(30, 50, 211, 41));
        intAddressLen_box = new QLineEdit(groupBox);
        intAddressLen_box->setObjectName(QString::fromUtf8("intAddressLen_box"));
        intAddressLen_box->setGeometry(QRect(290, 150, 221, 41));
        intAddressLen_box->setFont(font);
        devAddressm24lr_box = new QLineEdit(groupBox);
        devAddressm24lr_box->setObjectName(QString::fromUtf8("devAddressm24lr_box"));
        devAddressm24lr_box->setGeometry(QRect(290, 50, 221, 41));
        devAddressm24lr_box->setFont(font);
        intAddressData_box = new QLineEdit(groupBox);
        intAddressData_box->setObjectName(QString::fromUtf8("intAddressData_box"));
        intAddressData_box->setGeometry(QRect(290, 200, 221, 41));
        intAddressData_box->setFont(font);
        buttonWriteI2CDevice = new QPushButton(groupBox);
        buttonWriteI2CDevice->setObjectName(QString::fromUtf8("buttonWriteI2CDevice"));
        buttonWriteI2CDevice->setGeometry(QRect(290, 250, 221, 51));
        buttonWriteI2CDevice->setFont(font);
        qlbl_5 = new QLabel(groupBox);
        qlbl_5->setObjectName(QString::fromUtf8("qlbl_5"));
        qlbl_5->setGeometry(QRect(30, 200, 241, 41));
        qlbl_4 = new QLabel(groupBox);
        qlbl_4->setObjectName(QString::fromUtf8("qlbl_4"));
        qlbl_4->setGeometry(QRect(30, 150, 231, 41));
        intAddress_box = new QLineEdit(groupBox);
        intAddress_box->setObjectName(QString::fromUtf8("intAddress_box"));
        intAddress_box->setGeometry(QRect(290, 100, 221, 41));
        intAddress_box->setFont(font);
        buttonReadI2CDevice = new QPushButton(groupBox);
        buttonReadI2CDevice->setObjectName(QString::fromUtf8("buttonReadI2CDevice"));
        buttonReadI2CDevice->setGeometry(QRect(20, 250, 221, 51));
        buttonReadI2CDevice->setFont(font);
        qlbl_3->raise();
        qlbl_2->raise();
        intAddressLen_box->raise();
        devAddressm24lr_box->raise();
        intAddressData_box->raise();
        buttonWriteI2CDevice->raise();
        qlbl_5->raise();
        qlbl_4->raise();
        intAddress_box->raise();
        buttonReadI2CDevice->raise();
        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 510, 551, 261));
        buttonWriteI2CDevice_2 = new QPushButton(groupBox_2);
        buttonWriteI2CDevice_2->setObjectName(QString::fromUtf8("buttonWriteI2CDevice_2"));
        buttonWriteI2CDevice_2->setGeometry(QRect(10, 40, 311, 51));
        buttonWriteI2CDevice_2->setFont(font);
        MatrixLCDData_box = new QLineEdit(groupBox_2);
        MatrixLCDData_box->setObjectName(QString::fromUtf8("MatrixLCDData_box"));
        MatrixLCDData_box->setGeometry(QRect(10, 190, 471, 61));
        MatrixLCDData_box->setFont(font);
        qlbl_6 = new QLabel(groupBox_2);
        qlbl_6->setObjectName(QString::fromUtf8("qlbl_6"));
        qlbl_6->setGeometry(QRect(20, 120, 211, 41));
        devAddressI2CDisplay_box = new QLineEdit(groupBox_2);
        devAddressI2CDisplay_box->setObjectName(QString::fromUtf8("devAddressI2CDisplay_box"));
        devAddressI2CDisplay_box->setGeometry(QRect(280, 120, 221, 41));
        devAddressI2CDisplay_box->setFont(font);
        buttonWriteI2CDevice_4 = new QPushButton(groupBox_2);
        buttonWriteI2CDevice_4->setObjectName(QString::fromUtf8("buttonWriteI2CDevice_4"));
        buttonWriteI2CDevice_4->setGeometry(QRect(340, 40, 201, 51));
        buttonWriteI2CDevice_4->setFont(font);
        groupBox_3 = new QGroupBox(Dialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(650, 180, 411, 581));
        buttonWriteI2CDevice_3 = new QPushButton(groupBox_3);
        buttonWriteI2CDevice_3->setObjectName(QString::fromUtf8("buttonWriteI2CDevice_3"));
        buttonWriteI2CDevice_3->setGeometry(QRect(20, 70, 361, 71));
        buttonWriteI2CDevice_3->setFont(font);
        lcdADC_Chnl1 = new QLCDNumber(groupBox_3);
        lcdADC_Chnl1->setObjectName(QString::fromUtf8("lcdADC_Chnl1"));
        lcdADC_Chnl1->setGeometry(QRect(30, 320, 361, 111));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        lcdADC_Chnl1->setFont(font1);
        lcdADC_Chnl1->setLineWidth(1);
        lcdADC_Chnl1->setNumDigits(7);
        lcdADC_Chnl1->setMode(QLCDNumber::Bin);
        lcdADC_Chnl2 = new QLCDNumber(groupBox_3);
        lcdADC_Chnl2->setObjectName(QString::fromUtf8("lcdADC_Chnl2"));
        lcdADC_Chnl2->setGeometry(QRect(30, 450, 361, 111));
        lcdADC_Chnl2->setFont(font1);
        lcdADC_Chnl2->setLineWidth(1);
        lcdADC_Chnl2->setNumDigits(7);
        lcdADC_Chnl2->setMode(QLCDNumber::Bin);
        qlbl_7 = new QLabel(groupBox_3);
        qlbl_7->setObjectName(QString::fromUtf8("qlbl_7"));
        qlbl_7->setGeometry(QRect(30, 180, 211, 41));
        devAddressHumidity_box = new QLineEdit(groupBox_3);
        devAddressHumidity_box->setObjectName(QString::fromUtf8("devAddressHumidity_box"));
        devAddressHumidity_box->setGeometry(QRect(170, 230, 221, 41));
        devAddressHumidity_box->setFont(font);
        lcdADC_Chnl2->raise();
        lcdADC_Chnl1->raise();
        buttonWriteI2CDevice_3->raise();
        buttonWriteI2CDevice_3->raise();
        lcdADC_Chnl1->raise();
        lcdADC_Chnl2->raise();
        qlbl_7->raise();
        devAddressHumidity_box->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "IWScope Inc, DAC/ADC Test Utility", 0, QApplication::UnicodeUTF8));
        i2cBusScanButton->setText(QApplication::translate("Dialog", "Scan I2C Bus", 0, QApplication::UnicodeUTF8));
        commLED->setText(QApplication::translate("Dialog", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
        qlbl->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">#DEVCNT</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Dialog", "ST M24LR NFC 0xA6 0xAE", 0, QApplication::UnicodeUTF8));
        qlbl_3->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Internal Address</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        qlbl_2->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">I2C Device Address</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        buttonWriteI2CDevice->setText(QApplication::translate("Dialog", "Write I2C Device", 0, QApplication::UnicodeUTF8));
        qlbl_5->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Internal Address Data</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        qlbl_4->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Internal Address Len</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        buttonReadI2CDevice->setText(QApplication::translate("Dialog", "Read I2C Device", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Dialog", "I2C Display", 0, QApplication::UnicodeUTF8));
        buttonWriteI2CDevice_2->setText(QApplication::translate("Dialog", "Write Matrix Orbital Display", 0, QApplication::UnicodeUTF8));
        qlbl_6->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">I2C Device Address</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        buttonWriteI2CDevice_4->setText(QApplication::translate("Dialog", "Clear Screen", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("Dialog", "Read Himidity/Temperature", 0, QApplication::UnicodeUTF8));
        buttonWriteI2CDevice_3->setText(QApplication::translate("Dialog", "Read Humidity/Temperature", 0, QApplication::UnicodeUTF8));
        qlbl_7->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">I2C Device Address</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_H
