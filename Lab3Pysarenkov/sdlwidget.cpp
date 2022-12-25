#include "sdlwidget.h"
#include <SDL2/SDL.h>

SDLWidget::SDLWidget(QWidget *parent)
    : QWidget{parent}
{
    setAttribute(Qt::WA_OpaquePaintEvent);
    setAttribute(Qt::WA_NoSystemBackground);
    setFocusPolicy(Qt::StrongFocus);
    // HOWEVER, this important attribute stops the "paintEvent" slot from being called,
    // thus we'll need to write our own method that paints to the screen every frame.
    setAttribute(Qt::WA_PaintOnScreen);
  
    // Create an SDL window from the widget's native handle.
    window = SDL_CreateWindowFrom(reinterpret_cast<void*>(winId()));
    if(window == NULL)
      throw "Can't create window: " + std::string(SDL_GetError());
  
    // Create a renderer from the window. We'll use this for drawing all our stuff.
    // (NOTE this doesn't have the VSYNC flag. 
    //  It'd cause HEAVY flickering, so we'll do our own vsync.)
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if(renderer == NULL)
      throw "Can't create renderer: " + std::string(SDL_GetError());
}

SDLWidget::~SDLWidget(){
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
}

//void SDLWidget::SDLRepaint() {
//  SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
//  SDL_RenderClear(renderer);
//  Update();
//  SDL_RenderPresent(renderer);
//}

void SDLWidget::resizeEvent(QResizeEvent*) {
  int x = static_cast<int>(QWidget::width());
  int y = static_cast<int>(QWidget::height());
  OnResize(x, y);
}

void SDLWidget::showEvent(QShowEvent*) {
  Init();
  /* frameTimer will send signal timeout() every 60th of a second, connect to "repaint" */
//  connect(&frameTimer, &QTimer::timeout, this, &SDLWidget::SDLRepaint);
//  frameTimer.setInterval(40);
//  frameTimer.start();
}

/* Override default system paint engine to prevent errors. */
QPaintEngine* SDLWidget::paintEngine() const {
  return reinterpret_cast<QPaintEngine*>(0);
}
