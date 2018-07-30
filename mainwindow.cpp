#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QTime>

MainWindow::MainWindow(QWidget *parent) :
    QLCDNumber(12,parent)
  //    QMainWindow(parent),
  //    ui(new Ui::MainWindow)

{
    setSegmentStyle(Filled);

    QTimer *timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,&MainWindow::showtime);
    timer->start(0);

    showtime();

    setWindowTitle("My Damn Clock");
    resize(3000,1500);
    //    ui->setupUi(this);
}

void MainWindow::showtime()
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm:ss:zzz");
    text.size();
//    if ((time.second()%2==0))
//        text[2]=' ';
    display(time.hour());
    display(time.minute());
    display(time.second());
    display(text);

}

MainWindow::~MainWindow()
{
    //delete ui;
}
