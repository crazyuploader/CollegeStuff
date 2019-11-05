//C++ Program to show Multilevel Inheritance
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
//and inheriting Class 'Vehicle'
//in it using public inheritance mode
class FourWheeler : public Vehicle
{
    public:
    FourWheeler()
    {
        cout<< "Vehicle with four wheels are four wheeler."<< endl<< endl;
    }
};

//Creating third Class 'Car'
//and inheriting Class 'FourWheeler'
//in it using public inheritance mode
class Car: public FourWheeler
{
    public:
    Car()
    {
        cout<< "With 4 wheels, I am a Car!"<< endl;
    }
};

int main()
{
    //Creating an object of Class 'Car'
    Car obj;
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
