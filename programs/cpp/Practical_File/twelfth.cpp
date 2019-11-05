//C++ Program for File Handling
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream new_file;
    new_file.open("new_file_write.txt",ios::out);
    if(!new_file)
    {
        cout<<"File creation failed";
    }
    else
    {
        cout<<"New File Created!"<< endl;
        new_file<<"This is the file which just got created!\n\nCreated By Jugal\n\n";    //Writing to file
        new_file.close();
    }
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
