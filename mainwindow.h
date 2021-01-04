#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "webmanager.h"
#include "homewidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    HomeWidget *m_homeWidgetPtr;
    WebManager m_webManager;
};
#endif // MAINWINDOW_H
