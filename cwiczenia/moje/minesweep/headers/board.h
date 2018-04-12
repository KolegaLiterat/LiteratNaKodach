#ifndef BOARD_H
#define BOARD_H

//default values
#define Y 8
#define X 11

class Board
{
    public:

    //2D board array
    char board_array[Y][X];
    //board elements
    char empty = '0', mine = '*', wall = '+', meta = 'M';
    //player pawn
    char pawn = 'R';

    void create_board();
    void show_board();
    void update_board(int &moveValue);

    private:

    int find_player_pawn(char axis, bool player);
};
#endif