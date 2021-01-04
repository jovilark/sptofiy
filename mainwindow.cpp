#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      m_homeWidgetPtr(new HomeWidget(this)),
      m_webManager()
{
}

MainWindow::~MainWindow()
{
    delete m_homeWidgetPtr;
}

