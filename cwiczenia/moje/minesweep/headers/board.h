#ifndef BOARD_H
#define BOARD_H

class Board
{
    public:

    //2D board array
    char board_array[8][11];
    //board elements
    char empty = '0', mine = '*', wall = '+';

    void create_board();
    void show_board();
};
#endif