#include "playerwindow.h"
#include <SDL2/SDL.h>
void playerwindow::Init(){
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderPresent(renderer);
}

//void playerwindow::Update() {
//    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
//    SDL_RenderFillRect(renderer, new SDL_Rect{0,0,300,200} );
//}

void playerwindow::OnResize(int, int) {}
