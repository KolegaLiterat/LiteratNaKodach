//libs
#include <cstdlib>
#include <iostream>
#include <string>
#include <SDL.h>
#include <SDL_image.h>

//namespace
using namespace std;

//screen resolution
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

//SDL init and close
bool sdl_init();
bool load_graphic();
void sdl_close();

//SDL service
SDL_Texture *load_texture(string path);
SDL_Window *gTutorial4 = NULL;
SDL_Renderer *gRenderTutorial = NULL;
SDL_Texture *gTextureTutorial = NULL;

int main(int argc, char *argv[])
{
    bool quit = false;
    SDL_Event click;

    if (!sdl_init()) {
        cout << "Blad inicjalizacji SDL! Blad: " << SDL_GetError() << "\n";
    } else {
        if (!load_graphic()) {
            cout << "Blad inicjalizacji grafiki! Blad: " << SDL_GetError() << "\n";
        } else {
            while (!quit) {
                while (SDL_PollEvent(&click) != 0) {
                    if (click.type == SDL_QUIT) {
                        quit = true;
                    }
                }
                SDL_RenderClear(gRenderTutorial);

                SDL_Rect leftviewport;
                leftviewport.x = 0;
                leftviewport.y = 0;
                leftviewport.w = SCREEN_WIDTH / 2;
                leftviewport.h = SCREEN_HEIGHT;
                SDL_RenderSetViewport(gRenderTutorial, &leftviewport);
                SDL_RenderCopy(gRenderTutorial, gTextureTutorial, NULL, NULL);

                SDL_Rect rightviewport;
                rightviewport.x = SCREEN_WIDTH / 2;
                rightviewport.y = 0;
                rightviewport.w = SCREEN_WIDTH / 2;
                rightviewport.h = SCREEN_HEIGHT;
                SDL_RenderSetViewport(gRenderTutorial, &rightviewport);
                SDL_RenderCopy(gRenderTutorial, gTextureTutorial, NULL, NULL);

                SDL_RenderPresent(gRenderTutorial);
            }
        }
    }
    sdl_close();
}
bool sdl_init()
{
    bool success = true;

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        cout << "Blad inicjalizacji SDL! Blad:" << SDL_GetError() << "\n";
        success = false;
    } else {
        gTutorial4 = SDL_CreateWindow("Rendery!", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_WIDTH, SDL_WINDOW_SHOWN);

        if (gTutorial4 == NULL) {
            cout << "Blad inicjalizacji okna! BLAD: " << SDL_GetError() << "\n";
            success = false;
        } else {
            gRenderTutorial = SDL_CreateRenderer(gTutorial4, -1, SDL_RENDERER_ACCELERATED);

            if (gRenderTutorial == NULL) {
                cout << "Blad inicjalizacji rendera! BLAD: " << SDL_GetError() << "\n";
                success = false;
            } else {
                int imgFlags = IMG_INIT_PNG;

                SDL_SetRenderDrawColor(gRenderTutorial, 0xFF, 0xFF, 0xFF, 0xFF);

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

    gTextureTutorial = load_texture("graphic/LoseScreen.png");

    if (gTextureTutorial == NULL) {
        cout << "Blad wczytywania tekstury! BLAD: " << SDL_GetError() << "\n";
        success = false;
    }

    return success;
}
void sdl_close()
{
    SDL_DestroyTexture(gTextureTutorial);
    gTextureTutorial = NULL;

    SDL_DestroyRenderer(gRenderTutorial);
    gRenderTutorial = NULL;

    SDL_DestroyWindow(gTutorial4);
    gTutorial4 = NULL;

    IMG_Quit();
    SDL_Quit();
}
SDL_Texture *load_texture(string path)
{
    SDL_Texture *newtexture = NULL;
    SDL_Surface *loadedsurface = NULL;

    loadedsurface = IMG_Load(path.c_str());

    if (loadedsurface == NULL) {
        cout << "Blad inicjalizacji powierzchni! BLAD: " << SDL_GetError() << " " << "Sciezka: " << path << "\n";
    } else {
        newtexture = SDL_CreateTextureFromSurface(gRenderTutorial, loadedsurface);

        if (newtexture == NULL) {
            cout << "Blad inicjalizacji tekstry! BLAD: " << SDL_GetError() << " " << "Sciezka: " << path << "\n";
        }

        SDL_FreeSurface(loadedsurface);
    }

    return newtexture;
}

