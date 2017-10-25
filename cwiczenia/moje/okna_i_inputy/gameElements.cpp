//pliki
#include "gameElements.h"
//biblioteki
#include "gainput/gainput.h"

//konfiguracja inputów
enum Button
{
    ButtonLeft;
    ButtonRight;
    ButtonUp;
    ButtonDown;
    ButtonEsc;
}

gainput::InputManager manager;
const gainput::DeviceId keyboardId = manager.CreateDevice<gainput::InputDeviceKeyboard>();
gainput::InputMap map(manager);
map.MapBool(ButtonLeft, keyboardId, gainput::KeyLeft);
map.MapBool(ButtonRight, keyboardId, gainput::KeyRight);
map.MapBool(ButtonUp, keyboardId, gainput::KeyUp);
map.MapBool(ButtonDown, keyboardId, gainput::KeyDown);
map.MapBool(ButtonEsc, keyboardId, gainput::KeyEscapce);
//koniec konfiguracji



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

    mvwprintw(windows[0], gameElements::movey, gameElements::movex, "%c", gameElements::actor);

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
    int state;

    state = gameElements::input();
    gameElements::update(state);
    gameElements::render(gamewindow);
}
int gameElements::input()
{
    manager.Update();

    if (map.GetBoolWasDown(ButtonUp)) {
        return 1;
    } else {
        return 0;
    }

}
void gameElements::update(int &state)
{
}
void gameElements::render(WINDOW *gamewindow)
{
}
