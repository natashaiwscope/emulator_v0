#include <QtGui>

#include "dialog.h"

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
#include "matrix_lcd.h"

void Dialog::dacTimerExp()
{
    fun_dac_write_channel(dac_Ch1, dac_Ch2);
}

void Dialog::adcTimerExp()
{


}

Dialog::Dialog(QWidget *parent, bool smallScreen) : QDialog(parent), ui(new Ui::Dialog)
{
    QLineEdit *lineEdit = new QLineEdit;
    ui->setupUi(this);
    found = false;
    dac_Ch1 = 0;
    dac_Ch2 = 0;

    adc_Ch1 = 0;
    adc_Ch2 = 0;

    i2cDevType = 0;

    ui->commLED->setMinimumSize(10, 30);
    ui->commLED->setStyleSheet("background: red");

    ui->devAddressm24lr_box->setText("0xAE");
    ui->intAddressm24lr_box->setText("0x91C");
    ui->intAddrLenm24lr_box->setText("0x2");
    ui->DataLenm24lr_box->setText("0x1");


    QFont font3;
    font3.setPointSize(14);
    font3.setBold(true);
    font3.setWeight(75);
    ui->qlbl->setFont(font3);

    ui->oscope_ip->setFont(font3);
    ui->i2c_addr_cmb->setFont(font3);

    ui->qlbl->setText("CNT#0");

    ui->oscope_ip->setSizeAdjustPolicy(QComboBox::AdjustToContents);
#ifdef LINUX_WAY
    ext_msgPump = new ExternSig();
#endif
    adcTimer.setInterval(100);
    adcTimer.setSingleShot(true);
    dacTimer.setInterval(100);
    dacTimer.setSingleShot(true);


    connect(&dacTimer, SIGNAL(timeout()), this, SLOT(dacTimerExp()));
    connect(&adcTimer, SIGNAL(timeout()), this, SLOT(adcTimerExp()));

    connect(ui->oscope_ip, SIGNAL(currentIndexChanged(int)), this, SLOT(selectNewIPDevice(int)));
    connect(ui->i2cBusScanButton, SIGNAL(clicked()), this, SLOT(scanI2CBus()));
    connect(ui->buttonM24LRWriteI2CDevice, SIGNAL(clicked()), this, SLOT(M24LRReadI2CDeviceSlot()));
    connect(ui->buttonWriteI2CDevice, SIGNAL(clicked()), this, SLOT(M24LRWriteI2CDeviceSlot()));

    // LCD Display part
    connect(ui->buttonMatrixOrbit24WriteI2CDevice, SIGNAL(clicked()), this, SLOT(WriteMatrixDisplay()));
    connect(ui->buttonClearScreen, SIGNAL(clicked()), this, SLOT(ClearMatrixDisplay()));
    // LCD Display part

#ifdef LINUX_WAY
    connect(ext_msgPump, SIGNAL(msg_Pumped()), SIGNAL(msg_Pumped()));
    connect(this, SIGNAL(msg_Pumped()), SLOT(msg_PumpedRcvd()));
#endif

    QPalette pal(Qt::black);
    pal.setColor(QPalette::WindowText, Qt::green);

    ui->lcdADC_Chnl1->setPalette(pal);
    ui->lcdADC_Chnl2->setPalette(pal);
    ui->lcdADC_Chnl1->setDecMode();
    ui->lcdADC_Chnl2->setDecMode();

#ifdef LINUX_WAY
    RegisterWin(getpid());
#else
    RegisterWin(this->winId());
#endif
    enter_eth_lib();
}

void Dialog::fn_ADC_clicked()
{
    fun_adc_read(10, 10, 10);
}

Dialog::~Dialog()
{
    exit_eth_lib();
    osDelay(100);

    fflush(stdout);
#ifdef LINUX_WAY
    delete ext_msgPump;
#endif
}

void Dialog::fn_ADC_Cnt(int i)
{
    ui->lcdADC_Chnl1->display(i);
}

void Dialog::fn_ADC_Timer(int i)
{
    ui->lcdADC_Chnl2->display(i);
}

bool Dialog::eventFilter(QObject *object, QEvent *e)
{
    if ( e->type() == QEvent::Resize )
    {
        //const QSize &size = ((QResizeEvent *)e)->size();
        //lineEdit->setText("*******");

    }

    return Dialog::eventFilter(object, e);
}

void Dialog::closeEvent(QCloseEvent *event)
{
    //if (maybeSave()) {
    if (true)
    {
        //writeSettings();
        event->accept();
    }
    else
    {
        event->ignore();
    }
}


void Dialog::FoundDataLoggerHWString(QString s)
{
    int i;

    unsigned short len;
    /* device ping received, ask version info */

    for (i = 0u; i < ui->oscope_ip->count(); i++ )
    {
        QString s1 = ui->oscope_ip->itemText(i);
        if (s == s1) found = true;
    }

    if (!found)
    {
        ui->oscope_ip->addItem(s);
        ui->commLED->setStyleSheet("background: green");
    }

}

void Dialog::msg_PumpedRcvd()
{
    commonMsgHandle();
}

#ifndef LINUX_WAY
bool Dialog::winEvent(MSG *m, long *result)
{

    if ((m->message) >= (WM_USER_MSG))
    {
        commonMsgHandle();
        return true;
    }
    else
    {
        switch (m->message)
        {
        case (WM_DEVICECHANGE):
            return true;
        default:
            return false;
        }
    }

    return 0;
}
#endif

void Dialog::commonMsgHandle(void)
{
    unsigned short winMsg, wPar, lPar;
    //unsigned char  ucArr[4];
    float fVal;
    char        strMsg[1023];
    //while(usPullStrWinHLQ(winMsg,ucArr,fVal,strMsg))
    while (usPullStrWinQ(winMsg, wPar, lPar, fVal, strMsg))
    {
        switch (winMsg)
        {
        case WM_RESPONSE_ARRIVED:
            {
                unsigned char uch[100];
                if(i2cDevType==1)  // <<== you are waiting for m24l response
                {
                    char buff[100];
                    unsigned char uch[1024];
                    int i=0;

                    /* max response will be 1024 */
                    i=i2c_read_buffer(uch,1024);

                    sprintf(buff,"0x%02x",uch[0]);
                    ui->Datam24lr_box->setText(buff);
                }
            }

            break;

        case WM_I2C_SCAN_RES:
            {
                int i;
                char textbuff[100];
                ui->i2c_addr_cmb->clear();
                for(i=0;i<i2c_devices_cnt();i++)
                {
                    sprintf(textbuff,"0x%02X(%d)",i2c_devices_addr(i),i2c_devices_addr(i));
                    ui->i2c_addr_cmb->addItem(textbuff);
                }
            }

            break;
        case WMTM_ARRIVED_MSG:
            //qDebug() << "debug test message";
            //qDebug() << strMsg;
            //labelVersion->setText(strMsg);
            //Q_EMIT hw_connected();
            //lineEdit->setText("Scope Connected*******");
            //PullCCFrame(0,&lfrm);
            //memset(buffer1,'\0',100);
            //strcpy(buffer1,strMsg);
            //infolineEdit->setText(buffer1);
            break;
        case WM_CONNECTED:
            fn_get_ver();
            slot_ReInitDevList();
            break;

        case WM_DISCONNECT:
            slot_ReInitDevList();
            break;

        case WM_ADC:
            ui->lcdADC_Chnl1->display(fun_adc_ch1(0));
            ui->lcdADC_Chnl2->display(fun_adc_ch2(0));

            break;
        case WM_PLUGIN_TAB:
            break;
        case WM_SCRIPT_TAB:
            break;

        case WM_WIEGAND_RESULT:
            break;

        case WM_WIEGAND:
            //DEBUG_LINE_OPTION;
            switch (wPar)
            {
            case WIEGNED_STATUS:
                //wiegTab->wiegnStatusLine(lPar, strMsg);
                break;
            case WIEGNED_PREV_LED:
                //wiegTab->wiegnPLEDPump( strMsg[0], strMsg[1], strMsg[2]);
                break;
            case WIEGNED_CURR_LED:
                //wiegTab->wiegnCLEDPump( strMsg[0], strMsg[1], strMsg[2]);
                break;
            case WIEGNED_ADD_TBL:
                break;
            case WIEGNED_JUMP_NEXT:
                break;
            default:
                break;

            };

            break;

        case WM_CSCRIPT_SETTINGS:
            switch (wPar)
            {
            case CSCRIPT_SCOPE:
                break;
            case CSCRIPT_SIGNAL:
                break;
            case CSCRIPT_GPIO:
                DEBUG_LINE_OPTION
                break;
            case CSCRIPT_I2C:
                DEBUG_LINE_OPTION
                break;
            case CSCRIPT_I2C_READ:
                DEBUG_LINE_OPTION
                break;
            case CSCRIPT_I2C_WRITE:
                DEBUG_LINE_OPTION
                break;
            case CSCRIPT_INCAP:
                DEBUG_LINE_OPTION
                break;
            case CSCRIPT_OUTCAP:
                DEBUG_LINE_OPTION
                break;
            case CSCRIPT_UART:
                DEBUG_LINE_OPTION
                break;
            case CSCRIPT_UART_READ:
                DEBUG_LINE_OPTION
                break;
            case CSCRIPT_UART_WRITE:
                DEBUG_LINE_OPTION
                break;
            case CSCRIPT_LINE:
                //lineEdit->setText(strMsg);
                break;
            case CSCRIPT_LED:
            case CSCRIPT_LCD_DEC:
            case CSCRIPT_LCD_HEX:
            case CSCRIPT_LCD_BIN:
            case CSCRIPT_BANNER:
            case CSCRIPT_GRAPH1:
            case CSCRIPT_GRAPH2:
            case CSCRIPT_TEXT:
            case CSCRIPT_CLEAR_TEXT:
                //Q_EMIT sig_CSCRIPT_Extern(wPar);
                break;
            default:
                DEBUG_LINE_OPTION
                break;

            };

            break;

        default:

            break;
        }
    }
}

void Dialog::slot_ReInitDevList()
{
    char textbuff[256];
    unsigned short l, ltdev;

    ui->oscope_ip->clear();

    memset(textbuff, '\0', sizeof(textbuff));
    ltdev = usGetConnectedDeviceIP(0, textbuff);

    //qDebug() << "Num Devices=" << ltdev << "\r\n";
    //fflush(stdout);

    if (ltdev == 0) ui->commLED->setStyleSheet("background: red");
    else
    {
        for (l = 0; l < ltdev; l++)
        {
            memset(textbuff, '\0', sizeof(textbuff));
            ltdev = usGetConnectedDeviceIP(l, textbuff);
            ui->oscope_ip->addItem(textbuff);
            ui->commLED->setStyleSheet("background: green");
        }
        sprintf(textbuff, "CNT#%d", ltdev);
        ui->qlbl->setText(textbuff);
    }


}

void Dialog::selectNewIPDevice(int index)
{
    if(ui->oscope_ip->count())
    {
        usSelectDevIndex(index);
    }
}

void Dialog::scanI2CBus()
{
    fun_i2c_scan();
}

void hello()
{
    qDebug() << "Hello from thread " << QThread::currentThread();
    fflush(stdout);
}


void Dialog::M24LRReadI2CDeviceSlot()
{
    QFuture<void> future = QtConcurrent::run(hello);
    qDebug() << "hello from GUI thread " << QThread::currentThread();
    I2C_Mem_Read(0xae,0x91c,2,NULL,1);

    bool ok;
    unsigned int devAddr       = ui->devAddressm24lr_box->text().toLong(&ok, 16);
    unsigned int intAddr       = ui->intAddressm24lr_box->text().toLong(&ok, 16);
    unsigned int intAddrSize   = ui->intAddrLenm24lr_box->text().toLong(&ok, 16);
    unsigned int intDataLen    = ui->DataLenm24lr_box->text().toLong(&ok, 16);

    /* as we using 3 different devices,
     * when response comes back WM_RESPONSE_ARRIVED
     * we will know that which device response was 
     * expected, user can pick any number just for 
     * own */
    i2cDevType=1; // <<== memorize
    I2C_Mem_Read(devAddr,intAddr,intAddrSize,NULL,1);
    qDebug() << "devAddr =" << devAddr << "\r\n";
    qDebug() << "intAddr =" << intAddr << "\r\n";
    qDebug() << "intAddrSize =" << intAddrSize << "\r\n";
    qDebug() << "intDLen =" << intDataLen << "\r\n";
    fflush(stdout);

}

void Dialog::M24LRWriteI2CDeviceSlot()
{
    QFuture<void> future = QtConcurrent::run(hello);
    qDebug() << "hello from GUI thread " << QThread::currentThread();
}

void Dialog::WriteMatrixDisplay()
{
    unsigned char i_display_str[512];
    //Get string from text box
    QString str  = ui->MatrixLCDData_box->text();

    //Copy into uchar buffer
    memcpy(i_display_str, str.toStdString().c_str() ,str.size());
    fun_i2c_write(0x50,str.size(),i_display_str);

}
void Dialog::ClearMatrixDisplay()
{
    unsigned char i_display_cmd[3];
    i_display_cmd[0]= I2C_COMMAND;
    i_display_cmd[1]= CLEAR_DISPLAY;
    //Clears matrix orbital disply
    fun_i2c_write(0x50,2,i_display_cmd);
}
