//C++ Program to show Multiple Inheritance
#include<iostream>
using namespace std;

//Creating a Class 'Vehicle'
class Vehicle
{
    public:
    Vehicle()
    {
        cout<< "This is a Vehicle."<< endl<< endl;
    }
};

//Creating another Class 'FourWheeler'
class FourWheeler
{
    public:
    FourWheeler()
    {
        cout<< "This is a Four Wheeler Vehicle."<< endl<< endl;
    }
};

//Creating third Class and inheriting previous Classes
//using public inheritance mode
class Car : public Vehicle, public FourWheeler
{
    public:
    Car()
    {
        cout<< "Vehicle, Four Wheeler, I am a Car!\t"<< endl;
    }
};

int main()
{
    //Creating an object of class 'Car'
    Car obj;
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
