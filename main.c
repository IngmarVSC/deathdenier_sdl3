#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <stdio.h>

int main(int argc, char **argv) {
  bool done = false;

  if (!SDL_Init(SDL_INIT_VIDEO)) {
    SDL_Log("couldn't init SDL: %s", SDL_GetError());
    return SDL_APP_FAILURE;
  }

  SDL_Window *window = SDL_CreateWindow("SDL testwindow", 640, 480, 0);
  if (!window) {
    SDL_Log("couldn't find testwindow: %s", SDL_GetError());
    SDL_Quit();
  }
  while (!done) {
    SDL_Event event;

    while (SDL_PollEvent(&event)) {
      if (event.type == SDL_EVENT_QUIT) {
        done = true;
      }
    }
  }

  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}
