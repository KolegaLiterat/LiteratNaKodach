//pliki
#include "achiv_data.h"
#include "file.h"
//biblioteki
#include <iostream>

int main()
{
    File achievment;
    int reapeat, i;

    cout << "Ile tych acziwkow?\n";
    cin >> reapeat;

    achievment.generate_filename();

    for (i = 0; i < reapeat; i++) {
        achievment.generate_file();
    }

    cout << "KONIEC PRACY! PLIK ZOSTAL WYGENEROWANY!\n";
}