#include <cstdlib>
#include <iostream>
#include <string>
#include <SDL.h>
#include <SDL_image.h>

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

}