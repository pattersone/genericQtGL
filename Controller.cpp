#include "Controller.h"

Controller::Controller() : win(0)
{
}

//----------------------------------------------------------------
Controller::~Controller()
{
}

//----------------------------------------------------------------
void Controller::updateModelMat()
{
    if (win != 0)
    { win->getGLWidget()->updateModelMat(); }
    else
    { qDebug() << "MainWindow not yet created."; }
}

