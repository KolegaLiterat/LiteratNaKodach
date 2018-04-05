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
//robot movement
void Player::player_move()
{
    int i;

    for (i = 0; i < Player::input.length(); i++) {

        switch (set_state(&Player::input[i])) {
            case 0:
                cout << "Blad rozpoznawania danych od uzytkownika!\n";
            case 1:
                cout << "UP";
                break;
            case 2:
                cout << "DOWN";
                break;
            case 3:
                cout << "RIGHT";
                break;
            case 4:
                cout << "LEFT";
                break;
            case 5:
                cout << "START/STOP";
                break;
            default:
                break;
        }
		cout << "\n";
    }
}
//setting states based on input
int Player::set_state(string character)
{
    int setState = 0;

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
