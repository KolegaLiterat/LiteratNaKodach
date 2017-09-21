//strażnik nagłówka
#ifndef WINDOWS_CONTROL_H_
#define WINDOWS_CONTROL_H_
//biblioteki
#include "curses.h"

class windowsControl
{

    public:

    WINDOW *create_new_window(int width, int height, int startx, int starty, bool outside);
    WINDOW *refresh_window(WINDOW *name);

};
#endif
//biblioteki