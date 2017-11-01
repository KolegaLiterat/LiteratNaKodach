#include <cstdlib>
#include <iostream>
#include <string>
#include <SDL.h>

using namespace std;

//wymiary ekranu
const int SCREEN_WIDTH = 1440;
const int SCREEN_HEIGHT = 720;

//przypisanie indeksow dla powierzchni
enum KeySurface
{
    DEFAULT_SURFACE,    //0
    UP_SURFACE,         //1
    DOWN_SURFACE,       //2
    LEFT_SURFACE,       //3
    RIGHT_SURFACE,      //4
    SURFACE_TOTAL       //5
};

//obsluga SDL
bool init_sdl();
bool load_graphic();
void close_sdl();

//obsluga okna
SDL_Surface *new_surface(string path);
SDL_Window *gTutorial2 = NULL;
SDL_Surface *gSurfaceTutorial2 = NULL;
SDL_Surface *gKeySurface[SURFACE_TOTAL];
SDL_Surface *gSurfaceNow = NULL;

//main
int main(int argc, char *argv[])
{
    bool quit = false;
    SDL_Event events;

    if (!init_sdl()) 
        cout << "Blad inicjalizacji SDL!\n";
    } else {
        if (!load_graphic()) {
            cout << "Wczytywanie grafik się nie powiodło.\n";
        } else {
            gSurfaceNow = gKeySurface[DEFAULT_SURFACE];
            while (!quit) {
                while (SDL_PollEvent(&events) != 0) {
                    if (events.type == SDL_QUIT) {
                        quit = true;
                    } else if (events.type = SDL_KEYDOWN) {
                        switch (events.key.keysym.sym) {
                            case SDLK_UP:
                            gSurfaceNow = gKeySurface[UP_SURFACE];
                            break;

                            case SDLK_DOWN:
                            gSurfaceNow = gKeySurface[DOWN_SURFACE];
                            break;

                            case SDLK_LEFT:
                            gSurfaceNow = gKeySurface[LEFT_SURFACE];
                            break;

                            case SDLK_RIGHT:
                            gSurfaceNow = gKeySurface[RIGHT_SURFACE];
                            break;

                            default:
                            gSurfaceNow = gKeySurface[DEFAULT_SURFACE];
                            break;
                        }

                        SDL_BlitSurface(gSurfaceNow, NULL, gSurfaceTutorial2, NULL);
                        SDL_UpdateWindowSurface(gTutorial2);
                    }
                }
            }
        }
    }

    close_sdl();
}

bool init_sdl()
{
    bool success = true;

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        cout << "SDL nie zostalo poprawnie zaladowane! Blad: " << SDL_GetError() << "\n";
        success = false;
    } else {
        gTutorial2 = SDL_CreateWindow("Tutorial 2", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

        if (gTutorial2 == NULL) {
            cout << "Okno nie zostalo poprawnie utworzne! Blad: " << SDL_GetError() << "\n";
            success = false;
        } else {
            gSurfaceTutorial2 = SDL_GetWindowSurface(gTutorial2);
        }

        return success;
    }
}
bool load_graphic()
{
    bool success = true;

    gKeySurface[DEFAULT_SURFACE] = new_surface("graphic/StartScreen.bmp");

    if (gKeySurface[DEFAULT_SURFACE] == NULL) {
        cout << "Blad inicjalizacji grafiki! DEFAULT_SURFACE";
        success = false;
    }

    gKeySurface[UP_SURFACE] = new_surface("graphic/bitmap_2.bmp");

    if (gKeySurface[UP_SURFACE] == NULL) {
        cout << "Blad inicjalizacji grafiki! UP_SURFACE";
        success = false;
    }

    gKeySurface[DOWN_SURFACE] = new_surface("graphic/bitmap_3.bmp");

    if (gKeySurface[DOWN_SURFACE] == NULL) {
        cout << "Blad inicjalizacji grafiki! DOWN_SURFACE";
        success = false;
    }

    gKeySurface[RIGHT_SURFACE] = new_surface("graphic/bitmap_4.bmp");

    if (gKeySurface[RIGHT_SURFACE] == NULL) {
        cout << "Blad inicjalizacji grafiki! RIGHT_SURFACE";
        success = false;
    }

    gKeySurface[LEFT_SURFACE] = new_surface("graphic/bitmap_1.bmp");

    if (gKeySurface == NULL) {
        cout << "Blad inicjalizacji grafiki! LEFT_SURFACE";
        success = false;
    }

    return success;
}
void close_sdl()
{
    int i;

    for (i = 0; i < SURFACE_TOTAL; ++i) {
        SDL_FreeSurface(gKeySurface[i]);
        gKeySurface[i] = NULL;
    }

    SDL_DestroyWindow(gTutorial2);
    gTutorial2 = NULL;

    SDL_Quit();
}
SDL_Surface *new_surface(string path)
{
    SDL_Surface *getnewsurface = SDL_LoadBMP(path.c_str());

    if (getnewsurface == NULL) {
        cout << "Blad ladowania grafiki: " << path.c_str() << "\n KOD BLEDU: " << SDL_GetError() << "\n";
    }

    return getnewsurface;
}
