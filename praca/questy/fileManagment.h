#ifndef FILEMANAGMENT_H_
#define FILEMANAGMENT_H_

#include <string>
#include "userService.h"

using namespace std;

class fileManagment : public userService
{
    
    public:
    
    string fileName = "data.txt";
    int answer;

    void create_file();
    void save_quest_data(string *data, int step, bool validation);
    void save_quest_validation(int step);
    void load_quest_table();
};
#endif