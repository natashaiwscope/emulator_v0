#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>

#include <pointstream.h>

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private:
    Ui::MainWindow *ui;

    static const int SAMPLE_GENERATION_PERIOD = 1; // 5 ms
    quint64 sampleNumber = 0;

    QList <PointStream *> dataPoints;

    void timerEvent(QTimerEvent *event);
};

#endif // MAINWINDOW_H
