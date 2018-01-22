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
    start_lib_interface_task();
    WaitForResult(WM_CONNECTED);
    // Now Ready for Data

    // Empty every thing
    while(usUDPAvailable());

    fun_i2c_scan();
    while(!usUDPAvailable());
    qDebug() << "Number of Devices=" << i2c_devices_cnt();
    printf("addr=0x%02x\r\n", i2c_devices_addr(0));
    fflush(stdout);

    unsigned char itx_mac[4]={0x12,0x34,0x56,0x78};
    unsigned char irx_mac[4]={0x13,0x34,0x56,0x78};

    nrf_set_address(itx_mac,irx_mac);
    while(!usUDPAvailable());
    printf("set adddress\r\n"); fflush(stdout);

    nrf_set_chnl_datasize(2,4);
    while(!usUDPAvailable());
    printf("set chnl datasize\r\n"); fflush(stdout);

    nrf_write(irx_mac,4);
    while(!usUDPAvailable());
    printf("do tx\r\n"); fflush(stdout);




    while(1)
    {
        qDebug() << "Device is connected\r\n";
        millisleep(1000);
    }

    return 0;
}

