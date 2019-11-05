//C++ Program to show Friend Function
#include<iostream>
using namespace std;

//Creating a Class
class Name
{
    private:
    string name;
    public:
    Name()
    {
        name= "Jugal Kishore";
    }
    friend void showName(Name a); //Friend Function
};

//Creating a Global Function
void showName(Name a)
{
    cout<< "This is a Friend Function!"<< endl<< endl;
    cout<< "Name: "<< a.name<< endl;
}

int main()
{
    Name obj;
    showName(obj);
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
