//header
#include "..\headers\board.h"
//libs
#include <cstdlib>
#include <iostream>

using namespace std;

void Board::create_board()
{
    int i = 0, j = 0;

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 11; j++) {
            if (i == 0 || i == 7) {
                Board::board_array[i][j] = Board::wall;
            } else if (i == 1 && j == 0 || i == 6 && j == 10) {
                Board::board_array[i][j] = Board::wall;
            } else if (i > 1 && i < 6 && j == 0 || i > 1 && i < 6 && j == 10) {
                Board::board_array[i][j] = Board::wall;
            } else if (i == 2 && j == 7 || i == 4 && j == 5 || i == 4 && j == 7) {
                Board::board_array[i][j] = Board::mine;
            } else {
                Board::board_array[i][j] = Board::empty;
            }
        }
    }

    //set player starting position
    Board::board_array[6][0] = Board::pawn;
}

void Board::show_board()
{
    int i = 0, j = 0;

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 11; j++) {
            cout << Board::board_array[i][j];
        }

        cout << "\n";
    }
}