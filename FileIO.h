#ifndef FILEIO_H
#define FILEIO_H
#include <fstream>
#include <iostream>
#include <sstream>
#include "Globals.h"
using namespace std;
class FileIO
{
    public:
        FileIO();
        void GetNumOfWindows();
        virtual ~FileIO();

    protected:

    private:
};

#endif // FILEIO_H
