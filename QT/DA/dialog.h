#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
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

public slots:
    void fn_DAC_Ch1(int);
    void fn_DAC_Ch2(int);
};

#endif
