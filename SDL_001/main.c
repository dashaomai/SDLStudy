#include <SDL2/SDL.h>
#include <stdio.h>

int main(int argc, const char *argv[])
{
  SDL_Window* window = NULL;

  SDL_Surface* screenSurface = NULL;

  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    printf("SDL could not initialize! SDL_Errors: %s\n", SDL_GetError());
  } else {
    window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);

    if (window == NULL) {
      printf("Window could not be crated! SDL_Errors: %s\n", SDL_GetError());
    } else {
      screenSurface = SDL_GetWindowSurface(window);

      SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xAA, 0xAA, 0xAA));

      SDL_UpdateWindowSurface( window );

      SDL_Delay(2000);
    }
  }

  SDL_DestroyWindow(window);

  SDL_Quit();

  return 0;
}
