#ifndef ACHIV_DATA_H
#define ACHIV_DATA_H
//biblioteki
#include <cstdlib>
#include <string>

using namespace std;

class Achiv_data 
{
    public:
    
    string name = "Pusty", progress = "Pusty", progress_name = "Pusty";
    int numeric_data[3] = {0, 0, 0};
    
    protected:

    void create_achiv();
    void get_numeric_data();
    void get_string_data();
    int create_data();
};
#endif