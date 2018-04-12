//header
#include "..\headers\player.h"
//lib
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

//get input & rules
void Player::get_input()
{
    cout << "Sterowanie robotem:\n[W] -> Do gory\n[S] -> Na dol\n[A] -> W lewo\n[D] -> W prawo\n[I] -> Zaplon\n"
        << "[S] -> STOP\nZasady:\nNalezy przeprowadzic robota [R] z punktu startowego do mety [M]\n";
    cout << "Opisz ściezke!\n";
    getline(cin, Player::input);
}
//test input to check characters from user
bool Player::test_input()
{   
    bool isInputCorrect = true;
    int i, j, characterCount = 0;
    
    for (i = 0; i < Player::input.length(); i++) {
        
        for (j = 0; j < Player::correctCharacters.length(); j++) {
            if (Player::input[i] != Player::correctCharacters[j]) {
                characterCount++;
            }
        }

        if (characterCount == Player::correctCharacters.length()) {
            isInputCorrect = false;
            break;
        } else {
            characterCount = 0;
        }
    }
    
    return isInputCorrect;
}
//robot movement states 
int Player::set_state(int &arrayIndex)
{
    int state = 0;
    
    if (Player::input[arrayIndex] == 'W') {
        state = 1;
    } else if (Player::input[arrayIndex] == 'S') {
        state = 2;
    } else if (Player::input[arrayIndex] == 'D') {
        state = 3;
    } else if (Player::input[arrayIndex] == 'A') {
        state = 4;
    } else if (Player::input[arrayIndex] == 'I') {
        if (Player::isPawnOn == false) {
            Player::isPawnOn = true;
        } else {
            Player::isPawnOn = false;
        }
    }

    return state;
}