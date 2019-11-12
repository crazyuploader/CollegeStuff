//C++ Program to show Multilevel Inheritance
#include<iostream>
using namespace std;

//Creating a Class 'Vehicle'
class VeHicle
{
    public:
    VeHicle()
    {
        cout<< "This is a Vehicle."<< endl<< endl;
    }
};

//Creating another Class 'FourWheeler'
//and inheriting Class 'Vehicle'
//in it using public inheritance mode
class Fourwheeler : public VeHicle
{
    public:
    Fourwheeler()
    {
        cout<< "Vehicle with four wheels are four wheeler."<< endl<< endl;
    }
};

//Creating third Class 'Car'
//and inheriting Class 'FourWheeler'
//in it using public inheritance mode
class cAr: public Fourwheeler
{
    public:
    cAr()
    {
        cout<< "With 4 wheels, I am a Car!"<< endl;
    }
};

int seventh_3()
{
    //Creating an object of Class 'Car'
    cAr obj;
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
