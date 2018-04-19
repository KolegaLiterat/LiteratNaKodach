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
    string board_elements = "0*+";
    //player pawn
    char pawn = 'R';
    //meta
    char meta = 'M';

    void create_board();
    void show_board();
    void update_board(int &moveValue);

    private:

    //used to find coordinates of player (if true) or meta (if false)
    int find_coordinates(char axis, bool player);
    bool check_movement(int &playerPawnY, int &playerPawnX, int &moveValue);
};
#endif