//pliki
#include "gameElements.h"
#include "SDL.h"

using namespace std;

void gameElements::init_game()
{
    WINDOW *windows[2]; //1 == zewnętrzne; 0 == wewnętrzne;
    int infinity = 1;

    gameElements gamerun;

    initscr();
    SDL_Init(SDL_INIT_EVENTS);
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
    int state = 0, tick = 0;

    state = gameElements::input();
    gameElements::update(state);
    gameElements::render(gamewindow);
}
int gameElements::input()
{
    SDL_Event keyevent;
    int statechange = 0;

    while (SDL_PollEvent(&keyevent)) {
        if (keyevent.type = SDL_KEYDOWN) {
            switch (keyevent.key.keysym.sym) {
                case SDLK_UP:
                statechange++;
                if (statechange > 3) {
                    return 0;
                } else {
                    return statechange;
                }
                break;

                case SDLK_DOWN:
                statechange--;
                if (statechange < -3) {
                    return 0;
                } else {
                    return statechange;
                }
                break;

                default:
                return statechange;
                break;
            }
        }
    }
}
void gameElements::update(int &state)
{
    if (state == 1 || state == -3) {
        gameElements::movey--;
    } else if (state == 2 || state -2) {
        gameElements::movex--;
    } else if (state == 3 || state == -1) {
        gameElements::movey++;
    } else {
        gameElements::movex--;
    }
}
void gameElements::render(WINDOW *gamewindow)
{
    mvwprintw(gamewindow, gameElements::movey, gameElements::movex, "%c", gameElements::actor);
    wrefresh(gamewindow);
}
