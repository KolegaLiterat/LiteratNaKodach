//header
#include "..\headers\player.h"
//lib
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void Player::get_input()
{
    cout << "Sterowanie robotem:\n[W] -> Do gory\n[S] -> Na dol\n[A] -> W lewo\n[D] -> W prawo\n[I] -> Zaplon\n"
        << "[S] -> STOP\nZasady:\nNalezy przeprowadzic robota [R] z punktu startowego do mety [M]\n";
    cout << "Opisz ściezke!\n";
    getline(cin, Player::input);
}