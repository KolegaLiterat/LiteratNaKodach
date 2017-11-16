#ifndef LTEXTURE_H_
#define LTEXTURE_H_

#include <cstdlib>
#include <SDL.h>

using namespace std;

class LTexture 
{
    public:
    
    LTexture();
    ~LTexture();
    bool load_file(string path);
    void free();
    void render(int x, int y);
    int get_width();
    int get_height();

    private

    SDL_Texture *htexture;
    int hwidth;
    int hheight;
};
#endif