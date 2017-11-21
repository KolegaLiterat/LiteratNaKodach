#ifndef USERSERVICE_H_
#define USERSERVICE_H_

#include <string>

using namespace std;

class userService
{

    public:

    string textsQuestEntry[4] = {"ID:", "Nazwa:", "Autor:", "Opis:"};
    string textsQuestValidation[4] = {"Kto sprawdzal? ", "Pytanie 1: ", "Pytanie 2: ", "Pytanie 3: "};
    string temp;
    bool check;
    
    bool user_action();

    private:

    bool quest_entry();
    bool quest_validation();

};
#endif
