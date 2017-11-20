#ifndef USERSERVICE_H_
#define USERSERVICE_H_

#include <string>

using namespace std;

class userService
{

    public:

    string texts[4] = {"ID:", "Nazwa:", "Autor:", "Opis:"};
    char sep = '|';
    string temp;
    bool check;
    
    bool user_action();

    private:

    void quest_entry(int step = -1);
    string quest_validation (int step = -1);
};
#endif
