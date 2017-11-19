#include <cstdlib>
#include <iostream>
#include <string>
#include <SDL.h>
#include <SDL_image.h>

using namespace std;

class LTexture 
{
    public:
    
    
    LTexture();
    ~LTexture();
    bool load_file(string path);
    void free();
    void render(int x, int y, SDL_Rect *clip = NULL);
    int get_width();
    int get_height();

    private:

    SDL_Texture *htexture;
    int hwidth;
    int hheight;
};

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

bool sdl_init();
bool load_graphic();
void sdl_close();

SDL_Window *gTutorial5 = NULL;
SDL_Renderer *gRenderTutorial = NULL;
//LTexture gFrontTexture;
//LTexture gBackTexutre;

//sprite
SDL_Rect gSprites[4];
LTexture gSpriteSheet;

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
                while (SDL_PollEvent(&event) != 0) {
                    if (event.type == SDL_QUIT) {
                        quit = true;
                    } 
                }
                
                SDL_SetRenderDrawColor(gRenderTutorial, 0xFF, 0xFF, 0xFF, 0xFF);
                SDL_RenderClear(gRenderTutorial);
               
                gSpriteSheet.render(0, 0, &gSprites[0]);
                gSpriteSheet.render(SCREEN_WIDTH - gSprites[1].w, 0, &gSprites[1]);
                gSpriteSheet.render(0, SCREEN_HEIGHT - gSprites[2].h, &gSprites[2]);
                gSpriteSheet.render(SCREEN_WIDTH - gSprites[3].w, SCREEN_HEIGHT - gSprites[3].h, &gSprites[3]);
                //gBackTexutre.render(0, 0);
                //gFrontTexture.render(240, 190);

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
        cout << "Blad inicjalizacji SDL! BLAD: " << SDL_GetError() << "\n";
        success = false;
    } else {
        gTutorial5 = SDL_CreateWindow("Rendery 2!", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_WIDTH, SDL_WINDOW_SHOWN);

        if (gTutorial5 == NULL) {
            cout << "Blad inicjalizacji okna! BLAD: " << SDL_GetError() << "\n";
            success = false;
        } else {
            gRenderTutorial = SDL_CreateRenderer(gTutorial5, -1, SDL_RENDERER_ACCELERATED);

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

    if (!gSpriteSheet.load_file("graphic/sprites.png")) {
        cout << "Blad ladowania sprite'ow! BLAD: " << SDL_GetError() << "\n";
        success = false;
    } else {
        //gora lewo
        gSprites[0].x = 0;
        gSprites[0].y = 0;
        gSprites[0].w = 100;
        gSprites[0].h = 100;

        //gora prawo
        gSprites[1].x = 100;
        gSprites[1].y = 0;
        gSprites[1].w = 100;
        gSprites[1].h = 100;

        //dol lewo
        gSprites[2].x = 0;
        gSprites[2].y = 100;
        gSprites[2].w = 100;
        gSprites[2].h = 100;

        //dol prawo
        gSprites[3].x = 100;
        gSprites[3].y = 100;
        gSprites[3].w = 100;
        gSprites[3].h = 100;
    }

    /*if (!gFrontTexture.load_file("graphic/front.png")) {
        cout << "Blad ladowania pierwszej tekstury!\n";
        success = false;
    }

    if (!gBackTexutre.load_file("graphic/back.png")) {
        cout << "Blad ladowania tla!a\n";
        success = false;
    }*/

    return success;
}
void sdl_close()
{
    //gFrontTexture.free();
    //gBackTexutre.free();

    SDL_DestroyRenderer(gRenderTutorial);
    gRenderTutorial = NULL;
    SDL_DestroyWindow(gTutorial5);
    gTutorial5 = NULL;

    IMG_Quit();
    SDL_Quit();
}
//LTEXTURE
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
        SDL_SetColorKey(loadsurface, SDL_TRUE, SDL_MapRGB(loadsurface->format, 0, 0xFF, 0xFF));
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
        SDL_DestroyTexture(htexture);
        htexture = NULL;
        hwidth = 0;
        hheight = 0;
    }
}
void LTexture::render(int x, int y, SDL_Rect *clip)
{
    SDL_Rect renderquad = {x, y, hwidth, hheight};
    
    if (clip != NULL) {
        renderquad.w = clip->w;
        renderquad.h = clip->h;
    }
    
    SDL_RenderCopy(gRenderTutorial, htexture, clip, &renderquad);
}
int LTexture::get_width()
{
    return hwidth;
}
int LTexture::get_height()
{
    return hheight;
}