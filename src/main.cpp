#include "mainwindow.h"
#include <QApplication>
#include <ros/ros.h>\
#include<QMessageBox>
#include<strstream>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
