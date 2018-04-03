//headers
#include "headers/board.h"
//libs
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    Board board;

    board.create_board();

	board.show_board();
}
