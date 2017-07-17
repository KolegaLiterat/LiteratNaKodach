#ifndef ACHIV_DATA_H
#define ACHIV_DATA_H
//biblioteki
#include <cstdlib>
#include <string>

using namespace std;

class Achiv_data 
{
    public:
    
    string name, progress, progress_name;
    int numeric_data[3];
    char border = '"';
    
    protected:

    void create_achiv();
    void get_numeric_data();
    void get_string_data();
    int create_data();
};
#endif