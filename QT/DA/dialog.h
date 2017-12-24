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
};

#endif
