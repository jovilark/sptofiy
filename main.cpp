#include "mainwindow.h"

#include <QApplication>
#include <QDesktopWidget>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDesktopWidget windowSize;
    MainWindow w;
    int x = windowSize.width() * 0.4;
    int y = windowSize.height() * 0.4;
    w.setFixedSize(x,y);
    w.show();
    return a.exec();
}
