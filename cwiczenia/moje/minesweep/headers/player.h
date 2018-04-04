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

    //get player input
    void get_input();
    bool test_input();
};
#endif