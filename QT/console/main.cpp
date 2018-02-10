#include <QCoreApplication>
#include <iostream>
#include <stdio.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>
#include <QMutex>
#include <QThread>
#include <QStringList>
#include "ext_udp.h"

using namespace std;
void RUN_I2C_Example();

void append(const QStringList &s)
{
    QStringList cmdlinearg = s;

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
        }
        else if (cmdlinearg.at(i).contains("fw="))
        {
            QRegExp rx("=");// match a comma or a space
            QString  str = cmdlinearg.at(i);

            QStringList list = str.split(rx, QString::SkipEmptyParts);

            qDebug() << "ip addr specified was" << endl;
            qDebug() << "list 0" <<  list.at(0);
            qDebug() << "list 1" <<  list.at(1);

            fflush(stdout);

        }
        else if (cmdlinearg.at(i) == "reboot")
        {
            qDebug() << "REBOOT DEVICE\r\n";
            fflush(stdout);
        }
    }
}

int WaitForResult(int result)
{
    unsigned short winMsg, wPar, lPar;
    float fVal;
    char        strMsg[1023];

    do
    {
        usPullStrWinQ(winMsg, wPar, lPar, fVal, strMsg);
        millisleep(1);
    }
    while(winMsg!=result);
}

int main(int argc, char **argv)
{
    // this start Ethernet bride framework
    //Wait until you are connected
    enter_eth_lib();
    WaitForResult(WM_CONNECTED);
    while(usUDPAvailable());

    RUN_I2C_Example();

    while(1)
    {
        qDebug() << "Device is connected\r\n";
        millisleep(1000);
    }
    exit_eth_lib();

    return 0;
}

void RUN_I2C_Example()
{
    unsigned char buf[2];
    //Now Scan I2C Bus
    fun_i2c_scan();
    while(!usUDPAvailable());
    qDebug() << "Number of Devices=" << i2c_devices_cnt();
    printf("addr=0x%02x\r\n", i2c_devices_addr(0));
    printf("addr=0x%02x\r\n", i2c_devices_addr(1));
    fflush(stdout);

    fun_i2c_scan();
    while(!usUDPAvailable());
    qDebug() << "Number of Devices=" << i2c_devices_cnt();
    printf("addr=0x%02x\r\n", i2c_devices_addr(0));
    printf("addr=0x%02x\r\n", i2c_devices_addr(1));
    fflush(stdout);


    I2C_Mem_Read(0xae,0x91c,2,buf,1);
    while(!usUDPAvailable());
    unsigned char uch[256];
    i2c_read_buffer(uch,100);
    printf("read value=0x%02x\r\n",uch[0]);
    fflush(stdout);


}
