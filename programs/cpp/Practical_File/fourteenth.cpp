//C++ Program for Namespaces
#include<iostream>
using namespace std;
namespace first
{
    void display()
    {
        cout<< "I am from First Namespace!"<< endl;
    }
}

namespace second
{
    void display()
    {
        cout<< "I am from Second Namespace!"<< endl;
    }
}

using namespace first;

int main()
{
    display();
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
