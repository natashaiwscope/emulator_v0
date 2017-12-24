#include <QtGui>

#include "dialog.h"

Dialog::Dialog(QWidget *parent, bool smallScreen) : QDialog(parent),ui(new Ui::Dialog)
{
    QLineEdit *lineEdit = new QLineEdit;
    ui->setupUi(this);

}
