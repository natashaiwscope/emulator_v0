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
    // this start Ethernet bride framework
    start_lib_interface_task();

    //Wait until you are connected
    WaitForResult(WM_CONNECTED);

    //fn_get_ver();
    //Now Scan I2C Bus
    fun_i2c_scan();
    WaitForResult(WM_RESPONSE_ARRIVED);
    //Print result
    qDebug() << "Number of Devices=" << i2c_devices_cnt();
    printf("addr=0x%02x\r\n", i2c_devices_addr(0));
    fflush(stdout);

    //Now Scan I2C Bus
    //fun_i2c_scan();
    unsigned char itx_mac[4]={0x12,0x34,0x56,0x78};
    //nrf_set_address(itx_mac,itx_mac);
    fun_i2c_scan();
    WaitForResult(WM_RESPONSE_ARRIVED);
    //Print result
                qDebug() << "Number of Devices=" << i2c_devices_cnt();
                printf("addr=0x%02x\r\n", i2c_devices_addr(0));
                fflush(stdout);



    I2C_Mem_Read(0xa2,0x002,2,NULL,1);
    WaitForResult(WM_RESPONSE_ARRIVED);
    unsigned char uch[256];
                i2c_read_buffer(uch,100);
                printf("read value=%d\r\n",uch[0]);
                fflush(stdout);




    while(1)
    {
        qDebug() << "Device is connected\r\n";
        millisleep(1000);
    }

    return 0;
}

