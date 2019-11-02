//Program for Access Specifiers
#include<iostream>
using namespace std;

class Area
{
    //Private Data Member
    private:
    int y;
    //Everything now is Public!
    public:
    int x;
    void areaX()
    {
        cout<< "Public Area of Circle: "<< x*3.14*x<< endl<< endl;
    }
    void areaY(int Y)
    {
        y = Y;
        cout<< "Private Area of Circle: "<< y*3.14*y<< endl;
    }
};

int main()
{
    //Creating first object and entering value in it
    Area obj1;
    obj1.x = 20;
    obj1.areaX();
    //Creating another object and passing value through
    //argument of function areaY
    Area obj2;
    obj2.areaY(20);
    cout<< "\nCreated by Jugal Kishore -- 2019\n\n";
    return 0;
}

