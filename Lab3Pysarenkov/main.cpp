#include "mainwindow.h"

#include <QApplication>
#include <SDL2/SDL.h>
int main(int argc, char *argv[])
{    
    int flags = SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_TIMER;
    //задаємо флеги для запуску сдл
    if (!SDL_getenv("SDL_AUDIO_ALSA_SET_BUFFER_SIZE"))
         SDL_setenv("SDL_AUDIO_ALSA_SET_BUFFER_SIZE","1", 1);
    if (SDL_Init (flags)) {
 //        av_log(NULL, AV_LOG_FATAL, "Could not initialize SDL - %s\n", SDL_GetError());
 //        av_log(NULL, AV_LOG_FATAL, "(Did you set the DISPLAY variable?)\n");
         exit(1);
     }
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    const int ai = a.exec();
    avformat_network_deinit();
    SDL_Quit();
    return ai;
}
