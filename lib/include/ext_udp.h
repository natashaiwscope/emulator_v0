#ifndef __EXTERNAL_UDP_H
#define __EXTERNAL_UDP_H

#include <qapplication.h>
#include <QtGui>

#ifdef CREATE_COMM_LIB
#endif

#define DEBUG_LINE_OPTION printf("<< %s >> <<%s>> <<%d>> \r\n",__FILE__,__FUNCTION__,__LINE__);fflush(stdout);;
//DEBUG_LINE_OPTION

#ifdef CREATE_COMM_LIB
#define IMPROC_LIB_FUN  Q_DECL_EXPORT
#else
#define IMPROC_LIB_FUN Q_DECL_IMPORT
#endif

#ifdef _WIN32
#define PREFIX extern "C" IMPROC_LIB_FUN
#else
#define PREFIX extern "C"
#endif
#define uint32_t  unsigned int 
#define uint16_t  unsigned short 
#define uint8_t   unsigned char 

#define FULL_ARRAY_SIZE             2048
#define MAX_PLOT_POINT 4096

#define WM_USER_MSG           (0x400)
#define WM_LED                (WM_USER_MSG+1)
#define WM_MSG                (WM_USER_MSG+2)
#define WM_GRAPH              (WM_USER_MSG+3)
#define WM_WIN_DIS_FRAME1     (WM_USER_MSG+4)
#define WM_WIN_DIS_FRAME2     (WM_USER_MSG+5)
#define WM_WIN_DIS_FRAME3     (WM_USER_MSG+6)
#define WM_WIN_DIS_FRAME4     (WM_USER_MSG+7)
#define WM_WIN_DIS_FRAME5     (WM_USER_MSG+8)
#define WM_FEED_R_X_Y         (WM_USER_MSG+9)
#define WM_STATUS_MSG         (WM_USER_MSG+10)
#define WM_SCROLL_MSG         (WM_USER_MSG+11)
#define WM_TIMER_MSG          (WM_USER_MSG+12)

#define WM_BOXT               (WM_USER_MSG+13)
#define WM_BOXR               (WM_USER_MSG+14)
#define WM_BOXF               (WM_USER_MSG+15)
#define WM_BANNER             (WM_USER_MSG+16)
#define WM_CLEAR_MSG          (WM_USER_MSG+17)
#define WM_APPEND_MSG         (WM_USER_MSG+18)
#define WM_CAL_MSG            (WM_USER_MSG+19)
#define WM_CAL_LED            (WM_USER_MSG+20)
#define WM_INFO_MSG           (WM_USER_MSG+21)

#define WM_WIN_DIS_IMG1       (WM_USER_MSG+22)
#define WM_WIN_DIS_IMG2       (WM_USER_MSG+23)
#define WM_WIN_DIS_IMG3       (WM_USER_MSG+24)
#define WM_WIN_DIS_IMG4       (WM_USER_MSG+25)
#define WM_WIN_DIS_IMG5       (WM_USER_MSG+26)
#define WM_WIN_DIS_IMG6       (WM_USER_MSG+27)
#define WM_CLEAR_LOG          (WM_USER_MSG+28)
#define WM_LOG                (WM_USER_MSG+29)

#define WM_WIN_PLOT_C1        (WM_USER_MSG+30)
#define WM_WIN_PLOT_C2        (WM_USER_MSG+31)
#define WM_WIN_PLOT_C3        (WM_USER_MSG+32)

#define WM_WIN_APC_BOX        (WM_USER_MSG+33)
#define WM_TIMER_STOP_MSG     (WM_USER_MSG+34)
#define WM_WIN_SAVE_IMG       (WM_USER_MSG+35)
#define WM_HW_CONNECTED       (WM_USER_MSG+36)
#define WM_HW_NOTCONNECTED    (WM_USER_MSG+37)
#define WM_RECP_SCO           (WM_USER_MSG+38)
#define WM_RECP_SIG           (WM_USER_MSG+39)

#define WM_APP_LOADER         (WM_USER_MSG+42)
#define WM_APP_COMOK          (WM_USER_MSG+43)
#define WM_APP_FILEOK         (WM_USER_MSG+44)
#define WM_APP_PROGRESS       (WM_USER_MSG+45)
#define WM_APP_DOWNOK         (WM_USER_MSG+46)
#define WM_APP_PYTHON         (WM_USER_MSG+47)

#define WM_CRV_T1             (WM_USER_MSG+48)
#define WM_CRV_T2             (WM_USER_MSG+49)
#define WM_CRV_T3             (WM_USER_MSG+50)
#define WM_CRV_T4             (WM_USER_MSG+51)
#define WM_CRV_T5             (WM_USER_MSG+52)
#define WM_CRV_T6             (WM_USER_MSG+53)

#define WM_SET_IMG_TAB        (WM_USER_MSG+55)
#define WM_CIMG_DISPLAY       (WM_USER_MSG+56)
#define WM_GIMG_DISPLAY       (WM_USER_MSG+57)

#define WMTM_LOG_MSG          (WM_USER_MSG+58)
#define WMTM_STATUS_MSG       (WM_USER_MSG+59)
#define WMTM_STATUS_GRAPH     (WM_USER_MSG+60)
#define WMTM_BOX_MSG          (WM_USER_MSG+61)
#define WMTM_LED_MSG          (WM_USER_MSG+62)
#define WMTM_TAB_MSG          (WM_USER_MSG+63)
#define WMTM_ARRIVED_MSG      (WM_USER_MSG+64)

#define WM_SIGNAL_TAB         (WM_USER_MSG+65)
#define WM_SCOPE_TAB          (WM_USER_MSG+66)
#define WM_PLUGIN_TAB         (WM_USER_MSG+67)
#define WM_SCRIPT_TAB         (WM_USER_MSG+68)

#define WM_SCOPE_PROGR        (WM_USER_MSG+69)
#define WM_SCOPE_READY        (WM_USER_MSG+70)
#define WM_SCOPE_PARTREADY        (WM_USER_MSG+71)
#define WM_SCOPE_START        (WM_USER_MSG+72)
#define WM_BOOT_START         (WM_USER_MSG+73)
#define WM_CSCRIPT_SETTINGS   (WM_USER_MSG+74)
#define WM_CONNECTED          (WM_USER_MSG+75)
#define WM_CHANGE_TAB         (WM_USER_MSG+76)
#define WM_RESP_GOT         (WM_USER_MSG+77)
#define WM_WIEGAND           (WM_USER_MSG+78)
#define WM_WIEGAND_RESULT    (WM_USER_MSG+79)
#define WM_DISCONNECT         (WM_USER_MSG+80)
#define WM_CONSOLE         (WM_USER_MSG+81)
#define WM_CONSOLE1         (WM_USER_MSG+82)
#define WM_CONSOLE2         (WM_USER_MSG+83)
#define WM_CONSOLE3         (WM_USER_MSG+84)
#define WM_USART            (WM_USER_MSG+85)
#define WM_REBOOT           (WM_USER_MSG+86)


typedef void (*callback_alarm)(int, int);

class IMPROC_LIB_FUN LibComm;

typedef struct
{
    unsigned int   len;
    unsigned char  data[1024];
} __attribute__((__packed__)) DataStruct;


#ifdef LINUX_WAY
class IMPROC_LIB_FUN Osignal : public QObject
{
    Q_OBJECT
public:
    explicit Osignal(QTabWidget *t, QObject *parent = 0);
    Osignal();
signals:
    void msg_Pumped();
public slots:
};

class IMPROC_LIB_FUN ExternSig : public QObject
{
    Q_OBJECT
public:
    ExternSig();
signals:
    void msg_Pumped();
public slots:
    void got_msg_Pumped()
    {
        emit msg_Pumped();
    }
};
#endif

enum {  CSCRIPT_SCOPE = 0,
        CSCRIPT_SIGNAL,
        CSCRIPT_GPIO,
        CSCRIPT_I2C,
        CSCRIPT_I2C_READ,
        CSCRIPT_I2C_WRITE,
        CSCRIPT_INCAP,
        CSCRIPT_OUTCAP,
        CSCRIPT_UART,
        CSCRIPT_UART_READ,
        CSCRIPT_UART_WRITE,
        CSCRIPT_LINE,
        CSCRIPT_LED,
        CSCRIPT_LCD_DEC,
        CSCRIPT_LCD_HEX,
        CSCRIPT_LCD_BIN,
        CSCRIPT_BANNER,
        CSCRIPT_TEXT,
        CSCRIPT_CLEAR_TEXT,
        CSCRIPT_GRAPH1,
        CSCRIPT_GRAPH2,
        CSCSCRIPT_LAST
     };

enum {  WIEGNED_STATUS = 0,
        WIEGNED_PREV_LED,
        WIEGNED_CURR_LED,
        WIEGNED_ADD_TBL,
        WIEGNED_JUMP_NEXT
     };



static volatile QColor iColor[] = {Qt::black, Qt::white, Qt::darkGray, Qt::gray, Qt::lightGray, Qt::red, Qt::green, Qt::blue, Qt::cyan, Qt::magenta, Qt::yellow, Qt::darkRed, Qt::darkGreen, Qt::darkBlue, Qt::darkCyan, Qt::darkMagenta, Qt::darkYellow, Qt::transparent};

enum
{
    Qtblack = 2,
    Qtwhite,
    QtdarkGray,
    Qtgray,
    QtlightGray,
    Qtred,
    Qtgreen,
    Qtblue,
    Qtcyan,
    Qtmagenta,
    Qtyellow,
    QtdarkRed,
    QtdarkGreen,
    QtdarkBlue,
    QtdarkCyan,
    QtdarkMagenta,
    QtdarkYellow,
    Qttransparent
};


PREFIX void exit_all();
PREFIX unsigned short us_isDevReady();
PREFIX unsigned short usLED_On(unsigned short ledNum);
PREFIX unsigned short usLED_Off(unsigned short ledNum);
PREFIX unsigned short usDevWrite(unsigned short cmd, unsigned char *buff, unsigned long len);
PREFIX unsigned short usDevRead(unsigned short cmd, unsigned char *buff, unsigned long len);
PREFIX int millisleep(unsigned long ms);
PREFIX int osDelay(unsigned long ms);
PREFIX unsigned char usPullStrWinHLQ(unsigned short &winMsg, unsigned char *ucArr, float &fVal, char *str);
PREFIX unsigned char usPullStrWinQ(unsigned short &winMsg, unsigned short &wPar, unsigned short &lPar, float &fVal, char *str);
PREFIX int u3PullWinQ(unsigned short &winMsg, unsigned short &wPar, unsigned short &lPar);
PREFIX void usPushWinQ(unsigned short winMsg, unsigned short wPar, unsigned short lPar, float fVal);
PREFIX void usPushStrWinQ(unsigned short winMsg, unsigned short wPar, unsigned short lPar, char *str);


PREFIX void  Push_CSCRIPT(unsigned short iMode, void *s, unsigned long i);
PREFIX void  Pull_CSCRIPT(unsigned short iMode, void *s);
PREFIX void push_gui_text(char *cstr, unsigned short len);
PREFIX unsigned short pull_gui_text(char *cstr, unsigned short len);
PREFIX unsigned short us_isDevReady();
PREFIX int isWinRegistered();

PREFIX void start_lib_interface_task();
PREFIX void stop_lib_interface_task();
PREFIX short test(unsigned short *i);
PREFIX void usTestMsg(unsigned short winMsg, unsigned short wPar, unsigned short lPar);

/* following functions are common between "C" Script and std "C" gcc interface */

PREFIX unsigned short fnLED_Off(unsigned short ledNum);
PREFIX unsigned short fnLED_On(unsigned short ledNum);

PREFIX void fun_uart_start(unsigned short bus_num, unsigned short bits, unsigned long speed, unsigned short stopbit, unsigned short parity);

PREFIX int fun_uart_term(unsigned short uartNum, unsigned int uartBaud, unsigned int uartStop, unsigned int uartDataBits, unsigned int parity);

//PREFIX void deviceDisconnect();

PREFIX int ReadTEST(short uNum, unsigned char *buff);
PREFIX void ncCreateEPCmd(unsigned short coap_cmd, void *p, unsigned short lenPkt);
PREFIX void fun_i2c_settings(unsigned long int slaveAddr, unsigned long int is10Bit, unsigned long int i2cSpeed);
PREFIX void fun_i2c_write(unsigned short i2c_addr, unsigned short len, unsigned char *buff);
PREFIX void fun_i2c_read(unsigned short i2c_addr, unsigned short len, unsigned char *buff);

PREFIX unsigned short uart_read(unsigned char bus_num, unsigned char *buff);
PREFIX unsigned short uart_write(unsigned char bus_num, unsigned char *buff, unsigned short len);

PREFIX int fun_incap_start(int i, int len);
PREFIX int fun_outcap_start(int i, int len);
PREFIX int fun_incap_read(int i);
PREFIX int fun_outcap_write(int i);

PREFIX unsigned short local_uart_write(unsigned char *buff, unsigned short len);
PREFIX unsigned short local_uart_read(unsigned char *buff, unsigned short len);

PREFIX void start_timer_task();
PREFIX unsigned short usMemWrite();
PREFIX unsigned short vMemWriteInit(unsigned short mType, unsigned long int addr, void *cbuff, unsigned long memsize);
PREFIX unsigned short usSaveIP(QString s);

PREFIX unsigned short usMemRead(void);
PREFIX unsigned short vMemReadInit(unsigned short mType, unsigned long int addr, void *cbuff, unsigned long memsize);

PREFIX unsigned short us_IN_Thread(void);
PREFIX unsigned short us_ST_Thread(void);
PREFIX void wake_stThread();

PREFIX void fn_fw_download(QString filePath);
PREFIX void fn_fw_upload(QString filePath, unsigned long int iNumBytes);
PREFIX void fn_get_ver();
PREFIX void fn_set_ssco(void *);

PREFIX unsigned short usInitWiegCSVFile(char *filename);
PREFIX unsigned char usReadRecord(unsigned long *fcCode, unsigned long *cnNum);

PREFIX unsigned short usFetchOneCSVRecord();
PREFIX unsigned short WiegScanCSVFetchedCard();
PREFIX void fn_scan_raw(unsigned int cardNum);
PREFIX unsigned short WiegScanCard(unsigned long facCode, unsigned long cardNum);
PREFIX void WiegScanLED();
PREFIX void fn_scan_wieg(unsigned long fcode, unsigned long cardNum);

PREFIX void Q2C(QString temp, char *outstr);
PREFIX unsigned short usWsHWEmulate();
PREFIX unsigned short usWsHWEmulateCard(unsigned long i, unsigned long j);
PREFIX void append_csv(char *buffer, unsigned short l);
PREFIX void append_test_csv(char *buffer, unsigned short l);
PREFIX unsigned short usSelectDevIndex(short i);
PREFIX unsigned int weigResult(unsigned int i);
PREFIX unsigned short usGetConnectedDeviceIP(unsigned short i, char *devName);
PREFIX void RebootCurrentDevice();

PREFIX unsigned short WiegAppStatus(char *status);
PREFIX unsigned short WiegAppPrevLED(unsigned short led1, unsigned short led2, unsigned short led3);
PREFIX unsigned short WiegAppCurrLED(unsigned short led1, unsigned short led2, unsigned short led3);
PREFIX unsigned short WiegAppendCSVScan();
PREFIX void getWiegCSVResult(void *w);

PREFIX void WiegSetPLED(unsigned char led1, unsigned char led2, unsigned char led3);
PREFIX void WiegSetCLED(unsigned char led1, unsigned char led2, unsigned char led3);
PREFIX void WiegSetStatusLine(unsigned char ccolor, char *line);
PREFIX QColor enum2col(unsigned char i);
PREFIX void SetOTP(void *v);
PREFIX void push_fw_download_file(const char *filename);
PREFIX void heartbeat_1ms();
//PREFIX unsigned short uart_data_ready();

PREFIX short I2C_Master_Transmit(uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t Timeout);
PREFIX short I2C_Master_Receive(uint16_t DevAddress, uint16_t Size, uint32_t Timeout);
PREFIX short I2C_Slave_Transmit(uint8_t *pData, uint16_t Size, uint32_t Timeout);
PREFIX short I2C_Slave_Receive(uint8_t *pData, uint16_t Size, uint32_t Timeout);
PREFIX short I2C_Mem_Write(uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size, uint32_t Timeout);
PREFIX short I2C_Mem_Read(uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size, uint32_t Timeout);
PREFIX short I2C_IsDeviceReady(uint16_t DevAddress, uint32_t Trials, uint32_t Timeout);
PREFIX short I2C_Master_Transmit_IT(uint16_t DevAddress, uint8_t *pData, uint16_t Size);
PREFIX short I2C_Master_Receive_IT(uint16_t DevAddress, uint8_t *pData, uint16_t Size);
PREFIX short I2C_Slave_Transmit_IT(uint8_t *pData, uint16_t Size);
PREFIX short I2C_Slave_Receive_IT(uint8_t *pData, uint16_t Size);
PREFIX short I2C_Mem_Write_IT(uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size);
PREFIX short I2C_Mem_Read_IT(uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size);
PREFIX short I2C_Master_Sequential_Transmit_IT(uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t XferOptions);
PREFIX short I2C_Master_Sequential_Receive_IT(uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t XferOptions);
PREFIX short I2C_Slave_Sequential_Transmit_IT(uint8_t *pData, uint16_t Size, uint32_t XferOptions);
PREFIX short I2C_Slave_Sequential_Receive_IT(uint8_t *pData, uint16_t Size, uint32_t XferOptions);
PREFIX short I2C_Master_Abort_IT(uint16_t DevAddress);
PREFIX short I2C_EnableListen_IT();
PREFIX short I2C_DisableListen_IT();

PREFIX void RunCFile(char *fileName);
#ifdef LINUX_WAY
PREFIX ExternSig *createWidget1();
#endif

PREFIX LibComm     *libComm();

#if _WIN32
PREFIX void RegisterWin(HWND hwnd);
#else
PREFIX void RegisterWin(int hwnd);
#endif

#define FIX_EXTERN PREFIX
#include "bridge_vars.h"


#endif
