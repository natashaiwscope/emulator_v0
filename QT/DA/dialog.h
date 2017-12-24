#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

//! [0]
class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0, bool smallScreen = false);
};
//! [0]

#endif
