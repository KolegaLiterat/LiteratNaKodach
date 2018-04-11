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
    int i = -1, j = -1, characterCount = 0;
    
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
int Player::set_state()
{
    int i = -1, x = -1, y = -1, state = -1;

    for (i = 0; i < Player::input.length(); i++) {
        if (Player::input[i] == 'W') {
            state = 1;
            break;
        } else if (Player::input[i] == 'S') {
            state = 2;
            break;
        } else if (Player::input[i] == 'D') {
            state = 3;
            break;
        } else if (Player::input[i] == 'A') {
            state = 4;
            break;
        } else if (Player::input[i] == 'I') {
            if (Player::isPawnOn == false) {
                Player::isPawnOn = true;
            } else {
                Player::isPawnOn = false;
            }
        }
    }

    return state;
}