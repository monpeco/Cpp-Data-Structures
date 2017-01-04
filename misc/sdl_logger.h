#ifndef SDL_LOGGER_H_
#define SDL_LOGGER_H_

#include <stdio.h>
//#include <SDL2/SDL.h>

inline void LogError(const char* message);

inline void LogError(const char* message) {
	printf("Error: %s\n\t%d\t", message, SDL_GetError());
}

#endif