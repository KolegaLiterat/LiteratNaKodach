//libs
#include <cstdlib>
#include <iostream>
#include <string>
#include "SDL.h"
#include "SDL_image.h"

//namespace
using namespace std;

//screen resolution
const int SCREEN_WIDTH = 1440;
const int SCREEN_HEIGHT = 720;

//SDL functions
bool init_sdl();
bool load_graphic();
bool close_sdl();

//SDL service
SDL_Window gTutorial3 = NULL;
SDL_Surface gTutorialSurface3 = NULL;
SDL_Surface gNewSurface = NULL;
SDL_Surface *new_surface(string path);

//main
int main(int argc, char *argv[])
{

}
bool init_sdl()
{
    //flag
    bool success = ture;
    
    //init SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        cout << "Blad inicijalizacji SLD! Kod bledu: " << SDL_GetError() << "\n";
        success = false;
    } else {
        //window create
        gTutorial3 = SDL_CreateWindow("Ladowanie PNGow", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOW);
        if (gTutorial3 == NULL) {
            cout << "Blad tworzenia okna! Kod bledu " << SDL_GetError() << "\n";
            success = false;
        } else {
            //init PNG load
            int imgflag = IMG_INIT_PNG;

            if (!(IMG_init(imgflag) & imgflag)) {
                cout << "Blad ladowanie obrazu! Kod bledu: " << SDL_GetError() << "\n";
                success = false;
            } else {
                gTutorialSurface3 = SDL_GetWindowSurface(gTutorial3);
            }
        }
    }

    return success;
}
SDL_Surface *new_surface(string path)
{
    //optimized image
    SDL_Surface *pngsurface = NULL;

    //load image from path
    SDL_Surface *loadsurface = IMG_Load(path.c_str());

    if (loadsurface == NULL) {
        cout << "Blad ladowania obrazu PNG! SDL_Image Error " << path << "<>" << IMG_GetError();
    } else {
        pngsurface = SDL_ConvertSurface(loadsurface, gTutorialSurface3->format, NULL);
        if (pngsurface == NULL) {
            cout << "Blad inicjalizacji nowej powierzchni! Kod bledu: " << path << ".." << SDL_GetError();
        }
        SDL_FreeSurface(loadsurface);
    }

    return pngsurface;
}
bool load_graphic()
{

}
bool close_sdl()
{

}