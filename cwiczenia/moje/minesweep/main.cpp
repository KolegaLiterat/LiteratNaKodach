//headers
#include "headers/board.h"
#include "headers/player.h"
//libs
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    Player game;
    Board board;

    board.create_board();
    board.show_board();

    /*
    game.get_input();

    if (game.test_input() == true) {
        game.player_move();
    } else {
        cout << "Jest zle!";
    }
    */
}
