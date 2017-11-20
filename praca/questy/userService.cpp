#include <fstream>
#include <cstdlib>
#include <iostream>
#include <string>
#include "userService.h"

using namespace std;

void userService::quest_entry(int step)
{
    int i;

    getline(cin, temp);

    if (step < 0) {
        cout << "Podaj dane questa:\n";
        for (i = 0; i < 4; i++) {
            cout << texts[i];
            getline(cin, questData[i]);
        }
    }
}
string userService::quest_validation(int step)
{

}