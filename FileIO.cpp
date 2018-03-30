#include "FileIO.h"
#include <stdlib.h>
using namespace std;
FileIO::FileIO()
{
    //ctor
    InputFile.open("InputFile.txt");
    GetNumOfWindows();
}
void FileIO::GetNumOfWindows()
{

    getline(InputFile,Windows);
    stringstream temp(Windows);
    temp>>NumOfWindows;
    if  (temp.fail())
    {
        cout<<"ERROR! The number of windows you entered is not an integer"<<endl<<"Exiting program now..."<<endl;
        exit(0);
    }
    cout<<"the number of windows opened is: "<<NumOfWindows<<endl;
}
FileIO::~FileIO()
{
    //dtor
}
