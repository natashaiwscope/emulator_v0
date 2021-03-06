#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "ext_udp.h"
#include "ui_display.h"

namespace Ui
{
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Ui::Dialog *ui;
    Dialog(QWidget *parent = 0, bool smallScreen = false);
    ~Dialog();
    bool found;
    unsigned short adc_Ch1;
    unsigned short adc_Ch2;
    unsigned short dac_Ch1;
    unsigned short dac_Ch2;

    QTimer      dacTimer;
    QTimer      adcTimer;
    int         i2cDevType;

#ifndef LINUX_WAY
    bool winEvent(MSG *m, long *result);
#endif
    bool eventFilter(QObject *object, QEvent *e);
#ifdef LINUX_WAY
    ExternSig   *ext_msgPump;
#endif

    void commonMsgHandle();
protected:
    void closeEvent(QCloseEvent *event);
    void slot_ReInitDevList();


public slots:
    void FoundDataLoggerHWString(QString);

    void M24LRReadI2CDeviceSlot();
    void M24LRWriteI2CDeviceSlot();
    void WriteMatrixDisplay();
    void ClearMatrixDisplay();

    void fn_ADC_Cnt(int);
    void fn_ADC_Timer(int);

    void selectNewIPDevice(int index);


    void msg_PumpedRcvd();
    void fn_ADC_clicked();

    void dacTimerExp();
    void adcTimerExp();
    void scanI2CBus();


signals:
    void responseRcvd();
    void msg_Pumped();
    void finished();
};

#endif
