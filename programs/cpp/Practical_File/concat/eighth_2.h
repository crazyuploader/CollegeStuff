//C++ Program to show Friend Function
#include<iostream>
using namespace std;

//Creating a Class
class NaMe
{
    private:
    string name;
    public:
    NaMe()
    {
        name= "Jugal Kishore";
    }
    friend void showName(NaMe a); //Friend Function
};

//Creating a Global Function
void showName(NaMe a)
{
    cout<< "This is a Friend Function!"<< endl<< endl;
    cout<< "Name: "<< a.name<< endl;
}

int eighth_2()
{
    NaMe obj;
    showName(obj);
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
