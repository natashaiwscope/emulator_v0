#include <QCoreApplication>
#include <QStringList>
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
#include "ext_udp.h"

using namespace std;

static void cb(int a, int b)
{
    qDebug() << "int a = " << a;
    qDebug() << "int b = " << b;
}

#define WAIT_TIME_OUT 100

static void DELAY(unsigned short i)
{
        // 10 millisecond delay
        #if defined(__WIN32__) || defined(_WIN32) || defined(WIN32) || defined(__WINDOWS__) || defined(__TOS_WIN__)
        Sleep(i);
        #else  /* presume POSIX */
        usleep(i*1000);
        #endif
}

static unsigned short WaitWiFiMsg(unsigned short iMsg,unsigned short waitTime)
{
    unsigned short iReady = 0;
    unsigned short winMsg, wPar, lPar;
    float          fVal;
    char           strMsg[1023];

    while(waitTime)
    {
        iReady = usPullStrWinQ(winMsg, wPar, lPar, fVal, strMsg);
        if(iReady)
        {
            if(iMsg==winMsg)
            {
                return 1;
            }
        }

        if(!waitTime)
        {
            return 0;
        }

        DELAY(100);

        waitTime--;
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

    if(!WaitWiFiMsg(WM_CONNECTED,5000))
    {
        qDebug() << "Wait Time Failed\r\n";
        return -1;
    }

    qDebug() << "------------------\r\n";
    qDebug() << "  WiFi Connected\r\n";
    qDebug() << "------------------\r\n";






    osDelay(100);
    exit_eth_lib();
    osDelay(100);
    return 0;
}
