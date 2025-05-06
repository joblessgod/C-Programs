#include <SDL3/SDL.h>
#include <math.h> // for sin()
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main(int argc, char *argv[])
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        SDL_Log("Couldn't initialize SDL: %s", SDL_GetError());
        return 1;
    }

    SDL_Window *window = SDL_CreateWindow("SDL Color Fade", 640, 480, 0);
    if (!window)
    {
        SDL_Log("Couldn't create window: %s", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    SDL_Renderer *renderer = SDL_CreateRenderer(window, NULL);
    if (!renderer)
    {
        SDL_Log("Couldn't create renderer: %s", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    int running = 1;
    SDL_Event event;

    while (running)
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_EVENT_QUIT)
            {
                running = 0;
            }
        }

        double now = SDL_GetTicks() / 1000.0;
        float red = 0.5f + 0.5f * (float)sin(now);
        float green = 0.5f + 0.5f * (float)sin(now + SDL_PI_D * 2 / 3);
        float blue = 0.5f + 0.5f * (float)sin(now + SDL_PI_D * 4 / 3);

        SDL_SetRenderDrawColorFloat(renderer, red, green, blue, 1.0f);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);

        SDL_Delay(16); // ~60 FPS
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
