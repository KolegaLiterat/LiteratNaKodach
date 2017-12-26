#include <cstdlib>
#include <iostream>
#include "board.h"

using namespace std;

//public
void Board::show_board()
{
    bool test[2] = {1, 1};
    int x, y, i, j, k = 0;
    char *board;

    cout << "Podaj szerokosc planszy:\n";
    cin >> x;
    cout << "Podaj wysokosc planszy:\n";
    cin >> y;

    test[0] = check_board(x);
    test[1] = check_board(y);

    if (test[0] != 1 || test [1] != 1) {
        cout << "Podana bledna wartosc! Zostatnie wykorzystana domyslna!\n";

        x = width;
        y = height;
    }

    board = new char[x * y];
    board = create_board(x, y);

    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            cout << board[k];
            k++;
        }
        cout << "\n";
    }
}
//private
char *Board::create_board(int width, int height)
{
    int i; 
    char *new_board;

    new_board = new char[width * height];

    for (i = 0; i < width * height; i++) {
        new_board[i] = '#';
    }

    return new_board;
}
bool Board::check_board(int value)
{
    bool verified = true;

    if (value > 10 || value < 3) {
        verified = false;
    }

    return verified;
}
