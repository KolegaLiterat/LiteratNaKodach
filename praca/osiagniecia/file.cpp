//pliki
#include "achiv_data.h"
#include "file.h"
//biblioteki
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

void File::generate_file()
{
    fstream achiv_file;

    Achiv_data::create_achiv();

    achiv_file.open(File::filename.c_str(), ios::out | ios::app);
    achiv_file << '"' << Achiv_data::numeric_data[0] << '"' << ", " << '"' << Achiv_data::numeric_data[1] << '"' 
                << ", " << '"' << Achiv_data::numeric_data[2] << '"' << ", " << '"' << Achiv_data::name << '"' 
                << ", " << '"' << Achiv_data::progress << '"' << ", " << '"'  << Achiv_data::progress_name << '"' << "\n";
    //to wyglada strasznie, ale nie mam - na chwile obecna - dobrego pomyslu jak to rozwiazac;
    achiv_file.close();
}
void File::generate_filename()
{
    fstream file;
    bool success = false;

    while(!success) {
        cout << "Podaj nazwe pliku:\n";
        getline(cin, File::filename);
        getline(cin, File::filename);

        file.open(File::filename.c_str(), ios::in);

        if(!file) {
            cout << "Nie ma takiego pliku! Plik zostanie utworzony!\n";

            file.clear(file.rdstate() & ~ios::failbit);

            file.open(File::filename.c_str(), ios::out);

            success = true;
        } else {
            success = true;
            cout << "Plik istnieje, przygotuj sie do podania danych!\n";
        }
    }
}
