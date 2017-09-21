//pliki
#include "gameElements.h"
//biblioteki

void gameElements::init_game()
{
    WINDOW *windows[2]; //1 == zewnętrzne; 0 == wewnętrzne;

    initscr();
    cbreak();

    refresh();

    windows[0] = windowsControl::create_new_window(80, 20, 0, 0, 1);
    windows[1] = windowsControl::create_new_window(80 - 2, 20 - 2, 1, 1, 0);

    wrefresh(windows[0]);
    wrefresh(windows[1]);
    getch();
    endwin();
}
