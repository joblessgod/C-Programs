#include <stdio.h>

#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <SDL3/SDL_init.h>
#include <SDL3/SDL_render.h>

int main(int argc, char *argv[])
{
    SDL_Window *win = NULL;
    SDL_Renderer *renderer = NULL;
    SDL_Texture *bitmapTexture = NULL;
    SDL_Surface *bitmapSurface = NULL;
    int width = 320, height = 240;
    bool loopShouldStop = false;

    SDL_Init(SDL_INIT_VIDEO);

    win = SDL_CreateWindow("Hello World", width, height, 0);
    renderer = SDL_CreateRenderer(win, NULL);

    bitmapSurface = SDL_LoadBMP("img/hello.bmp");
    bitmapTexture = SDL_CreateTextureFromSurface(renderer, bitmapSurface);
    SDL_DestroySurface(bitmapSurface);

    while (!loopShouldStop)
    {
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
            case SDL_EVENT_QUIT:
                loopShouldStop = true;
                break;
            }
        }

        SDL_RenderClear(renderer);
        SDL_RenderTexture(renderer, bitmapTexture, NULL, NULL);
        SDL_RenderPresent(renderer);
    }

    SDL_DestroyTexture(bitmapTexture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(win);

    SDL_Quit;

    return 0;
}