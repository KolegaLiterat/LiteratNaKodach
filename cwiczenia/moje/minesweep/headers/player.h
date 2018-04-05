#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;

class Player
{
    public:

    //store player input
    string input = "empty";
    string correctCharacters = "WSADI";

    //get and test player input
    void get_input();
    bool test_input();
    //move robot on board
    void player_move();

    private:

    int set_state(string character);
};
#endif