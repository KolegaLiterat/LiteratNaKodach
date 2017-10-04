#include <cstdlib>
#include <iostream>
#include <SDL.h>

//wymiary ekranu
const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

//inicjalizacja
bool init_sdl();

//wczytywanie plikow
bool load_graphic();

//zamykanie SDL i czyszczenie pamieci
void close_sdl();

//zmienne globalne na potrzeby tutoriala; ALE TO JEST ZLO I SMIERC I ZAGLADA
SDL_Window *gWindow = NULL;
SDL_Surface *gScreenSurface = NULL;
SDL_Surface *gFirstWindow = NULL;

int main()
{
}

bool init_sdl()
{
    //flaga
    bool success;

    //inicjalizacja SDL
    
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        cout << "SDL nie zostalo poprawnie zaladowane! BLAD: " << SDL_GetError() << "\n";
        success = false;
    } else {
        //tworzenie okna
        gWindow = SDL_CreateWindow("Pierwsze okno", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        //sprawdzenie poprawnosci okna
        if (gWindow == NULL) {
            cout << "Okno nie zostalo utworzone! BLAD: " << SDL_GetError() << "\n";
            success = false;
        } else {
            //tworzenie powierzchni dla okna
            gScreenSurface = SDL_GetWindowSurface(gWindow);
        }

        return success;
    }

}