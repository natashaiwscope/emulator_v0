#include <QtGui>

#include "dialog.h"

Dialog::Dialog(QWidget *parent, bool smallScreen) : QDialog(parent),ui(new Ui::Dialog)
{
    QLineEdit *lineEdit = new QLineEdit;
    ui->setupUi(this);

    ui->dacSliderCh1->setRange(0,4095);
    ui->dacSliderCh2->setRange(0,4095);

    connect(ui->dacSliderCh1,      SIGNAL(valueChanged(int)),SLOT(fn_DAC_Ch1(int)));
    connect(ui->dacSliderCh2,      SIGNAL(valueChanged(int)),SLOT(fn_DAC_Ch2(int)));

    QPalette pal(Qt::black);
    pal.setColor(QPalette::WindowText, Qt::green);

    ui->lcdDAC_Chnl1->setPalette(pal);
    ui->lcdDAC_Chnl2->setPalette(pal);
    ui->lcdDAC_Chnl1->setDecMode();
    ui->lcdDAC_Chnl2->setDecMode();
}

void Dialog::fn_DAC_Ch1(int i)
{
    ui->lcdDAC_Chnl1->display(i);
}

void Dialog::fn_DAC_Ch2(int i)
{
    ui->lcdDAC_Chnl2->display(i);
}
