//C++ Program to show Single Inheritance
#include<iostream>
using namespace std;

//Creating a Parent Class 'Vehicle'
class Vehicle
{
    public:
    Vehicle()
    {
        cout<< "This is a Vehicle."<< endl<< endl;
    }
};

//Creating another class 'Car' and inheriting
//Parent Class 'Vehicle' in it.
class Car : public Vehicle
{
    public:
    Car()
    {
        cout<< "I have 4 wheels!"<< endl;
    }
};

int seventh_1()
{
    //Creating an object from Child Class 'Car'
    Car obj;
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
