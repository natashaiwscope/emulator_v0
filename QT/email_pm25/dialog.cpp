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
#include "smtp_ssl_email.h"

Dialog::Dialog(QWidget *parent, bool smallScreen) : QDialog(parent), ui(new Ui::Dialog)
{
    QLineEdit *lineEdit = new QLineEdit;
    ui->setupUi(this);
    found = false;

    ui->smtpPassword->setEchoMode(QLineEdit::Password);
    ui->fromEMAIL->setText("savergenio@gmail.com");
    ui->toEMAIL->setText("vsingh.usa@gmail.com");
    ui->subjectEMAIL->setText("this is test123");
    ui->smtpPort->setText("465");
    ui->smtpSERVER->setText("smtp.gmail.com");
    ui->pm25Reading->setText("31");

    ui->commLED->setMinimumSize(10, 30);
    ui->commLED->setStyleSheet("background: red");

    connect(ui->smtpDoEmail, SIGNAL(clicked()), this, SLOT(SendEmailButtonAction()));

}

Dialog::~Dialog()
{
    fflush(stdout);
}

void hello()
{
    qDebug() << "Hello from thread " << QThread::currentThread();
    email_main(1,NULL);
    fflush(stdout);
}


void Dialog::SendEmailButtonAction()
{
    QString from_email = ui->fromEMAIL->text();
    QString to_email   = ui->toEMAIL->text();
    QString subject    = ui->subjectEMAIL->text();

    QString smtpPort   = ui->smtpPort->text();
    QString smtpSERVER = ui->smtpSERVER->text();

    setCredencial(ui->smtpSERVER->text().toStdString().c_str(),
                  ui->smtpPort->text().toStdString().c_str(),
                  ui->smtpUsername->text().toStdString().c_str(),
                  ui->smtpPassword->text().toStdString().c_str(),
                  ui->fromEMAIL->text().toStdString().c_str(),
                  ui->toEMAIL->text().toStdString().c_str());

    QFuture<void> future = QtConcurrent::run(hello);
    qDebug() << "hello from GUI thread " << QThread::currentThread();


}
