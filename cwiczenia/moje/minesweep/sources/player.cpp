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
    Player getInput;

    cout << "Sterowanie robotem:\n[W] -> Do gory\n[S] -> Na dol\n[A] -> W lewo\n[D] -> W prawo\n[I] -> Zaplon\n"
        << "[S] -> STOP\nZasady:\nNalezy przeprowadzic robota [R] z punktu startowego do mety [M]\n";
    cout << "Opisz ściezke!\n";
    getline(cin, getInput.input);
}
//test input to check characters from user
bool Player::test_input()
{   
    Player stringArray;

    bool isInputCorrect = true;
    int i, j, characterCount = 0;

    for (i = 0; i < stringArray.input.length(); i++) {
        
        for (j = 0; j < stringArray.correctCharacters.length(); j++) {
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
