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
    int choice;
    userService getData;

    while (!quite) {
        cout << "MENU\n"
            <<  "[1] Podaj dane questa.\n"
            <<  "[2] Weryfikacja questa.\n"
            <<  "[3] Wyswietla baze questow.\n"
            <<  "[4] Edytuj quest\n"
            <<  "[5] Wyjscie\n";
        cin >> choice;

        if (choice < 1 && choice > 5) {
            cout << "Podano zla wartosc!\n";
            user_action();
        } else {
            switch (choice) {
                case 1:
                    if (getData.quest_entry() == true) {
                        user_action();
                    }
                    break;
                case 2:
                    if (getData.quest_validation() == true) {
                        user_action();
                    }
                    //walidacja
                    break;
                case 3:
                    //wyswietlenie bazy
                    break;
                case 4:
                    break;
                    //edycja
                case 5:
                    //wyjsie
                    quite = true;
                    break;
                default:
                    break;
            }
        }
    }
    return quite;
}

bool userService::quest_entry()
{
    bool endWork = false;
    int i, choice;
    string questData[4];
    fileManagment save_data;

    getline(cin, temp);
    
    cout << "Nacisnij ENTER, aby potwierdzic gotowosc!";
    cout << "Podaj dane questa:\n";
    
    for (i = 0; i < 4; i++) {
        cout << textsQuestEntry[i];
        getline(cin, questData[i]);
    }
    
    for (i = 0; i < 4; i++) {
        if (i == 3) {
            save_data.save_quest_data(&questData[i], true);
        } else {
            save_data.save_quest_data(&questData[i], false);
        }
    }

    cout << "Dodac kolejny quest?\n"
        << "[1] TAK\n"
        << "[2] NIE\n";
    cin >> choice;

    if (choice < 1 || choice > 2) {
        cout << "Bledna wartosc! Podaj [1] lub [2]";
        cin >> choice;
    } else {
        switch (choice) {
            case 1:
                quest_entry();
                break;
            case 2:
                endWork = true;
                break;
            default:
                break;
        }
    }

    return endWork;
}
bool userService::quest_validation()
{
    bool endWork = false;
    int i, choice;
    string validationData[5];
    fileManagment save_data;

    getline(cin, temp);

    cout << "Podaj ID questa: ";
    getline(cin, validationData[4]);

    cout << "Przeprowadz weryfikacje!";

    for (i = 0; i < 4; i++) {
        cout << textsQuestValidation[i];
        cin >> validationData[i];
    }

    for (i = 0; i < 5; i++) {
        if (i == 4) {
            save_data.save_quest_data(&validationData[i], true);
        } else {
            save_data.save_quest_data(&validationData[i], false);
        }
    }

    cout << "Weryfikować kolejny quest?\n"
    << "[1] TAK\n"
    << "[2] NIE\n";
    cin >> choice;

    if (choice < 1 || choice > 2) {
        cout << "Bledna wartosc! Podaj [1] lub [2]";
        cin >> choice;
    } else {
        switch (choice) {
            case 1:
                quest_validation();
                break;
            case 2:
                endWork = true;
                break;
            default:
                break;
        }
    }

    return endWork;
}
