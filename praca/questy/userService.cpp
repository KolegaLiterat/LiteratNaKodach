#include <fstream>
#include <cstdlib>
#include <iostream>
#include <string>
#include "userService.h"
#include "fileManagment.h"

using namespace std;


bool userService::user_action()
{
    bool quite = false;
    char endWork = 'y';
    userService getData;

    cout << "MENU";

    while (!quite) {
        getData.quest_entry();

        cout << "Konczymy?\n[Y] = Tak\n[N] = Nie\n";
        cin >> endWork;

        if (endWork == 'y' || endWork == 'Y') {
            quite = true;
        }
    }

    return quite;
}

void userService::quest_entry(int step)
{
    int i, copy = 0;
    string questData[4];
    fileManagment save_data;

    getline(cin, temp);
    cout << "Nacisnij ENTER, aby potwierdzic gotowosc!";

    if (step < 0) {
        cout << "Podaj dane questa:\n";
        for (i = 0; i < 4; i++) {
            cout << texts[i];
            getline(cin, questData[i]);
        }
    }

    for (i = 0; i < 4; i++) {
        save_data.save_quest_data(&questData[i], copy, false);
        copy++;
    }

}
string userService::quest_validation(int step)
{

}
