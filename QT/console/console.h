#ifndef __CMD_CONSOLE_H
#define __CMD_CONSOLE_H

#include <QFile>
#include <QObject>
#include <QQueue>
#include <QTime>
#include <QTimer>
#include <QUrl>
#include <QStringList>

#include "saag.h"
#include "ext_udp.h"


#define DEBUG_LINE_OPTION printf("<< %s >> <<%s>> <<%d>> \r\n",__FILE__,__FUNCTION__,__LINE__);fflush(stdout);;

class Console: public QThread
{
    Q_OBJECT
public:
    void append(const QStringList &s);
    char c_code_text[500000];

    Console(QObject *parent = 0);
    ~Console();
    void slot_ReInitDevList();

    QStringList  cmdlinearg;
    QString      rem_ip_addr;
    unsigned short lTimer;
    QTimer *timerHeartBeat;
    bool         isRebootReq;
    QString      rem_firmware_file;

    void run();

public slots:
    void supply_heartbeat();
};

#endif
