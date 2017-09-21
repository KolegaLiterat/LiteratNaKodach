//pliki
#include "gameElements.h"
//biblioteki

void gameElements::init_game()
{
    WINDOW *windows[2]; //1 == zewnętrzne; 0 == wewnętrzne;
    int infinity = 1;

    gameElements gamerun;

    initscr();
    cbreak();

    refresh();

    windows[0] = windowsControl::create_new_window(80, 20, 0, 0, 1);
    windows[1] = windowsControl::create_new_window(80 - 2, 20 - 2, 1, 1, 0);

    wrefresh(windows[0]);
    wrefresh(windows[1]);

    while (infinity == 1) {
        gamerun.game_loop(windows[0], windows[1]);
    }

    getch();
    endwin();
}
void gameElements::game_loop(WINDOW *outside, WINDOW *gamewindow)
{
    gameElements::input();
    gameElements::update();
    gameElements::render(gamewindow);
}
void gameElements::input()
{

}
void gameElements::update()
{

}
void gameElements::render(WINDOW *gamewindow)
{
    mvwprintw(gamewindow, 15, 20, "%c", gameElements::actor);
    wrefresh(gamewindow);
}
