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
    unsigned char buf[2];
    // this start Ethernet bride framework
    //Wait until you are connected
    start_lib_interface_task();
    WaitForResult(WM_CONNECTED);
    while(usUDPAvailable());


    //fun_uart_term(unsigned short uartNum, unsigned int uartBaud, 
    //              unsigned int uartStop, unsigned int uartDataBits,
    //              unsigned int uartParity)

    fun_uart_term(3,921600,
                  unsigned int uartStop, unsigned int uartDataBits,
                  unsigned int uartParity)


    return 0;
}

