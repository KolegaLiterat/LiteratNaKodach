#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;

class Player
{
    public:

    //store player input
    string input = "empty";
    string correctCharacters = "WSADI"; //W -> up ; S -> down; D -> right; A -> left; I -> start/stop;
    /* Controls states:
        W -> up (1)
        S -> down (2)
        D -> right (3)
        A -> left (4)
        I -> start/stop (5)
    */
    //get and test player input
    void get_input();
    bool test_input();
    //move robot on board
    void player_move();

    private:

    int set_state(string character);
};
#endif