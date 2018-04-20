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
                Board::board_array[i][j] = Board::board_elements[2];
            } else if (i == 1 && j == 0 || i == 6 && j == 10) {
                Board::board_array[i][j] = Board::board_elements[2];
            } else if (i > 1 && i < 6 && j == 0 || i > 1 && i < 6 && j == 10) {
                Board::board_array[i][j] = Board::board_elements[2];
            } else if (i == 2 && j == 7 || i == 4 && j == 5 || i == 4 && j == 7) {
                Board::board_array[i][j] = Board::board_elements[1];
            } else {
                Board::board_array[i][j] = Board::board_elements[0];
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

    playerPawnY = find_coordinates('Y', Board::pawn);
    playerPawnX = find_coordinates('X', Board::pawn);

    if (Board::check_movement(playerPawnY, playerPawnX, moveValue) == true) {
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
        Board::board_array[playerPawnY][playerPawnX] = Board::board_elements[0];
        //show updated board
        Board::show_board();
    } else {
        cout << "Ruch niemozliwy! Koniec gry!";
        exit(0);
    }
}
//private
int Board::find_coordinates(char axis, char &element)
{
    int i, j, valueY = 0, valueX = 0;

    if (player == true) {
        for (i = 0; i < Y; i++) {
            for (j = 0; j < X; j++) {
                if (Board::board_array[i][j] == element) {
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
bool Board::check_movement(int &playerPawnY, int &playerPawnX, int &moveValue)
{
    bool isMoveAvailabe = true;

    switch (moveValue) {
        case 1:
            if (Board::board_array[playerPawnY - 1][playerPawnX] != Board::board_elements[0]) {
                isMoveAvailabe = false;
            }
            break;
        case 2:
            if (Board::board_array[playerPawnY + 1][playerPawnX] != Board::board_elements[0]) {
                isMoveAvailabe = false;
            }
            break;
        case 3:
            if (Board::board_array[playerPawnY][playerPawnX + 1] != Board::board_elements[0] || playerPawnX > 11) {
                isMoveAvailabe = false;
            }
            break;
        case 4:
            if (Board::board_array[playerPawnY][playerPawnX - 1] != Board::board_elements[0] || playerPawnX < 0) {
                isMoveAvailabe = false;
            }
            break;
        default:
            break;
    }

    return isMoveAvailabe;
}