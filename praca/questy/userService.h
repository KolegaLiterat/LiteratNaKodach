#ifndef USERSERVICE_H_
#define USERSERVICE_H_

#include <string>

using namespace std;

class userService
{

    public:

<<<<<<< HEAD
    string texts[4] = {"ID:", "Nazwa:", "Autor:", "Opis:"};
=======
    string textsQuestEntry[4] = {"ID:", "Nazwa:", "Autor:", "Opis:"};
    string textsQuestValidation[4] = {"Kto sprawdzal? ", "Pytanie 1: ", "Pytanie 2: ", "Pytanie 3: "};
>>>>>>> 968fea8ecaeeb25b7cb4d132dc4b826c3801d05c
    string temp;
    bool check;
    
    bool user_action();

    private:

    bool quest_entry();
    bool quest_validation();

};
#endif
