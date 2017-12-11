﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
 
 
using System.Threading;
 
using System.ComponentModel;
using System.Windows.Interop;



using System.Windows.Interop;


namespace WSim
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        bool isConnNotInitialized=true;
        BackgroundWorker m_oWorker;

        private IntPtr WndProc(IntPtr hwnd, int msg, IntPtr wParam, IntPtr lParam, ref bool handled)
        {
            if (msg == slib.scom.WM_CONNECTED)
            {
                //L0.IsActive = true;
                //connLED.IsActive = true;
                this.connLED.Background = Brushes.LimeGreen;
                slot_ReInitDevList();
            }
            else if (msg == slib.scom.WM_CONSOLE)
            {
                //i++;
            }
            else if (msg == slib.scom.WM_WIEGAND_RESULT)
            {
            
            }
            return IntPtr.Zero;
        }

        void m_oWorker_DoWork(object sender, DoWorkEventArgs e)
        {
            //NOTE : Never play with the UI thread here...

            //time consuming operation
            for (;;)
            {
                Thread.Sleep(1);
                slib.scom.heartbeat_1ms();
            }

            //Report 100% completion on operation completed
            //m_oWorker.ReportProgress(100);
        }

        public MainWindow()
        {
            InitializeComponent();
        }

        private void Start_Click(object sender, RoutedEventArgs e)
        {
           if(isConnNotInitialized)
           {
            IntPtr windowHandle = (new WindowInteropHelper(this)).Handle;
            //RegisterWPF(windowHandle);

            HwndSource src = HwndSource.FromHwnd(windowHandle);
            src.AddHook(new HwndSourceHook(WndProc));

                slib.scom.RegisterWPF(windowHandle);
                slib.scom.OnNewStart();
            //iwInitSerial();

                m_oWorker = new BackgroundWorker();
                m_oWorker.DoWork += new DoWorkEventHandler(m_oWorker_DoWork);
                //m_oWorker.ProgressChanged += new ProgressChangedEventHandler(m_oWorker_ProgressChanged);
                //m_oWorker.RunWorkerCompleted += new RunWorkerCompletedEventHandler(m_oWorker_RunWorkerCompleted);
                m_oWorker.WorkerReportsProgress = false;
                m_oWorker.WorkerSupportsCancellation = true;
                m_oWorker.RunWorkerAsync();
                isConnNotInitialized = false;
           }

        }

        private void connLED_MouseLeftButtonDown(object sender, MouseButtonEventArgs e)
        {
            this.connLED.Background = Brushes.LightBlue;
            slib.scom.RebootCurrentDevice();
        }

        private void slot_ReInitDevList()
        {

            string s_ip;
            int iCount;
            short j;

            iCount=slib.scom.usDeviceIPAddress(0, out s_ip);

            ipAddrBox.Items.Clear();
            ipAddrBox.Text = String.Empty;
            ipAddrBox.SelectedItem = -1;

            for(j=0;j<iCount;j++)
            {
                iCount=slib.scom.usDeviceIPAddress(j, out s_ip);
                ipAddrBox.Items.Add(s_ip);

            }
            //ipAddrBox.Items.RemoveAt(ipAddrBox.Items.IndexOf(ipAddrBox.SelectedItem));
            ipAddrBox.SelectedIndex = 0;
        }

        private void ipAddrBox_DropDownClosed(object sender, EventArgs e)
        {
            this.connLED.Background = Brushes.Yellow;
            this.statusLine.Text = "->" + ipAddrBox.SelectedIndex;
            slib.scom.usSelectDev(ipAddrBox.SelectedIndex);
        }

        private void ipAddrBox_DropDownOpened(object sender, EventArgs e)
        {
            //this.connLED.Background = Brushes.Green;
        }

        private void scanSingle1_Click(object sender, RoutedEventArgs e)
        {
            this.statusLine.Text = "FacCode" + int.Parse(this.facCode.Text) + "CardNum" + int.Parse(this.cardNum.Text);
             
        }

        private void scanSingleRaw_Click(object sender, RoutedEventArgs e)
        {

        }
    }
}
