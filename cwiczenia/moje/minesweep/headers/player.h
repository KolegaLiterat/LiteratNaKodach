#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
    public:

    //store player input
    std::string input = "empty";
    std::string correctCharacters = "WSADI"; //W -> up ; S -> down; D -> right; A -> left; I -> start/stop;
    /* Controls states:
        W -> up (1)
        S -> down (2)
        D -> right (3)
        A -> left (4)
        I -> start/stop (5)
    */
    //start check
    bool isPawnOn = false;
    bool isPawnAlive = true;
    bool isPawnOnEnd = false;
    
    void get_input();
    int set_state(int &arrayIndex);

    private:

    bool test_input();
};
#endif