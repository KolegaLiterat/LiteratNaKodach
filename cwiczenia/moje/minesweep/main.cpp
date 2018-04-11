//headers
#include "headers/board.h"
#include "headers/player.h"
//libs
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    Board board;
    Player pawn;

    int turn = 1; 

    //board.create_board();
    //board.show_board();
    
    pawn.get_input();

    while (turn <= pawn.input.length()) {
        cout << "Tura" << turn << "\n";
        turn++;
    }
}
