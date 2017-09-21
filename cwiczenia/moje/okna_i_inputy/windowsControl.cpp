//pliki
#include "windowsControl.h"
//biblioteki


WINDOW *windowsControl::create_new_window(int width, int height, int startx, int starty, bool outside)
{
    WINDOW *newwindow;

    newwindow = newwin(height, width, starty, startx);

    wrefresh(newwindow);

    if (outside == true) {
        wborder(newwindow, '#', '#', '#', '#', '#', '#', '#', '#');
        wrefresh(newwindow);

        return newwindow;
    } else {
        //box(newwindow, 0, 0); //DEBUG
        return newwindow;
    }
}