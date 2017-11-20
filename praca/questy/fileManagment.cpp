#include <fstream>
#include <cstdlib>
#include <iostream>
#include <string>
#include "fileManagment.h"

using namespace std;

void fileManagment::create_file()
{
    fstream file;
    bool success = false;

    while (!success) {
        file.open(fileName.c_str(), ios::in);
        
        if (!file) {
            cout << "Brak pliku z danymi! Plik zostanie utworzony!\n";

            file.clear(file.rdstate() & ios::failbit);
            file.open(fileName.c_str(), ios::out);

            success = true;
        } else {
            cout << "Plik z danymi istnieje!";
            success = true;
        }
    }
}
void fileManagment::save_quest_data(string *data, int step, bool validation)
{
    fstream file;
    int i;
    
    switch (validation) {
        case false:
            if (step < 3) {
                file.open(fileName.c_str(), ios::out | ios::app);
                file << data[0] << sep;
                file.close();
            } else {
                file.open(fileName.c_str(), ios::out | ios::app);
                file << data[0] << sep << "\n";
                file.close();
            }
            break;
        case true:
            cout << "PUSTAWO TUTAJ...\n";
    }
}
