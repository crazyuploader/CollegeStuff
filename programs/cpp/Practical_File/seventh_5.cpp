//C++ Program to show Hybrid (Virtual) Inheritance
#include<iostream>
using namespace std;

//Creating Class 'Vehicle'
class Vehicle
{
    public:
    Vehicle()
    {
        cout<< "This is a Vehicle"<< endl<< endl;
    }
};

//Creating Class 'Fare'
class Fare
{
    public:
    Fare()
    {
        cout<< "Have fare:- "<< endl<< endl;
    }
};

//Creating Class 'Car' and inheriting Class
//'Vehicle' in it
class Car : public Vehicle
{
    public:
    Car()
    {
        cout<< "This is a Car"<< endl<< endl;
    }
};

//Creating Class 'Bus' and inheriting Class
//'Vehicle' and Class 'Fare' in it
class Bus : public Vehicle, public Fare
{
    public:
    Bus()
    {
        cout<< "This is a Bus"<< endl;
    }
};

int main()
{
    //Creating an object of Class 'Car'
    Car obj1;
    //Creating an object of Class 'Bus'
    Bus obj2;
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
