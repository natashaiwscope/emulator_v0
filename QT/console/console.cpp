#include <QFileInfo>
#include <QThread>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QString>
#include <QStringList>
#include <QTimer>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#ifdef LINUX_WAY
#include <sys/ioctl.h>
#include <linux/i2c-dev.h>
#include <sys/socket.h>
#include <csignal>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/i2c-dev.h>
#else
#include <windows.h>
#endif


#include "console.h"


using namespace std;


void Console::append(const QStringList &s)
{
    cmdlinearg = s;

    qDebug() << "    \n-------------------------------------";
    qDebug() << "    \nStarting Console Application Interface";
    qDebug() << "    \n ..... Scanning LAN .....";
    qDebug() << "    \n-------------------------------------";
    fflush(stdout);

    for (int i = 0; i < cmdlinearg.size(); ++i)
    {
        //qDebug() << cmdlinearg.at(i) << endl;
        if (cmdlinearg.at(i) == "put")
        {
        }
        else if (cmdlinearg.at(i) == "get")
        {
        }
        else if (cmdlinearg.at(i) == "run")
        {
        }
        else if (cmdlinearg.at(i).contains("remip="))
        {
            QRegExp rx("=");// match a comma or a space
            QString  str = cmdlinearg.at(i);

            QStringList list = str.split(rx, QString::SkipEmptyParts);

            qDebug() << "ip addr specified was" << endl;
            qDebug() << "list 0" <<  list.at(0);
            qDebug() << "list 1" <<  list.at(1);

            rem_ip_addr = list.at(1);

            fflush(stdout);

        }
        else if (cmdlinearg.at(i).contains("fw="))
        {
            QRegExp rx("=");// match a comma or a space
            QString  str = cmdlinearg.at(i);

            QStringList list = str.split(rx, QString::SkipEmptyParts);

            qDebug() << "ip addr specified was" << endl;
            qDebug() << "list 0" <<  list.at(0);
            qDebug() << "list 1" <<  list.at(1);

            rem_firmware_file = list.at(1);

            fflush(stdout);

        }
        else if (cmdlinearg.at(i) == "reboot")
        {
            isRebootReq = true;
            qDebug() << "REBOOT DEVICE\r\n";
            fflush(stdout);
        }
    }
}

Console::Console(QObject *parent) :  QThread(parent)
{
    timerHeartBeat      = new QTimer(this);

    connect(timerHeartBeat,SIGNAL(timeout()), this, SLOT(supply_heartbeat()));
    timerHeartBeat->start(50);
    this->start();
}


void Console::supply_heartbeat()
{
    //cs_mutex.lock();
    //lrnNotSignaled.wakeAll();
    //cs_mutex.unlock();
}


Console::~Console()
{
    osDelay(100);
    fflush(stdout);
}


void Console::slot_ReInitDevList()
{
    char textbuff[256];
    QString s;
    unsigned short l, ltdev;

    memset(textbuff, '\0', sizeof(textbuff));
    ltdev = usGetConnectedDeviceIP(0, textbuff);

    //qDebug() << "Num Devices=" << ltdev << "\r\n";
    //fflush(stdout);

    for (l = 0; l < ltdev; l++)
    {
        memset(textbuff, '\0', sizeof(textbuff));
        ltdev = usGetConnectedDeviceIP(l, textbuff);
        s=textbuff;

        if(rem_ip_addr == s)
        {
            qDebug() << "selected device found =" << rem_ip_addr << "\r\n";
            fflush(stdout);
            usSelectDevString(rem_ip_addr.toStdString().c_str());
        }
        qDebug() << textbuff << "\r\n";
    }
    fflush(stdout);
}

void Console::run()
{
    unsigned short winMsg, wPar, lPar;
    float fVal;
    char        strMsg[1023];

    start_lib_interface_task();
    do
    {
        usPullStrWinQ(winMsg, wPar, lPar, fVal, strMsg);
        millisleep(400);
    }
    while(winMsg!=WM_CONNECTED);
   slot_ReInitDevList();

    while(1)
    {
        qDebug() << "Device is connected\r\n";
        millisleep(1000);
    }



}
