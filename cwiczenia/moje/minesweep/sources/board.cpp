//header
#include "..\headers\board.h"
//libs
#include <cstdlib>
#include <iostream>

using namespace std;

//public
void Board::create_board()
{   
    int i, j;

    for (i = 0; i < Y; i++) {
        for (j = 0; j < X; j++) {
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
    //set meta position
    Board::board_array[1][10] = Board::meta;
}

void Board::show_board()
{
    int i, j;

    for (i = 0; i < Y; i++) {
        for (j = 0; j < X; j++) {
            cout << Board::board_array[i][j];
        }

        cout << "\n";
    }
}
void Board::update_board(int &moveValue)
{
    int playerPawnY, playerPawnX;

    playerPawnY = find_coordinates('Y', true);
    playerPawnX = find_coordinates('X', true);

    switch (moveValue) {
        case 1:
            Board::board_array[playerPawnY - 1][playerPawnX] = pawn;
            break;
        case 2:
            Board::board_array[playerPawnY + 1][playerPawnX] = pawn;
            break;
        case 3:
            Board::board_array[playerPawnY][playerPawnX + 1] = pawn;
            break;
        case 4:
            Board::board_array[playerPawnY][playerPawnX - 1] = pawn;
            break;
        default:
            break;
    }
    
    //delete previous player pawn position
    Board::board_array[playerPawnY][playerPawnX] = empty;

    //show updated board
    Board::show_board();
}
//private
int Board::find_coordinates(char axis, bool player)
{
    int i, j, valueY = 0, valueX = 0;

    if (player == true) {
        for (i = 0; i < Y; i++) {
            for (j = 0; j < X; j++) {
                if (Board::board_array[i][j] == Board::pawn) {
                    valueY = i;
                    valueX = j;
                    break;
                }
            }
        }
    } else {
        for (i = 0; i < Y; i++) {
            for (j = 0; j < X; j++) {
                if (Board::board_array[i][j] == Board::meta) {
                    valueY = i;
                    valueX = j;
                    break;
                }
            }
        }
    }

    if (axis == 'Y') {
        return valueY;
    } else if (axis == 'X') {
        return valueX;
    } 
}