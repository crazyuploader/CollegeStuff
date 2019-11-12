//Program to show Constructor overloading
#include<iostream>
using namespace std;

class Area
{
    public:
    int area;
    //First Constructor with not argument
    Area()
    {
        area=10*10;
        cout<< "Area of Square is = "<< area<< endl;
    }
    //Second Constructor with argument
    Area(int a)
    {
        area=a*a;
        cout<< "Area of Square is = "<< area<< endl;
    }
};

int fifth()
{
    cout<< "First Constructor with no argument\n\n";
    Area A1;
    cout<< "\nSecond Constructor with an argument\n\n";
    Area A2(10);
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
