#include <qmainwindow.h>
#include <QSettings>
#include <QMutexLocker>
#include <qapplication.h>
#include <qtoolbar.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qmainwindow.h>
#include <qcombobox.h>
#include <qwidget.h>
#include <qevent.h>
#include <qwt_plot.h>
#include <qwt_interval.h>
#include <qwt_system_clock.h>
#include <QFile>
#include "nwgnd.h"
//#include "execute_cs.h"
#include "ext_udp.h"

#define CTRL_INI  "_ctrlwieg.ini"
#define CTRL_CSV_FILENAME "FILENAME/CSV"
#define CTRL_C_FILENAME "FILENAME/C"

static char        file_name_buff[80];
static char        file_text_buff[10000];
static qint64      file_len;
static      QMutex mutex;

Nwgnd::Nwgnd(QWidget *parent) : QWidget(parent)
{
    ui.setupUi(this);
    mindex = 0;

    ui.connLED->setStyleSheet("background: gray");
    ui.grnLED->setStyleSheet("background: gray");
    ui.redLED->setStyleSheet("background: gray");
    ui.timeoutLED->setStyleSheet("background: gray");

    QSettings settings(CTRL_INI, QSettings::IniFormat);
    settings.sync();

    model_cardTable = new QStandardItemModel();
    model_cardTable->setHorizontalHeaderLabels(QStringList() << "Time" << "RecordID");

    model_device = new QStandardItemModel();
    model_device->setHorizontalHeaderLabels(QStringList() << "Name" << "MAC" << "IPAddr");

    connect(ui.pushButtonAck,     SIGNAL(clicked()),     this,     SLOT(run_CSV()));

    //ui.debug_WinC_Code->setTextBackgroundColor(QColor(0, 0, 255, 127));

}

Nwgnd::~Nwgnd()
{
}


void Nwgnd::slot_WIEG_RESULT()
{
    qDebug() << __FUNCTION__ << "\r\n";
    fflush(stdout);
}

void Nwgnd::saveRecord()
{
    QString s=ui.raw_wirelessID->text();
    //ui.statusLineEdit->setText(s);

    //long hex = str.toLong(&ok, 16);     // hex == 255, ok == true
    bool ok;
   long dec = s.toLong(&ok, 10);
   if(ok)
   {
    ui.grnLED->setStyleSheet("background: gray");
    ui.redLED->setStyleSheet("background: gray");
    ui.timeoutLED->setStyleSheet("background: gray");
    fn_scan_raw(dec);
   }
}

void Nwgnd::wiegnCLEDPump(unsigned char l1, unsigned char l2, unsigned l3)
{
}

void Nwgnd::wiegnPLEDPump(unsigned char l1, unsigned char l2, unsigned l3)
{
    //ui.wiegpLED3->setColor(iColor[l3]);
    //qDebug() << "led3=" << l3 << "\r\n";
}

void Nwgnd::wiegnStatusLine(unsigned char l1, char *line)
{
    QPalette palette;
    palette.setColor(QPalette::Base, enum2col(l1));
    palette.setColor(QPalette::Text, Qt::black);
    ui.statusLineEdit->setPalette(palette);

    ui.statusLineEdit->setText(line);
}
