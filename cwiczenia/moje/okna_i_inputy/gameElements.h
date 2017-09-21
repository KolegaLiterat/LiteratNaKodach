//strażnik nagłówka
#ifndef GAME_ELEMENTS_H_
#define GAME_ELEMENTS_H_
//biblioteki
//pliki
#include "windowsControl.h"

class gameElements : public windowsControl
{
    public:
    
    char actor = 'A', empty = ' ';
    
    void init_game();
    void game_loop(WINDOW *outside, WINDOW *gamewindow);

    private:

    void input();
    void update();
    void render(WINDOW *gamewindow);

};
#endif