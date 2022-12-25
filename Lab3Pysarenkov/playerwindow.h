#ifndef PLAYERWINDOW_H
#define PLAYERWINDOW_H

#include "sdlwidget.h"

class playerwindow : public SDLWidget
{
public:
    explicit playerwindow(QWidget *parent) : SDLWidget(parent) {};
    
private:
    void Init();
    void Update();
    void OnResize(int w, int h);
};

#endif // PLAYERWINDOW_H
