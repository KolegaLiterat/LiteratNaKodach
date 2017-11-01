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
    int movex = 40, movey = 10, movechange;

    void init_game();
    void game_loop(WINDOW *outside, WINDOW *gamewindow);

    private:

    int input();
    void update(int &state);
    void render(WINDOW *gamewindow);

};
#endif
