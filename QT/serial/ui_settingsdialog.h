/*
Serial port settings form
*/

/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *buttonHelp;
    QSpacerItem *Horizontal_Spacing2;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;
    QTabWidget *tabWidget;
    QWidget *Widget2;
    QGridLayout *gridLayout1;
    QGridLayout *gridLayout2;
    QSpacerItem *spacer4;
    QComboBox *BaudRateComboBox;
    QGroupBox *groupBox4;
    QGridLayout *gridLayout3;
    QGridLayout *gridLayout4;
    QLabel *textLabel4_2;
    QComboBox *ParityComboBox;
    QLabel *textLabel2_3;
    QComboBox *DataBitsComboBox;
    QLabel *textLabel3;
    QComboBox *StopBitsComboBox;
    QSpacerItem *spacer5;
    QSpacerItem *spacer6;
    QLabel *BaudRateLabel;
    QSpacerItem *spacer7;
    QLabel *textLabel1;
    QLabel *label;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(453, 320);
        SettingsDialog->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(SettingsDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        buttonHelp = new QPushButton(SettingsDialog);
        buttonHelp->setObjectName(QString::fromUtf8("buttonHelp"));
        buttonHelp->setAutoDefault(true);

        hboxLayout->addWidget(buttonHelp);

        Horizontal_Spacing2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(Horizontal_Spacing2);

        buttonOk = new QPushButton(SettingsDialog);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        buttonOk->setAutoDefault(true);
        buttonOk->setDefault(true);

        hboxLayout->addWidget(buttonOk);

        buttonCancel = new QPushButton(SettingsDialog);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setAutoDefault(true);

        hboxLayout->addWidget(buttonCancel);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 2);

        tabWidget = new QTabWidget(SettingsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        Widget2 = new QWidget();
        Widget2->setObjectName(QString::fromUtf8("Widget2"));
        gridLayout1 = new QGridLayout(Widget2);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout2 = new QGridLayout();
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        spacer4 = new QSpacerItem(281, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacer4, 1, 3, 1, 2);

        BaudRateComboBox = new QComboBox(Widget2);
        BaudRateComboBox->setObjectName(QString::fromUtf8("BaudRateComboBox"));

        gridLayout2->addWidget(BaudRateComboBox, 1, 1, 1, 2);

        groupBox4 = new QGroupBox(Widget2);
        groupBox4->setObjectName(QString::fromUtf8("groupBox4"));
        gridLayout3 = new QGridLayout(groupBox4);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(11, 11, 11, 11);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        gridLayout4 = new QGridLayout();
        gridLayout4->setSpacing(6);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        textLabel4_2 = new QLabel(groupBox4);
        textLabel4_2->setObjectName(QString::fromUtf8("textLabel4_2"));
        textLabel4_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel4_2->setWordWrap(false);

        gridLayout4->addWidget(textLabel4_2, 2, 0, 1, 1);

        ParityComboBox = new QComboBox(groupBox4);
        ParityComboBox->setObjectName(QString::fromUtf8("ParityComboBox"));

        gridLayout4->addWidget(ParityComboBox, 2, 1, 1, 2);

        textLabel2_3 = new QLabel(groupBox4);
        textLabel2_3->setObjectName(QString::fromUtf8("textLabel2_3"));
        textLabel2_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel2_3->setWordWrap(false);

        gridLayout4->addWidget(textLabel2_3, 0, 0, 1, 2);

        DataBitsComboBox = new QComboBox(groupBox4);
        DataBitsComboBox->setObjectName(QString::fromUtf8("DataBitsComboBox"));

        gridLayout4->addWidget(DataBitsComboBox, 0, 2, 1, 1);

        textLabel3 = new QLabel(groupBox4);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel3->setWordWrap(false);

        gridLayout4->addWidget(textLabel3, 1, 0, 1, 2);

        StopBitsComboBox = new QComboBox(groupBox4);
        StopBitsComboBox->setObjectName(QString::fromUtf8("StopBitsComboBox"));

        gridLayout4->addWidget(StopBitsComboBox, 1, 2, 1, 1);


        gridLayout3->addLayout(gridLayout4, 0, 0, 1, 1);


        gridLayout2->addWidget(groupBox4, 2, 2, 2, 1);

        spacer5 = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacer5, 2, 0, 1, 2);

        spacer6 = new QSpacerItem(20, 120, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacer6, 3, 4, 2, 1);

        BaudRateLabel = new QLabel(Widget2);
        BaudRateLabel->setObjectName(QString::fromUtf8("BaudRateLabel"));
        BaudRateLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        BaudRateLabel->setWordWrap(false);

        gridLayout2->addWidget(BaudRateLabel, 1, 0, 1, 1);

        spacer7 = new QSpacerItem(20, 71, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacer7, 4, 2, 1, 1);

        textLabel1 = new QLabel(Widget2);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel1->setWordWrap(false);

        gridLayout2->addWidget(textLabel1, 0, 0, 1, 1);

        label = new QLabel(Widget2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout2->addWidget(label, 0, 1, 1, 2);


        gridLayout1->addLayout(gridLayout2, 0, 0, 1, 1);

        tabWidget->addTab(Widget2, QString());

        gridLayout->addWidget(tabWidget, 0, 1, 1, 1);

        QWidget::setTabOrder(tabWidget, BaudRateComboBox);
        QWidget::setTabOrder(BaudRateComboBox, DataBitsComboBox);
        QWidget::setTabOrder(DataBitsComboBox, StopBitsComboBox);
        QWidget::setTabOrder(StopBitsComboBox, ParityComboBox);
        QWidget::setTabOrder(ParityComboBox, buttonHelp);
        QWidget::setTabOrder(buttonHelp, buttonOk);
        QWidget::setTabOrder(buttonOk, buttonCancel);

        retranslateUi(SettingsDialog);
        QObject::connect(buttonOk, SIGNAL(clicked()), SettingsDialog, SLOT(accept()));
        QObject::connect(buttonCancel, SIGNAL(clicked()), SettingsDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);
        BaudRateComboBox->setCurrentIndex(11);
        DataBitsComboBox->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Serial Port Settings", 0, QApplication::UnicodeUTF8));
        buttonHelp->setText(QApplication::translate("SettingsDialog", "&Help", 0, QApplication::UnicodeUTF8));
        buttonHelp->setShortcut(QApplication::translate("SettingsDialog", "F1", 0, QApplication::UnicodeUTF8));
        buttonOk->setText(QApplication::translate("SettingsDialog", "&OK", 0, QApplication::UnicodeUTF8));
        buttonOk->setShortcut(QString());
        buttonCancel->setText(QApplication::translate("SettingsDialog", "&Cancel", 0, QApplication::UnicodeUTF8));
        buttonCancel->setShortcut(QString());
        BaudRateComboBox->clear();
        BaudRateComboBox->insertItems(0, QStringList()
         << QApplication::translate("SettingsDialog", "50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "75", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "110", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "134", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "150", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "300", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "1200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "1800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "2400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "4800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "9600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "19200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "38400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "57600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "115200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "230400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "460800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "921600", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        BaudRateComboBox->setToolTip(QApplication::translate("SettingsDialog", "SPecify the baud raet (bps).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        BaudRateComboBox->setStatusTip(QApplication::translate("SettingsDialog", "SPecify the baud raet (bps).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        groupBox4->setTitle(QApplication::translate("SettingsDialog", "Framing", 0, QApplication::UnicodeUTF8));
        textLabel4_2->setText(QApplication::translate("SettingsDialog", "Parity:", 0, QApplication::UnicodeUTF8));
        ParityComboBox->clear();
        ParityComboBox->insertItems(0, QStringList()
         << QApplication::translate("SettingsDialog", "NONE", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "EVEN", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "ODD", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        ParityComboBox->setToolTip(QApplication::translate("SettingsDialog", "Specify the character framing parity.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        ParityComboBox->setStatusTip(QApplication::translate("SettingsDialog", "Specify the character framing parity.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        textLabel2_3->setText(QApplication::translate("SettingsDialog", "Data bits:", 0, QApplication::UnicodeUTF8));
        DataBitsComboBox->clear();
        DataBitsComboBox->insertItems(0, QStringList()
         << QApplication::translate("SettingsDialog", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "8", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        DataBitsComboBox->setToolTip(QApplication::translate("SettingsDialog", "Specify the number of data bits in a character frame.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        DataBitsComboBox->setStatusTip(QApplication::translate("SettingsDialog", "Specify the number of data bits in a character frame.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        textLabel3->setText(QApplication::translate("SettingsDialog", "Stop bits:", 0, QApplication::UnicodeUTF8));
        StopBitsComboBox->clear();
        StopBitsComboBox->insertItems(0, QStringList()
         << QApplication::translate("SettingsDialog", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "1.5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsDialog", "2", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        StopBitsComboBox->setToolTip(QApplication::translate("SettingsDialog", "Specify the number of stop bits in a frame.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        StopBitsComboBox->setStatusTip(QApplication::translate("SettingsDialog", "Specify the number of stop bits in a frame.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        BaudRateLabel->setText(QApplication::translate("SettingsDialog", "Baud Rate:", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("SettingsDialog", "Device:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SettingsDialog", "Remote Ethernnet", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Widget2), QApplication::translate("SettingsDialog", "Device", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
