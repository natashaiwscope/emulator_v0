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




    while(1)
    {
        qDebug() << "Device is connected\r\n";
        millisleep(1000);
    }

    return 0;
}

