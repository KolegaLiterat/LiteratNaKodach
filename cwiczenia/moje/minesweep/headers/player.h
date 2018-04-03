#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;

class Player
{
    public:

    //store player input
    string input = "empty";

    //get player input
    void get_input();
};
#endif