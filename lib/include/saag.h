#ifndef __SAAG_H
#define __SAAG_H

typedef unsigned short  IWenum;


#define MAX_UART_BUFFER 1024
#define BYTE_TO_BINARY(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0')

#define MAX_PLOT_POINT 4096
#define DATA_PKT_SIZE 636
#define MAX_DATA_PKT_SIZE (10*DATA_PKT_SIZE)
#define MAX_1K_SIZE 1024

typedef enum
{
    I2C_OK       = 0x00,
    I2C_ERROR,
    I2C_BUSY,
    I2C_TIMEOUT1
} I2C_StatusTypeDef;

enum
{
    __IW_Sin = 0,
    __IW_Cos,
    __IW_Square,
    __IW_Rect1,
    __IW_Rect2,
    __IW_Triangle,
    __IW_Sawtooth1,
    __IW_Sawtooth2,
    __IW_Spike,
    __IW_Raw,
    __IW_Nosig = 0x80
};

typedef struct
{
    unsigned short i2c_slave_addr;
    unsigned short i2c_self_addr1;
    unsigned short i2c_self_addr2;
    unsigned short i2c_10bit_mode;
    unsigned int   i2c_speed;
} __attribute__((__packed__)) I2C_Comm;

typedef struct
{
    unsigned short i2c_addr;
    unsigned short len;
    unsigned char  buff[MAX_1K_SIZE];
} __attribute__((__packed__)) I2C_IO;

typedef struct
{
    unsigned int      uart_mode;
    unsigned short    uart_num;
    unsigned short    uart_bits;
    unsigned short    uart_stopbit;
    unsigned short    uart_parity;
    unsigned int      uart_speed;
    unsigned int      uart_stopChar;
} __attribute__((__packed__)) UART_Comm;

typedef struct
{
    unsigned short uart_num;
    unsigned short len;
    unsigned char  buff[MAX_UART_BUFFER];
} __attribute__((__packed__)) UART_IO;


typedef struct
{
    unsigned short samplingRate;
    unsigned short bufferlen;
} __attribute__((__packed__)) ADC_Comm;

typedef struct
{
    unsigned short len;
    unsigned short buff[MAX_1K_SIZE];
} __attribute__((__packed__)) ADC_Data;

typedef struct
{
    unsigned short samplingRate;
    unsigned short int bufferlen;
} __attribute__((__packed__)) DAC_Comm;

typedef struct
{
    unsigned short len;
    unsigned short buff[MAX_1K_SIZE];
} __attribute__((__packed__)) DAC_Data;

enum
{
    MemCCode = 0,
    MemFlash,
    MemIntRam,
    MemIntDRam,
    MemSDCard,
    MemRS485,
    MemUART2,
    MemUART3,
    Mem_LastPar
};

typedef struct
{
    IWenum            MemType;
    IWenum            Off_h;
    IWenum            Off_l;
    IWenum            range_h;
    IWenum            range_l;
    IWenum            res;
} IMemData;

typedef struct
{
    IMemData          iPtr;
    unsigned char     buff[MAX_1K_SIZE];
} __attribute__((__packed__)) MemInfo;


typedef struct
{
    unsigned short  numFreq;
    unsigned short  numPoint;

    unsigned short  waveformA;
    unsigned short  waveformB;

    unsigned short  maxADAC;
    unsigned short  minADAC;

    unsigned short  maxBDAC;
    unsigned short  minBDAC;

    unsigned short  numTmr;
    unsigned short  numTmrDiv;
} __attribute__((__packed__)) sig;

typedef struct
{
    unsigned short  activeChannel;
    unsigned short  currChannel;
    unsigned short  numFreq;
    unsigned short  numPoint;

    unsigned short  numTmr;
    unsigned short  numTmrDiv;

    unsigned short  triggerSource;
    unsigned short  triggerType;
    unsigned short  triggerVoltage;

    unsigned short  gain_ch1;
    unsigned short  offset_ch1;

    unsigned short  gain_ch2;
    unsigned short  offset_ch2;       //
} __attribute__((__packed__)) sco;

typedef struct SCODataPkt
{
    unsigned short offset;
    unsigned short len;
    unsigned short sbuff[128];
} __attribute__((__packed__)) SCODataPkt;

typedef struct SCODataPkt512
{
    unsigned short offset;
    unsigned short len;
    unsigned short tlen;
    unsigned short sbuff[512];
} __attribute__((__packed__)) SCODataPkt512;

typedef struct SIGNAL_Q
{
    volatile unsigned short sigElem;
    volatile unsigned short sig_freq;

    volatile float sigA_min;
    volatile float sigA_max;
    volatile unsigned short sigA_type;
    volatile float sigB_min;
    volatile float sigB_max;
    volatile unsigned short sigB_type;
    unsigned char  activeSigChannel;

    volatile unsigned short sig_tcnt;
    volatile unsigned short sig_tdiv;
} __attribute__((__packed__)) SIGNAL_Q;

typedef struct SCOPE_Q
{
    volatile unsigned short sco_Chnl;
    volatile unsigned short sco_Freq;
    volatile unsigned short sco_Elem;
    volatile unsigned short sco_tcnt;
    volatile unsigned short sco_tdiv;
    volatile unsigned short sco_xdiv;
} __attribute__((__packed__)) SCOPE_Q;

typedef struct SCO
{
    int gain;
    int offset;
} __attribute__((__packed__)) SCO;

typedef struct Sco_Settings
{
    SCO Ch1;
    SCO Ch2;

    unsigned short  activeChannel;
    unsigned short  currChannel;
    unsigned short  triggerSource;
    unsigned short  triggerType;
    unsigned short  triggerVoltage;

    unsigned short  enMarker;
    unsigned short  HorTop;
    unsigned short  HorBot;
    unsigned short  VerLeft;
    unsigned short  VerRight;

    unsigned short  numFreq;
    unsigned short  numPoint;

    unsigned short  tmr;
    unsigned short  tmrdiv;

} __attribute__((__packed__)) Sco_Settings;

typedef struct SIG
{
    unsigned short waveForm;
    unsigned short symm;
    unsigned short max;
    unsigned short min;
    unsigned short noise;
    unsigned short gain;
    unsigned short offset;
} __attribute__((__packed__)) SIG;

typedef struct Sig_Settings
{
    SIG Ch1;
    SIG Ch2;

    unsigned short  activeChannel;
    unsigned short  currChannel;
    unsigned short  numFreq;
    unsigned short  numPoint;

    unsigned short  tmr;
    unsigned short  tmrdiv;

    unsigned short  adjust_Max;
    unsigned short  adjust_Min;
//} Sig_Settings;
} __attribute__((__packed__)) Sig_Settings ;

typedef struct
{
    unsigned short Arr[MAX_PLOT_POINT];
    unsigned short offset;
    unsigned short limit;
    unsigned short progress;
} __attribute__((__packed__)) PlDataPoint;

typedef struct
{
    double   scoA[2148];
    double   scoB[2148];
    short    nElem;
    short    progress;
    short    offset;
    short    limit;
} __attribute__((__packed__)) ScopeDataPoint;

typedef struct
{
    double ChnlA[MAX_PLOT_POINT];
    double ChnlB[MAX_PLOT_POINT];
    double PolyA[MAX_PLOT_POINT];
    double PolyB[MAX_PLOT_POINT];
    unsigned short sigSize;
} __attribute__((__packed__)) PlSignalDataPoint;
























typedef struct
{
    unsigned short verHigh;
    unsigned short verLow;
    unsigned short verFix;
    unsigned short crc;
    unsigned short str_addr;
    unsigned short end_addr;
} __attribute__((__packed__)) FlashHeader;


typedef struct
{
    unsigned short  procType;
    unsigned short  flash_Size;
    unsigned short  str_crc_region_high;
    unsigned short  str_crc_region_low;
    unsigned short  end_crc_region_high;
    unsigned short  end_crc_region_low;
    unsigned short  crc32_high;
    unsigned short  crc32_low;
    unsigned short  sernum1_high;
    unsigned short  sernum1_low;
    unsigned short  sernum2_high;
    unsigned short  sernum2_low;
    unsigned short  sernum3_high;
    unsigned short  sernum3_low;
} __attribute__((__packed__)) MICRO_TYPE;

typedef struct  FW_Pkt
{
    unsigned int offset;
    unsigned int len;
    union
    {
        unsigned char  uc_p[MAX_1K_SIZE];
        char            c_p[MAX_1K_SIZE];
    };
} __attribute__((__packed__)) FW_Pkt;

typedef struct
{
    unsigned short relayRead;
    unsigned short led1Read;
    unsigned short led2Read;
    unsigned short led3Read;
} __attribute__((__packed__)) WiegnedGPIO;

enum
{
    WIEGAND_26=0,
    WIEGAND_37=1,
    WIEGAND_RAW=2,
    WIEGAND_BIN=3,
};

typedef struct
{
    unsigned short cardFormat;

    union
    {
        unsigned short facCode;
        unsigned short cardNum16Bit;
    };

    union
    {
        unsigned int cardNum26Bit;
    };

    union
    {
        unsigned int cardNum37Bit;
    };

    union
    {
        unsigned short cardBitsLen;
        unsigned char  charNum[1024];
    };
} __attribute__((__packed__)) WiegnedCard;



typedef struct
{
    unsigned short wieg_scanID;
    unsigned short facCode;
    unsigned short cardNum;

    unsigned short cardLow;
    unsigned short cardHigh;
    unsigned short cardRes;
    unsigned short cardTime;
    unsigned short cardActTime;

    unsigned short timeOut;
    unsigned short ledRCnt;
    unsigned short ledGCnt;
    unsigned short relCnt;
    unsigned short bitCount;

    WiegnedGPIO   pin;
} __attribute__((__packed__)) WiegnedCardNum;


typedef struct
{
    unsigned long start_region;
    unsigned long end_region;
    unsigned long calc_crc;
} __attribute__((__packed__)) FirmwareHeader;

















#define DEV_NAME_SIZE 11
#define DEV_ID_SIZE 11

typedef struct __attribute__((__packed__)) otp_name
{
    unsigned char dev_name[DEV_NAME_SIZE];
    unsigned char dev_id[DEV_ID_SIZE];
} __attribute__((__packed__)) otp_name;


#define STM32FIRMWARE_UPGRADE 0x01

typedef struct
{
    IWenum              uartNum;
    unsigned int        uartBaud;
    unsigned int        uartStop;
    unsigned int        uartDataBits;
    unsigned int        uartParity;
    unsigned int        stopChar;
    unsigned int        uart_mode;
} __attribute__((__packed__)) SAAG_UART_Settings;


typedef struct
{
    IWenum              DownloadType;
    char                FileName[512];
    unsigned int        FileSize;
    unsigned int        Offset;
} __attribute__((__packed__)) SAAGFirmwareUpdate;

typedef struct
{
    char                fileName[12];
    unsigned short      segOffHigh;
    unsigned short      segOffLow;
    unsigned short      segSize;
    unsigned char       segData[1024];
} __attribute__((__packed__)) SAAGFileRead;

typedef struct
{
    char                fileName[12];
    unsigned short      segOffset;
    unsigned short      segSizeHigh;
    unsigned short      segSizeLow;
    unsigned char       segData[1024];
} __attribute__((__packed__)) SAAGFileWrite;

typedef struct
{
    unsigned short int   Token;
} __attribute__((__packed__)) SAAGFileToken;

typedef struct
{
    unsigned short      __usedLen;
    unsigned char       __prodName[32];
    unsigned char       __verNum[32];
    unsigned char       __serNum[32];
    unsigned char       __date[32];
    unsigned char       __time[32];

    unsigned int        __crc;
    unsigned int        __len;
    unsigned int        __csum;

    unsigned short        verMajor;
    unsigned short        verMinor;
    unsigned short        verBgFix;
    unsigned short        verBldNm;
    unsigned int         __str_addr;
    unsigned int         __end_addr;

    unsigned int        _halVersion;
    unsigned int        _halRevID;
    unsigned int        _halDEVID;
    unsigned int        _halUID[3];
} __attribute__((__packed__)) SAAGVersion;

typedef struct
{
    unsigned short        ID_ProgramMem;
    unsigned short        ID1_High;
    unsigned short        ID1_Low;
    unsigned short        ID2_High;
    unsigned short        ID2_Low;
    unsigned short        ID3_High;
    unsigned short        ID3_Low;
} __attribute__((__packed__)) SAAGMicro;


#endif
