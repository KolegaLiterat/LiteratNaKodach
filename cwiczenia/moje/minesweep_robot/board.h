#ifndef BOARD_H
#define BOARD_H

class Board
{
    public:
    
    char player = '@', mine = '^', empty = ' ', border = '#', finish = 'F';
    int height = 3, width = 3;
    
    void show_board();

    private:

    int *create_board(int width, int height);
    bool check_board(int value);
};
#endif