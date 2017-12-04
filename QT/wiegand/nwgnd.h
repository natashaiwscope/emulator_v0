#ifndef __NWWIEGNED_TAB_H
#define __NWWIEGNED_TAB_H

#include <qmainwindow.h>
#include <qapplication.h>
#include <QFile>
#include <qtoolbar.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qwidget.h>
#include <qmainwindow.h>
#include <qcombobox.h>
#include <qevent.h>
#include <qwt_plot.h>
#include <qwt_interval.h>
#include <qwt_system_clock.h>
#if QT_VERSION < 0x040000
#include <qwhatsthis.h>
#endif
#include <QtGui>

#include "csql_db.h"
#include "ui_nwgnd.h"

QT_BEGIN_NAMESPACE
class WheelBox;
class QLineEdit;
class QGroupBox;
class QGridLayout;
class QGroupBox;
QT_END_NAMESPACE

class Nwgnd : public QWidget
{
private:
    Q_OBJECT

public:
    Nwgnd(QWidget *parent = 0);
    ~Nwgnd();
    Ui::Nwgnd   ui;
    void fn_LedMsg(int wPar, int lPar, int fVal);

private:
    RecordData *sinRec;
    QStandardItemModel *model_cardTable;
    QStandardItemModel *model_device;
    unsigned short mindex;

    QString csvFileName;
    QString cFileName;
    //string q2s(const QString &s);
signals:
    void stringMsg(int newValue, QString s);

public slots:
    void wiegnStatusLine(unsigned char l1, char *line);
    void wiegnCLEDPump(unsigned char l1, unsigned char l2, unsigned l3);
    void wiegnPLEDPump(unsigned char l1, unsigned char l2, unsigned l3);
signals:

private Q_SLOTS:
    void browse_C_Code();
    void browse_CSV();
    void run_C_Code();
    void run_CSV();
    void scan_Wieg();
};

#endif
