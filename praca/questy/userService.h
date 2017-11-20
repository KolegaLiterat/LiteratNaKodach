#ifndef USERSERVICE_H_
#define USERSERVICE_H_

#include <string>

using namespace std;

class userService
{

    public:

    string texts[10] = {"ID:", "Nazwa:", "Autor:", "Opis:"};
    string questData[5];
    string temp;
    bool check;
    void quest_entry(int step = -1);
    string quest_validation (int step = -1);
};
#endif
