#include "mainwindow.h"
#include <QApplication>
#include <QTimer>
#include <chrono>
#include <stdio.h>
#include "iostream"

using namespace std::chrono;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;

//    QTimer::singleShot(600000, &app, SLOT(quit()));
    milliseconds t0_ms;


    std::cout<<t0_ms.count();
    w.show();
    return app.exec();
}
