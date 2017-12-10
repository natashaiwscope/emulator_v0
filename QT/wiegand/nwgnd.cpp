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
    ui.grnLED->setStyleSheet("background: green");
    ui.redLED->setStyleSheet("background: red");

    QSettings settings(CTRL_INI, QSettings::IniFormat);
    csvFileName = settings.value(CTRL_CSV_FILENAME, "carddata.csv").toString();
    cFileName   = settings.value(CTRL_C_FILENAME, "autoexec.c").toString();

    ui.csvFilePathLineEdit->setText(csvFileName);
    ui.cFilePathLineEdit->setText(cFileName);

    settings.sync();

    model_cardTable = new QStandardItemModel();
    model_cardTable->setHorizontalHeaderLabels(QStringList() << "Time" << "RecordID");

    model_device = new QStandardItemModel();
    model_device->setHorizontalHeaderLabels(QStringList() << "Name" << "MAC" << "IPAddr");

    connect(ui.browseCFile, SIGNAL(clicked()),     this,     SLOT(browse_C_Code()));
    connect(ui.browseCSVFile, SIGNAL(clicked()), this,     SLOT(browse_CSV()));
    connect(ui.startCScript, SIGNAL(clicked()),     this,     SLOT(run_C_Code()));
    connect(ui.startCSV,     SIGNAL(clicked()),     this,     SLOT(run_CSV()));

    connect(ui.wiegScan, SIGNAL(clicked()),     this,   SLOT(scan_Wieg()));
    connect(ui.wiegScanRAW, SIGNAL(clicked()),  this,   SLOT(scan_WiegRAW()));
    connect(ui.wiegScanBIN, SIGNAL(clicked()),  this,   SLOT(scan_WiegBIN()));

    sinRec = new RecordData();

    //ui.debug_WinC_Code->setTextBackgroundColor(QColor(0, 0, 255, 127));

}

void Nwgnd::browse_C_Code()
{
    QFileDialog::Options options;
    QString selectedFilter;

    cFileName = QFileDialog::getOpenFileName(this,
                tr("Open C Code"),
                "",
                tr("All Files (*.c);;C Files (*.c)"),
                &selectedFilter,
                options);

    ui.cFilePathLineEdit->setText(cFileName);
    QSettings settings(CTRL_INI, QSettings::IniFormat);
    settings.setValue(CTRL_C_FILENAME, cFileName);
    settings.sync();

    //cb_run(char *ScrName,char *SourceStr);
}

void Nwgnd::browse_CSV()
{
    QFileDialog::Options options;
    QString selectedFilter;

    csvFileName = QFileDialog::getOpenFileName(this,
                  tr("Open CSV"),
                  "",
                  tr("All Files (*.csv);;CSV Files (*.csv)"),
                  &selectedFilter,
                  options);

    ui.csvFilePathLineEdit->setText(csvFileName);
    QSettings settings(CTRL_INI, QSettings::IniFormat);
    settings.setValue(CTRL_CSV_FILENAME, csvFileName);
    settings.sync();
    //cb_run(char *ScrName,char *SourceStr);
}

Nwgnd::~Nwgnd()
{
    delete sinRec;
}

void Nwgnd::run_C_Code()
{
    QByteArray blob;

    QFile file(cFileName);
    if (file.open(QFile::ReadOnly))
    {
        memset(file_name_buff, '\0', sizeof(file_name_buff));
        //strcpy(file_name_buff, "c.c");
        Q2C(cFileName, file_name_buff);
        //RunCFile(file_name_buff);
        qDebug() << file_name_buff;
        RunCFile("autoexec.c");

    }
}

void Nwgnd::run_CSV()
{

}

void Nwgnd::slot_WIEG_RESULT()
{
    qDebug() << __FUNCTION__ << "\r\n";
    fflush(stdout);
}

void Nwgnd::scan_WiegRAW()
{
    QString s=ui.raw_cardNumLineEdit->text();
    ui.statusLineEdit->setText(s);

    //long hex = str.toLong(&ok, 16);     // hex == 255, ok == true
    bool ok;
   long dec = s.toLong(&ok, 10);
   if(ok)
   {
    fn_scan_raw(dec);
   }
}

void Nwgnd::scan_WiegBIN()
{
    QString s=ui.int_cardNumLineEdit->text();
    ui.statusLineEdit->setText(s);
    bool ok;
   long dec = s.toLong(&ok, 10);
   if(ok)
   {
    fn_scan_raw(dec);
   }
}

void Nwgnd::scan_Wieg()
{
    //ui.wiegScan->setColor(Qt::green);
    //fn_scan_wieg(1, 223);
    WiegSetPLED(6, 8, 9);
    WiegSetStatusLine(7, "Vijayandra");
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
