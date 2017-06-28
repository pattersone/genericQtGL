#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QDebug>

#include "mainwindow.h"

class Controller
{
public:
    Controller();
    ~Controller();
    void setWindow(MainWindow *w) { win = w; }
    void updateModelMat();

private:
    MainWindow *win;
};

#endif //CONTROLLER_H
