#include <cstdlib>
#include <iostream>
#include "fileManagment.h"
#include "userService.h"

using namespace std;

int main()
{
    fileManagment file;
    userService input;

    file.create_file();

    if (input.user_action() != true) {
        cout << "PRZYGOTOWANIE BAZY DO WALIDACJI\n";
    } else {
        cout << "KONIEC PRACY! BAZA ZAPISANA W PLIKU!";
    }
}
