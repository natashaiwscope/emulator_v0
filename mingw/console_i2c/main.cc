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

static void cb(int a, int b)
{
    qDebug() << "int a = " << a;
    qDebug() << "int b = " << b;
}

#define WAIT_TIME_OUT 100

static unsigned short WaitWiFiMsg(unsigned short iMsg)
{
    unsigned short iCntr=0;
    unsigned short iReady = 0;

    unsigned short winMsg, wPar, lPar;
    float          fVal;
    char           strMsg[1023];

    iCntr=0;
    for(;;)
    {
        iReady = usPullStrWinQ(winMsg, wPar, lPar, fVal, strMsg);
        if(iReady)
        {
            if(iMsg==winMsg)
            {
                return 1;
            }
        }

        if(iCntr>WAIT_TIME_OUT)
        {
            return 0;
        }
        osDelay(10);
        iCntr++;
    }
    return 0;
}



int main(void)
{
    printf("this is console example how to access I2C device from  console\r\n");
    enter_eth_lib();
    //setit_as_esp8266();

#ifdef LINUX_WAY
    RegisterWin(0);
#else
    RegisterWin(NULL);
#endif

    if(!WaitWiFiMsg(WM_CONNECTED))
    {
        qDebug() << "Wait Time Failed\r\n";
    }
    qDebug() << "WiFi Connected\r\n";

    exit_eth_lib();
    osDelay(100);
    return 0;
}
