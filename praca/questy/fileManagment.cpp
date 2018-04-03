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
void fileManagment::save_quest_data(string *data, bool endFile)
{
    fstream file;
    int i;
<<<<<<< HEAD
    
    switch (validation) {
        case false:
            if (step < 3) {
                file.open(fileName.c_str(), ios::out | ios::app);
                file << data[0] << "|";
                file.close();
            } else {
                file.open(fileName.c_str(), ios::out | ios::app);
                file << data[0] << "|" << "\n";
                file.close();
            }
            break;
        case true:
            cout << "PUSTAWO TUTAJ...\n";
=======
    if (endFile == false) {
        file.open(fileName.c_str(), ios::out | ios::app);
        file << data[0] << ";";
        file.close();
    } else {
        file.open(fileName.c_str(), ios::out | ios::app);
        file << data[0] << "\n";
        file.close();
>>>>>>> 968fea8ecaeeb25b7cb4d132dc4b826c3801d05c
    }
}
