//C++ Program to show Multiple Inheritance
#include<iostream>
using namespace std;

//Creating a Class 'Vehicle'
class vehicle
{
    public:
    vehicle()
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
class car : public vehicle, public FourWheeler
{
    public:
    car()
    {
        cout<< "Vehicle, Four Wheeler, I am a Car!\t"<< endl;
    }
};

int seventh_2()
{
    //Creating an object of class 'Car'
    car obj;
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
