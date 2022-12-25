#ifndef SDLWIDGET_H
#define SDLWIDGET_H

#include <QWidget>
#include <SDL2/SDL.h>
class SDLWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SDLWidget(QWidget *parent = nullptr);
    ~SDLWidget();
    SDL_Window* window;
    SDL_Renderer* renderer;
//public slots:
//    void SDLRepaint();    
private:
    virtual void Init() = 0;
//    virtual void Update() = 0;    
    virtual void OnResize(int w, int h) = 0;

    void resizeEvent(QResizeEvent* event) override;
    void showEvent(QShowEvent*) override;
    QPaintEngine* paintEngine() const override;
};

#endif // SDLWIDGET_H
