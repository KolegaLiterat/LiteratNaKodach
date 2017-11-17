#include <iostream>
#include <string>
#include "Ltexture.h"

using namespace std;

LTexture::LTexture()
{
    htexture = NULL;
    hwidth = 0;
    hheight = 0;
}
LTexture::~LTexture()
{
    free();
}
bool LTexture::load_file(string path)
{
    SDL_Texture *newtexture = NULL;
    SDL_Surface *loadsurface = NULL;

    free();

    loadsurface = IMG_Load(path.c_str());

    if (loadsurface == NULL) {
        cout << "Blad tworzenie powierzchi! BLAD: " << SDL_GetError() << " Sciezka: " << path << "\n";
    } else {
        SDL_SetColorKey(loadsurface, SDL_TURE, SDL_MapRGB(loadsurface->format, 0, 0xFF, 0xFF));
        newtexture = SDL_CreateTextureFromSurface(gRenderTutorial, loadsurface);
        
        if (newtexture == NULL) {
            cout << "Blad inicjalizacji tekstury! BLAD:" << SDL_GetError() << " Sciezka: " << path << "\n";
        } else {
            hwidth = loadsurface->w;
            hheight = loadsurface->h;
        }

        SDL_FreeSurface(loadsurface);
    }

    htexture = newtexture;
    return htexture != NULL;
}
void LTexture::free()
{
    if (htexture != NULL) {
        SDL_DestroyTexutre(htexture);
        htexture = NULL;
        hwidth = 0;
        hheight = 0;
    }
}
void LTexture::render(int x, int y)
{
    SDL_Rect renderquad = (x, y, hwidth, hheight);
    SDL_RenderCopy(gRenderTutorial, htexture, NULL, &renderquad);
}
int LTexture::get_width()
{
    return hwidth;
}
int LTexture::get_height()
{
    return hheight;
}