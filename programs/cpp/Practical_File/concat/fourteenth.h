//C++ Program for Namespaces
#include<iostream>
using namespace std;
namespace First
{
    void display()
    {
        cout<< "I am from First Namespace!"<< endl;
    }
}

namespace Second
{
    void display()
    {
        cout<< "I am from Second Namespace!"<< endl;
    }
}

using namespace First;

int fourteenth()
{
    display();
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
