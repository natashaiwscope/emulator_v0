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
    void fn_DAC_Ch1(int);
    void fn_DAC_Ch2(int);

    void fn_ADC_Cnt(int);
    void fn_ADC_Timer(int);


    void msg_PumpedRcvd();
    void fn_ADC_clicked();

    void dacTimerExp();
    void adcTimerExp();

signals:
    void responseRcvd();
    void msg_Pumped();
    void finished();
};

#endif
