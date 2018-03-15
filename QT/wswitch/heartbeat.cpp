#include <QMainWindow>
#include <QtGui>
#include <QColorDialog>
#include <qapplication.h>
#include <qmainwindow.h>
#include <QtNetwork>
#include <qtoolbar.h>
#include <qcombobox.h>

#include "images/connect.xpm"
#include "images/disconnect.xpm"
#include "images/sd.xpm"
#include "images/run.xpm"
#include "images/startscript.xpm"
#include "images/boot.xpm"
#include "images/script_red.xpm"
#include "images/script_grn.xpm"
#include "images/script_yel.xpm"
#include "images/oscilloscope.xpm"

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

#include "nwgnd.h"
#include "heartbeat.h"

#include "ext_udp.h"
#define SERIAL_INI  "serial.ini"

void HeartBeat::supply_heartbeat()
{
    heartbeat_1ms();
}

HeartBeat::HeartBeat(QWidget *parent)
{
    printf("starting listerner \n");
    tBar          = new QToolBar();
    nwgnd         = new Nwgnd(this);

#ifdef LINUX_WAY
    ext_msgPump = new ExternSig();
#endif

    found = false;
    reinit_done = false;

    iMode = 0;


    createActions();
    //createMenus();
    createToolBars();
    createStatusBar();
    createTabWidget();

    //setWindowTitle(tr("Data Logger"));

#ifdef LINUX_WAY
    connect(ext_msgPump, SIGNAL(msg_Pumped()), SIGNAL(msg_Pumped()));
    connect(this, SIGNAL(msg_Pumped()), SLOT(msg_PumpedRcvd()));
#endif
    connect(oscope_ip, SIGNAL(currentIndexChanged(int)), this, SLOT(selectNewIPDevice(int)));


    connect(&delayRAMCodeTimer, SIGNAL(timeout()), this, SLOT(delayRAMCodeTimerrExpired()));

    connect(d_run_script, SIGNAL(toggled(bool)), this, SLOT(slot_Run_Script_In_PC(bool)));
    connect(d_reboot, SIGNAL(toggled(bool)), this, SLOT(slot_Reboot(bool)));
    connect(d_fwupdate, SIGNAL(toggled(bool)), this, SLOT(slot_FwUpdate(bool)));

    connect(this,SIGNAL(sig_SWITCH_RESULT()),nwgnd, SLOT(slot_SWITCH_RESULT()));

#ifdef LINUX_WAY
    RegisterWin(getpid());
#else
    RegisterWin(this->winId());
#endif

    enter_eth_lib();
    //local_uart_write(NULL,0);

}

void HeartBeat::CheckDeviceSlot()
{
    static int i = 0;
    static int direction = 0;
#if 0
    if (us_isDevReady())
    {
        //qDebug() << "Device found\r\n" << endl;
        i++;

        if (direction)
            usLED_On(i);
        else
            usLED_Off(i);

        if (i >= 9)
        {
            i = 0;
            direction ^= 0x01;
        }
        fflush(stdout);
    }
#endif

}


void HeartBeat::HeartBeatTimerSyncSlot()
{

}


void HeartBeat::slot_Reboot(bool x)
{
    RebootCurrentDevice();
}

void HeartBeat::timerExpired()
{
}

void HeartBeat::createActions()
{
    connLED    = new QLabel(this);
    connLED->setMinimumSize(10, 30);

    commLED    = new QLabel(this);
    commLED->setMinimumSize(10, 30);

    connLED->setStyleSheet("background: red");
    commLED->setStyleSheet("background: red");

    d_connect = new QAction(QIcon(icon_connect), "Connect", this);
    d_connect->setShortcut(tr("C-C"));
    d_connect->setCheckable(true);

    settingsAct = new QAction(QIcon(":/images/settings.png"), tr("Serial Se&ttings"), this);
    settingsAct->setShortcut(tr("Ctrl+Shift+T"));
    settingsAct->setStatusTip(tr("Edit Kompotr settings"));
    QObject::connect(settingsAct, SIGNAL(triggered()), this, SLOT(editSerialSettings()));

#if 0
    newScript = new QAction(QIcon(":/images/new.png"), tr("&New \"C\" Script"), this);
    newScript->setShortcuts(QKeySequence::New);
    newScript->setStatusTip(tr("Create a new form letter"));
    connect(newScript, SIGNAL(triggered()), this, SLOT(newScriptSlot()));

    autoExecScript = new QAction(QIcon(":/images/new.png"), tr("&AutoExec \"C\" Script"), this);
    autoExecScript->setShortcuts(QKeySequence::New);
    autoExecScript->setStatusTip(tr("Create a new form letter"));
    connect(autoExecScript, SIGNAL(triggered()), this, SLOT(autoExecScriptSlot()));
#endif

    rtcClock = new QAction(QIcon(":/images/rtc.png"), tr("&Sync RTC Clock"), this);
    rtcClock->setShortcuts(QKeySequence::New);
    rtcClock->setStatusTip(tr("Create a new form letter"));
    connect(rtcClock, SIGNAL(triggered()), this, SLOT(PushRTCTimeSlot()));

    saveAct = new QAction(QIcon(":/images/save.png"), tr("&Save..."), this);
    saveAct->setShortcuts(QKeySequence::Save);
    saveAct->setStatusTip(tr("Save the current form letter"));
    connect(saveAct, SIGNAL(triggered()), this, SLOT(save()));

#if 0
    printAct = new QAction(QIcon(":/images/print.png"), tr("&Print..."), this);
    printAct->setShortcuts(QKeySequence::Print);
    printAct->setStatusTip(tr("Print the current form letter"));
    connect(printAct, SIGNAL(triggered()), this, SLOT(print()));


    undoAct = new QAction(QIcon(":/images/undo.png"), tr("&Undo"), this);
    undoAct->setShortcuts(QKeySequence::Undo);
    undoAct->setStatusTip(tr("Undo the last editing action"));
    connect(undoAct, SIGNAL(triggered()), this, SLOT(undo()));

    quitAct = new QAction(tr("&Quit"), this);
    quitAct->setShortcuts(QKeySequence::Quit);
    quitAct->setStatusTip(tr("Quit the application"));
    connect(quitAct, SIGNAL(triggered()), this, SLOT(close()));

    aboutAct = new QAction(tr("&About"), this);
    aboutAct->setStatusTip(tr("Show the application's About box"));
    connect(aboutAct, SIGNAL(triggered()), this, SLOT(about()));

    aboutQtAct = new QAction(tr("About &Qt"), this);
    aboutQtAct->setStatusTip(tr("Show the Qt library's About box"));
    connect(aboutQtAct, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
#endif
}
void HeartBeat::SaveDeviceIPAddr()
{

    if (oscope_ip->count())
    {
        //qDebug() << "IP= " << oscope_ip->currentText();
        //usSaveIP(oscope_ip->currentText());
    }
}

void HeartBeat::createToolBars()
{
    fileToolBar = addToolBar(tr("File"));
    fileToolBar->addWidget(connLED);
    fileToolBar->addAction(d_connect);
    fileToolBar->addAction(rtcClock);
    fileToolBar->addAction(settingsAct);

    d_ram_script = new QAction(QIcon(script_yel_xpm), "Single Click (Push)/Double Click(Edit)", tBar);
    d_ram_script->setCheckable(true);
    fileToolBar->addAction(d_ram_script);

    d_run_script = new QAction(QIcon(":/images/go.png"), tr("&Run \"C\" Script"), tBar);
    d_run_script->setCheckable(true);
    fileToolBar->addAction(d_run_script);

    sdCard = new QAction(QIcon(":/images/floppy.png"), tr("&SaveIP"), this);
    sdCard->setShortcuts(QKeySequence::Save);
    sdCard->setStatusTip(tr("Save this IP Address"));
    connect(sdCard, SIGNAL(triggered()), this, SLOT(SaveDeviceIPAddr()));

    fileToolBar->addWidget(commLED);

    oscope_ip = new QComboBox(this);

    //oscope_ip->setEditable(true);
    oscope_ip->setSizeAdjustPolicy(QComboBox::AdjustToContents);


    //lcd_Number  = new QLCDNumber(this);
    //QPalette pal(Qt::blue);
    //pal.setColor(QPalette::WindowText, Qt::blue);
    //lcd_Number->setPalette(pal);

    //lcd_Number->setGeometry(QRect(0, 390, 271, 71));
    //lcd_Number->setGeometry(QRect(80, 350, 311, 61));
    //lcd_Number->setSmallDecimalPoint(true);
    //lcd_Number->setNumDigits(2);
    //lcd_Number->setSegmentStyle(QLCDNumber::Flat);
    //lcd_Number->display(0);

    qlbl = new QLabel(this);
    qlbl->setObjectName(QString::fromUtf8("qlbl"));
    qlbl->setGeometry(QRect(30, 30, 821, 61));
    QFont font3;
    font3.setPointSize(14);
    font3.setBold(true);
    font3.setWeight(75);
    qlbl->setFont(font3);

    oscope_ip->setFont(font3);
    //lineEdit->setFont(font3);

    qlbl->setText("CNT#0");


    fileToolBar->addWidget(oscope_ip);
    //fileToolBar->addWidget(lcd_Number);
    fileToolBar->addWidget(qlbl);
    fileToolBar->addAction(sdCard);

    labelVersion = new QLabel(this);
    QFont font;
    font.setPointSize(8);
    font.setBold(true);
    font.setStyleStrategy(QFont::PreferDefault);
    labelVersion->setFont(font);
    //oscope_ip->setIcon(QIcon(oscilloscope));
    //_led3    = new QwwLed(Qt::darkGray, QwwLed::Circular,this);
    //fileToolBar->addWidget(_led3);
    fileToolBar->addWidget(labelVersion);

    d_ini_script = new QAction(QIcon(script_red), "INI", tBar);
    d_ini_script->setCheckable(true);

    d_autoexec_script = new QAction(QIcon(script_grn_xpm), "AutoExec", tBar);
    d_autoexec_script->setCheckable(true);

    //fileToolBar->addWidget(rem_Filelist);
    fileToolBar->addAction(d_ini_script);
    fileToolBar->addAction(d_autoexec_script);


    d_format = new QAction(QIcon(":/images/format.png"), tr("&Format SD Card"), tBar);
    d_format->setCheckable(true);
    fileToolBar->addAction(d_format);

    d_reboot = new QAction(QIcon(":/images/reboot.png"), tr("&Reboot"), tBar);
    d_reboot->setCheckable(true);
    fileToolBar->addAction(d_reboot);

    d_fwupdate = new QAction(QIcon(":/images/fwupdate.png"), tr("&Firmware"), tBar);
    d_fwupdate->setCheckable(true);
    fileToolBar->addAction(d_fwupdate);

    labelVersion = new QLabel(this);

    //font.setFamily(QString::fromUtf8("Courier New"));
    font.setPointSize(8);
    font.setBold(true);
    font.setStyleStrategy(QFont::PreferDefault);
    labelVersion->setFont(font);

    fileToolBar->addWidget(labelVersion);
}

//! [8]
void HeartBeat::createStatusBar()
{
    statusBar()->showMessage(tr("Ready"));
}
//! [8]

void HeartBeat::createTabWidget()
{
    tabWidget    = new QTabWidget(this);
    setCentralWidget(tabWidget);

    tabWidget->addTab(nwgnd, tr("\"NWGND\""));
    tabWidget->setCurrentIndex(0);
}

void HeartBeat::comm_start()
{
    commLED->setStyleSheet("background: red");
}

void HeartBeat::comm_end()
{
    commLED->setStyleSheet("background: yellow");
}

//! [9]
bool HeartBeat::eventFilter(QObject *object, QEvent *e)
{
    if ( e->type() == QEvent::Resize )
    {
        //const QSize &size = ((QResizeEvent *)e)->size();
        //lineEdit->setText("*******");

    }

    return HeartBeat::eventFilter(object, e);
}

void HeartBeat::closeEvent(QCloseEvent *event)
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


void HeartBeat::FoundDataLoggerHWString(QString s)
{
    int i;

    unsigned short len;
    /* device ping received, ask version info */

    for (i = 0u; i < oscope_ip->count(); i++ )
    {
        QString s1 = oscope_ip->itemText(i);
        if (s == s1) found = true;
    }

    if (!found)
    {
        oscope_ip->addItem(s);
        connLED->setStyleSheet("background: green");
    }

}

void HeartBeat::browse_and_send()
{
    QFileDialog::Options options;
    QString selectedFilter;
    fileName = QFileDialog::getOpenFileName(this,
                                            tr("QFileDialog::getOpenFileName()"),
                                            "",
                                            tr("All Files (*);;INI Files (*.ini);;C Files (*.c);;C Files (*.log)"),
                                            &selectedFilter,
                                            options);

    if (!fileName.isEmpty())
    {
        Q_EMIT sig_pushFile(fileName);
    }
}

HeartBeat::~HeartBeat()
{
    exit_eth_lib();
    osDelay(100);

    fflush(stdout);
    delete tBar;
#ifdef LINUX_WAY
    delete ext_msgPump;
#endif
}

void HeartBeat::msg_PumpedRcvd()
{
    commonMsgHandle();
}

#ifndef LINUX_WAY
bool HeartBeat::winEvent(MSG *m, long *result)
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

void HeartBeat::commonMsgHandle(void)
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
            labelVersion->setText(strMsg);
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

        case WM_CHANGE_TAB:
            if (wPar < 2)
            {
                tabWidget->setCurrentIndex(wPar);
            }
            break;


        case WM_PLUGIN_TAB:
            tabWidget->setCurrentIndex(2);
            break;
        case WM_SCRIPT_TAB:
            tabWidget->setCurrentIndex(3);
            break;

        case WM_NRF_SWITCH:
                Q_EMIT sig_SWITCH_RESULT();
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


        default:

            break;
        }
    }
}

void HeartBeat::selectNewIPDevice(int index)
{
    if(oscope_ip->count())
    {
        usSelectDevIndex(index);
    }
}

void HeartBeat::onActionCommand(QString s)
{
    unsigned char buff[1000];
    unsigned short len = 0;


    qDebug() << "cmd=" << s << "\n";
    fflush(stdout);
    memset(buff, '\0', sizeof(buff));
    Q2C(s, (char *)buff);
    len = strlen((char *)buff);
    //local_uart_write(buff,len);
}

void HeartBeat::slot_ReInitDevList()
{
    char textbuff[256];
    unsigned short l, ltdev;

    oscope_ip->clear();

    memset(textbuff, '\0', sizeof(textbuff));
    ltdev = usGetConnectedDeviceIP(0, textbuff);

    //qDebug() << "Num Devices=" << ltdev << "\r\n";
    //fflush(stdout);

    if (ltdev == 0) connLED->setStyleSheet("background: red");
    else
    {
        for (l = 0; l < ltdev; l++)
        {
            memset(textbuff, '\0', sizeof(textbuff));
            ltdev = usGetConnectedDeviceIP(l, textbuff);
            oscope_ip->addItem(textbuff);
            connLED->setStyleSheet("background: green");
        }
        sprintf(textbuff, "CNT#%d", ltdev);
        qlbl->setText(textbuff);
    }


}
