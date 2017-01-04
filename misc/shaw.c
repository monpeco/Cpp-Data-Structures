#include <stdio.h>
#include <stdlib.h>
//#include <SDL2/SDL.h>
#include "sdl_logger.h"

static const int SCREEN_WIDTH  = 640;
static const int SCREEN_HEIGHT = 480;

int main (int argc, char** argv) {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        LogError("Error when trying to initialize SDL! (SDL_Init)");
        return 1;
    }
    
    // [...]
    
    return 0;
}