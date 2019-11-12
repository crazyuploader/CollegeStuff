//C++ Program to show Hybrid (Virtual) Inheritance
#include<iostream>
using namespace std;

//Creating Class 'Vehicle'
class veHIcle
{
    public:
    veHIcle()
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
class CAr : public veHIcle
{
    public:
    CAr()
    {
        cout<< "This is a Car"<< endl<< endl;
    }
};

//Creating Class 'Bus' and inheriting Class
//'Vehicle' and Class 'Fare' in it
class BuS : public veHIcle, public Fare
{
    public:
    BuS()
    {
        cout<< "This is a Bus"<< endl;
    }
};

int seventh_5()
{
    //Creating an object of Class 'Car'
    CAr obj1;
    //Creating an object of Class 'Bus'
    BuS obj2;
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
