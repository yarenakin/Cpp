#include "mainwindow.h"
#include "config.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    qDebug()<<"project name: " << PROJECT_NAME << " version: " << PROJECT_VER;
    w.show();
    return a.exec();
}
