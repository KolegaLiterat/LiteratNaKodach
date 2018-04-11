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
//robot movement
void Player::player_move()
{
    int i = -1, x = -1, y = -1, state = 0;

    for (i = 0; i < Player::input.length(); i++) {
        
        state = set_state(&Player::input[i]);

        if (state == 0) {
            cout << "Blad rozpoznawania danych";
        } else if (state == 1 || state == 3) {
            cout << "+ 1";
        } else if (state == 2 || state == 4) {
            cout << "-1";
        } else if (state == 5) {
            cout << "Start/stop";
        }
		cout << "\n";
    }
}
//setting states based on input
int Player::set_state(string character)
{
    int setState = -1;

    if (character[0] == 'W') {
        setState = 1;
    } else if (character[0] == 'S') {
        setState = 2;
    } else if (character[0] == 'D') {
        setState = 3;
    } else if (character[0] == 'A') {
        setState = 4;
    } else if (character[0] == 'I') {
        setState = 5;
    }

    return setState;
}
