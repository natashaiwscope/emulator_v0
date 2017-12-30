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

    ui->dacSliderCh1->setRange(0, 4095);
    ui->dacSliderCh2->setRange(0, 4095);

    ui->commLED->setMinimumSize(10, 30);
    ui->commLED->setStyleSheet("background: red");


    QFont font3;
    font3.setPointSize(14);
    font3.setBold(true);
    font3.setWeight(75);
    ui->qlbl->setFont(font3);

    ui->oscope_ip->setFont(font3);

    ui->qlbl->setText("CNT#0");





    ui->oscope_ip->setSizeAdjustPolicy(QComboBox::AdjustToContents);
#ifdef LINUX_WAY
    ext_msgPump = new ExternSig();
#endif
    adcTimer.setInterval(100);
    adcTimer.setSingleShot(true);
    dacTimer.setInterval(100);
    dacTimer.setSingleShot(true);

    connect(ui->dacSliderCh1,      SIGNAL(valueChanged(int)), SLOT(fn_DAC_Ch1(int)));
    connect(ui->dacSliderCh2,      SIGNAL(valueChanged(int)), SLOT(fn_DAC_Ch2(int)));

    connect(&dacTimer, SIGNAL(timeout()), this, SLOT(dacTimerExp()));
    connect(&adcTimer, SIGNAL(timeout()), this, SLOT(adcTimerExp()));

    connect(ui->oscope_ip, SIGNAL(currentIndexChanged(int)), this, SLOT(selectNewIPDevice(int)));

    connect(ui->readADCButton,     SIGNAL(clicked()), this, SLOT(fn_ADC_clicked()));

#ifdef LINUX_WAY
    connect(ext_msgPump, SIGNAL(msg_Pumped()), SIGNAL(msg_Pumped()));
    connect(this, SIGNAL(msg_Pumped()), SLOT(msg_PumpedRcvd()));
#endif

    QPalette pal(Qt::black);
    pal.setColor(QPalette::WindowText, Qt::green);

    ui->lcdDAC_Chnl1->setPalette(pal);
    ui->lcdDAC_Chnl2->setPalette(pal);
    ui->lcdDAC_Chnl1->setDecMode();
    ui->lcdDAC_Chnl2->setDecMode();


    ui->lcdADC_Chnl1->setPalette(pal);
    ui->lcdADC_Chnl2->setPalette(pal);
    ui->lcdADC_Chnl1->setDecMode();
    ui->lcdADC_Chnl2->setDecMode();

    ui->readADCButton->setStyleSheet("background: yellow");

#ifdef LINUX_WAY
    RegisterWin(getpid());
#else
    RegisterWin(this->winId());
#endif
    start_lib_interface_task();
}

void Dialog::fn_ADC_clicked()
{
    fun_adc_read(10, 10, 10);
}

Dialog::~Dialog()
{
    exit_all();
    osDelay(100);

    fflush(stdout);
#ifdef LINUX_WAY
    delete ext_msgPump;
#endif
}

void Dialog::fn_DAC_Ch1(int i)
{
    dac_Ch1 = i;
    ui->lcdDAC_Chnl1->display(i);
    dacTimer.start();
}

void Dialog::fn_DAC_Ch2(int i)
{
    dac_Ch2 = i;
    ui->lcdDAC_Chnl2->display(i);
    dacTimer.start();
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
