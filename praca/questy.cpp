#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool check_elements[10][4];
    string quest_name[10], input;
    int loop_input = 1, array_index = 0, i;
    char decision;

    while (loop_input == 1) {
        cout << "Podaj nazwe questa!\n";
        cin >> quest_name[array_index];

        array_index++;

        cout << "Dodajesz kolejny quest?";
        cin >> decision;

        if (decision == 'n') {
            loop_input--;
        }
    }

    cout << "Faza testów!";
    
    while (loop_input == 1) {
        cout << "NAZWA QUESTA: " << quest_name[0] << "\n";

        for (i = 0, i < 10; i++) {
            for (j = 0; j < 4; j++) {
                switch (j) {
                    case 0:
                        cout << "Ceny itemow sprawdzone?";
                        cin << check_elements[i][j];
                        break;
                    case 1:
                        cout << "Postacie na wlascicwych mapach?";
                        cin << check_elements[i][j];
                        break;
                    case 2:
                        
                }
            }
        }
    }

    for (i = 0; i < array_index; i++) {
        cout << "Quest: " << quest_name[i] << "\n";
    }
}