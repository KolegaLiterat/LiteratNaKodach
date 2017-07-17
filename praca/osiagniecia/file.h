#ifndef FILE_H
#define FILE_H
//biblioteki
#include <cstdlib>
#include <string>

class File : public Achiv_data
{
    public:

    string filename;

    void generate_file();
    void generate_filename();
};
#endif