//pliki
#include "achiv_data.h"
//biblioteki
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

//protected

void Achiv_data::create_achiv()
{
    int step;

    step = Achiv_data::create_data();

    switch(step) {
        case 1:
            Achiv_data::get_numeric_data();
            Achiv_data::get_string_data();
            break;
        case 2:
            Achiv_data::get_numeric_data();
            break;
        case 3:
            Achiv_data::get_string_data();
            break;
        default:
            break;
    }
}
void Achiv_data::get_numeric_data()
{
    //nie jestem pewien, czy trzymanie tych wartosci w tablicy typu int jest dobrym pomyslem; wpisanie tutaj liter wywala program i przerywa jego dzialanie;
    
    cout << "Podaj wartosc dla id\n";
    cin >> Achiv_data::numeric_data[0];

    cout << "Podaj wartosc dla grupy\n";
    cin >> Achiv_data::numeric_data[1];

    cout << "Podaje wartosc dla typu\n";
    cin >> Achiv_data::numeric_data[2];
}
void Achiv_data::get_string_data()
{
    cout << "Podaj nazwe dla osiagniecia\n";
    getline(cin, Achiv_data::name);
    getline(cin, Achiv_data::name);

    cout << "Podaj progresy dla osiagniecia\n";
    getline(cin, Achiv_data::progress);

    cout << "Podaj nazwe dla progresow\n";
    getline(cin, Achiv_data::progress_name);
}
int Achiv_data::create_data()
{
    int change;

    cout << "Co chcesz wpisac?\n" << 
    "[1] Wszystko\n" <<
    "[2] Tylko typy\n" <<
    "[3] Tylko opisy\n";
    cin >> change;

    if (change > 3 || change < 1) {
        cout << "Blad wartosci! Wprowadz wartosc ponownie!\n";

        Achiv_data::create_data();
    } else {
        return change;
    }
}