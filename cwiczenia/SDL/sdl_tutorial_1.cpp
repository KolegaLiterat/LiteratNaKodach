#include <cstdlib>
#include <iostream>
#include <SDL.h>
#include <SDL.h>

using namespace std;

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

int main(int argc, char *argv[])
{
    if (!init_sdl()) {
        cout << "Blad inicjalizacji SDL!\n";
    } else {
        if (!load_graphic()) {
            cout << "Blad wczytywania grafiki!\n";
        } else {
            //wrzucenie obrazka na ekran
            SDL_BlitSurface(gFirstWindow, NULL, gScreenSurface, NULL);
            //aktualizacja okna
            SDL_UpdateWindowSurface(gWindow);
            //czekaj 10 sekund
            SDL_Delay(10000);
        }
    }

    //czyszczenie pamieci
    close_sdl();
}

bool init_sdl()
{
    //flaga
    bool success = true;

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
bool load_graphic()
{
    //flaga
    bool success = true;

    //wczytanie obrazka
    gFirstWindow = SDL_LoadBMP("graphic/StartScreen.bmp");

    if(gFirstWindow == NULL) {
        cout << "Obrazek nie został poprawnie wczytany! BLAD: " << SDL_GetError() << "\n";
        success = false;
    }

    return success;
}
void close_sdl()
{
    //funkcja czyszczaca pamiec
    SDL_FreeSurface(gFirstWindow);
    gFirstWindow = NULL;
    SDL_DestroyWindow(gWindow);
    gWindow = NULL;

    //Wylaczanie SDL
    SDL_Quit();
}
