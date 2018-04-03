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
    string correctCharacters = "WSADI";
    int i, j = 0;

    for (i = 0; i < Player::input.length(); i++) {
        if (Player::input[i] != correctCharacters[j]) {
            cout << "Bledna komenda: " << Player::input[i] << "\n";
            isInputCorrect = false;
            break;
        } else {
            if (j == correctCharacters.length()) {
                j = 0;
            } else {
                j++;
            }
        }
    }
    
    return isInputCorrect;
}
