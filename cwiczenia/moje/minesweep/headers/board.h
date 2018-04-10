#ifndef BOARD_H
#define BOARD_H

class Board
{
    public:

    //2D board array
    char board_array[8][11];
    //board elements
    char empty = '0', mine = '*', wall = '+';
    //player pawn
    char pawn = 'R';

    void create_board();
    void show_board();

    private:

    int find_player_pawn(char axis);
};
#endif