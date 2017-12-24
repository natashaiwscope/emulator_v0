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
    bool found;

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
    void msg_PumpedRcvd();

signals:
    void responseRcvd();
    void msg_Pumped();
    void finished();
};

#endif
