#include <cstdlib>
#include <iostream>
#include <string>
#include <SDL.h>
#include <SDL_image.h>
#include "Ltexture.h"

using namespace std;

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

bool sdl_init();
bool load_graphic();
void sdl_close();

SDL_Window *gTutorial5 = NULL;
SDL_Renderer *gRenderTutorial = NULL;
LTexture gFrontTexture;
LTexture gBackTexutre;

int main(int argc, char *argv[])
{
    bool quit = false;
    SDL_Event event;

    if (!sdl_init()) {
        cout << "Blad inicjalziacji SDL! BLAD: " << SDL_GetError() << "\n";
    } else {
        if (!load_graphic()) {
            cout << "Blad inicjalizacji obslug grafiki! BLAD: " << SDL_GetError() << "\n";
        } else {
            while (!quit) {
                while (SDL_PoolEvent(&event) != 0) {
                    if (event.type == SDL_QUIT) {
                        quit = true;
                    } 
                }
                
                SDL_SetRenderDrawColor(gRenderTutorial, 0xFF, 0xFF, 0xFF, 0xFF);
                SDL_RenderClear(gRender);
                
                gBackTexutre.render(0, 0);
                gFrontTexture.render(0, 0);

                SDL_RenderPresent(gRenderTutorial);
            }
        }
    }

    sdl_close();
}
bool sdl_init()
{
    bool success = true;

    if (SDL_Init(SDL_Init_Video) < 0) {
        cout << "Blad inicjalizacji SDL! BLAD: " << SDL_GetError() << "\n";
        success = false;
    } else {
        gTutorial5 = SDL_CreateWindow("Rendery 2!", SDL_WINDOWPOS_UNDEFINDED, SDL_WINDOWPOS_UNDEFINDED, SCREEN_WIDTH, SCREEN_WIDTH, SDL_WINDOW_SHOWN);

        if (gTutorial5 == NULL) {
            cout << "Blad inicjalizacji okna! BLAD: " << SDL_GetError() << "\n";
            success = false;
        } else {
            gRenderTutorial = SDL_CreateRender(gTutorial5, -1, SDL_RENDERER_ACCELERATED);

            if (gRenderTutorial == NULL) {
                cout << "Blad inicjalizacji rendera! BLAD: " << SDL_GetError() << "\n";
                success = false;
            } else {
                int imgFlags = IMG_INIT_PNG;

                SDL_RenderDrawColor(gRenderTutorial, 0xFF, 0xFF, 0xFF, 0xFF);

                if (!(IMG_Init(imgFlags) &imgFlags)) {
                    cout << "Blad inicjalizacji obslugi tekstur! BLAD: " << SDL_GetError() << "\n";
                    success = false;
                }
            }
        }
    }

    return success;
}
bool load_graphic()
{
    bool success = true;

    if (!gFrontTexture.load_file(TODO: PATH)) {
        cout << "Blad ladowania pierwszej tekstury!\n";
        success = false;
    }

    if (!gBackTexutre.load_file(TODO: PATH)) {
        cout << "Blad ladowania tla!a\n";
        success = false;
    }

    return success;
}
void sdl_close()
{
    gFrontTexture.free();
    gBackTexutre.free();

    SDL_DestroyRenderer(gRenderTutorial);
    gRenderTutorial = NULL;
    SDL_DestroyWindow(gTutorial5);
    gTutorial5 = NULL;

    IMG_Quit();
    SDL_Quit();
}