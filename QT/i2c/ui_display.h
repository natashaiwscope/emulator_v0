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
    QLineEdit *intAddrLenm24lr_box;
    QLineEdit *devAddressm24lr_box;
    QLineEdit *Datam24lr_box;
    QPushButton *buttonWriteI2CDevice;
    QLabel *qlbl_5;
    QLabel *qlbl_4;
    QLineEdit *intAddressm24lr_box;
    QPushButton *buttonM24LRWriteI2CDevice;
    QLabel *qlbl_8;
    QLineEdit *DataLenm24lr_box;
    QGroupBox *groupBox_2;
    QPushButton *buttonMatrixOrbit24WriteI2CDevice;
    QLineEdit *MatrixLCDData_box;
    QLabel *qlbl_6;
    QLineEdit *devAddressI2CDisplay_box;
    QPushButton *buttonClearScreen;
    QGroupBox *groupBox_3;
    QPushButton *buttonReadHumidityTemp2CDevice;
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
        commLED->setGeometry(QRect(840, 30, 151, 41));
        i2c_addr_cmb = new QComboBox(Dialog);
        i2c_addr_cmb->setObjectName(QString::fromUtf8("i2c_addr_cmb"));
        i2c_addr_cmb->setGeometry(QRect(600, 90, 221, 51));
        qlbl = new QLabel(Dialog);
        qlbl->setObjectName(QString::fromUtf8("qlbl"));
        qlbl->setGeometry(QRect(240, 20, 121, 41));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 90, 531, 391));
        qlbl_3 = new QLabel(groupBox);
        qlbl_3->setObjectName(QString::fromUtf8("qlbl_3"));
        qlbl_3->setGeometry(QRect(60, 100, 211, 41));
        qlbl_2 = new QLabel(groupBox);
        qlbl_2->setObjectName(QString::fromUtf8("qlbl_2"));
        qlbl_2->setGeometry(QRect(30, 50, 211, 41));
        intAddrLenm24lr_box = new QLineEdit(groupBox);
        intAddrLenm24lr_box->setObjectName(QString::fromUtf8("intAddrLenm24lr_box"));
        intAddrLenm24lr_box->setGeometry(QRect(290, 150, 221, 41));
        intAddrLenm24lr_box->setFont(font);
        devAddressm24lr_box = new QLineEdit(groupBox);
        devAddressm24lr_box->setObjectName(QString::fromUtf8("devAddressm24lr_box"));
        devAddressm24lr_box->setGeometry(QRect(290, 50, 221, 41));
        devAddressm24lr_box->setFont(font);
        Datam24lr_box = new QLineEdit(groupBox);
        Datam24lr_box->setObjectName(QString::fromUtf8("Datam24lr_box"));
        Datam24lr_box->setGeometry(QRect(290, 260, 221, 41));
        Datam24lr_box->setFont(font);
        buttonWriteI2CDevice = new QPushButton(groupBox);
        buttonWriteI2CDevice->setObjectName(QString::fromUtf8("buttonWriteI2CDevice"));
        buttonWriteI2CDevice->setGeometry(QRect(290, 320, 221, 51));
        buttonWriteI2CDevice->setFont(font);
        qlbl_5 = new QLabel(groupBox);
        qlbl_5->setObjectName(QString::fromUtf8("qlbl_5"));
        qlbl_5->setGeometry(QRect(30, 260, 241, 41));
        qlbl_4 = new QLabel(groupBox);
        qlbl_4->setObjectName(QString::fromUtf8("qlbl_4"));
        qlbl_4->setGeometry(QRect(30, 150, 231, 41));
        intAddressm24lr_box = new QLineEdit(groupBox);
        intAddressm24lr_box->setObjectName(QString::fromUtf8("intAddressm24lr_box"));
        intAddressm24lr_box->setGeometry(QRect(290, 100, 221, 41));
        intAddressm24lr_box->setFont(font);
        buttonM24LRWriteI2CDevice = new QPushButton(groupBox);
        buttonM24LRWriteI2CDevice->setObjectName(QString::fromUtf8("buttonM24LRWriteI2CDevice"));
        buttonM24LRWriteI2CDevice->setGeometry(QRect(20, 320, 221, 51));
        buttonM24LRWriteI2CDevice->setFont(font);
        qlbl_8 = new QLabel(groupBox);
        qlbl_8->setObjectName(QString::fromUtf8("qlbl_8"));
        qlbl_8->setGeometry(QRect(30, 210, 241, 41));
        DataLenm24lr_box = new QLineEdit(groupBox);
        DataLenm24lr_box->setObjectName(QString::fromUtf8("DataLenm24lr_box"));
        DataLenm24lr_box->setGeometry(QRect(290, 210, 221, 41));
        DataLenm24lr_box->setFont(font);
        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 510, 551, 261));
        buttonMatrixOrbit24WriteI2CDevice = new QPushButton(groupBox_2);
        buttonMatrixOrbit24WriteI2CDevice->setObjectName(QString::fromUtf8("buttonMatrixOrbit24WriteI2CDevice"));
        buttonMatrixOrbit24WriteI2CDevice->setGeometry(QRect(10, 40, 311, 51));
        buttonMatrixOrbit24WriteI2CDevice->setFont(font);
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
        buttonClearScreen = new QPushButton(groupBox_2);
        buttonClearScreen->setObjectName(QString::fromUtf8("buttonClearScreen"));
        buttonClearScreen->setGeometry(QRect(340, 40, 201, 51));
        buttonClearScreen->setFont(font);
        groupBox_3 = new QGroupBox(Dialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(650, 180, 411, 581));
        buttonReadHumidityTemp2CDevice = new QPushButton(groupBox_3);
        buttonReadHumidityTemp2CDevice->setObjectName(QString::fromUtf8("buttonReadHumidityTemp2CDevice"));
        buttonReadHumidityTemp2CDevice->setGeometry(QRect(20, 70, 361, 71));
        buttonReadHumidityTemp2CDevice->setFont(font);
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
        buttonM24LRWriteI2CDevice->setText(QApplication::translate("Dialog", "Read I2C Device", 0, QApplication::UnicodeUTF8));
        qlbl_8->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Read/Write Len</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Dialog", "I2C Display", 0, QApplication::UnicodeUTF8));
        buttonMatrixOrbit24WriteI2CDevice->setText(QApplication::translate("Dialog", "Write Matrix Orbital Display", 0, QApplication::UnicodeUTF8));
        qlbl_6->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">I2C Device Address</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        buttonClearScreen->setText(QApplication::translate("Dialog", "Clear Screen", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("Dialog", "Read Himidity/Temperature", 0, QApplication::UnicodeUTF8));
        buttonReadHumidityTemp2CDevice->setText(QApplication::translate("Dialog", "Read Humidity/Temperature", 0, QApplication::UnicodeUTF8));
        qlbl_7->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">I2C Device Address</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_H
