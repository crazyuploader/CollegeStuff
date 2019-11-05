//C++ Program to show Friend Class
#include<iostream>
using namespace std;

//Creating a Class and declaring
//showName Class as its friend
class Name
{
    private:
    string name;
    public:
    Name()
    {
        name= "Jugal Kishore";
    }
    friend class showName; //Friend Class
};

//Creating another Class
class showName
{
    public:
    void display(Name a)
    {
        cout<< "Name: "<< a.name<< endl;
    }
};

int main()
{
    Name obj;
    showName show;
    show.display(obj);
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
