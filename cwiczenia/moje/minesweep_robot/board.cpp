#include <cstdlib>
#include <iostream>
#include "board.h"

using namespace std;

//public
void Board::show_board()
{   
    int x, y;
    int *board;

    cout << "Podaj szerokosc planszy:\n";
    cin >> x;
    cout << "Podaj wysokosc planszy:\n";
    cin >> y;

    check_board(x);
    check_board(y);
}
//private
int *Board::create_board(int width, int height)
{

}
bool Board::check_board(int value)
{
    bool verified = true;

    if (value > 10 || value < 3) {
        cout << "Podana zostaja bledna wartosc! Wykorzystana zostanie domyslna!\n";
        verified = false;
    }

    return verified;
}