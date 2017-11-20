#include <cstdlib>
#include <iostream>
#include "fileManagment.h"
#include "userService.h"

using namespace std;

int main()
{
    fileManagment file;
    userService input;

    file.create_file();
    file.quest_entry();
}
