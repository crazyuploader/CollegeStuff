//Program for Function Overloading
#include<iostream>
using namespace std;

class Add
{
    public:
    int add(int x, int y)
    {
        return x+y;
    }
    int add(int x, int y, int z)
    {
        return x+y+z;
    }
};

int tenth()
{
    Add obj1;
    cout<< "Addition of 10 and 20 is = "<< obj1.add(10,20)<< endl<< endl;
    cout<< "Addition of 10, 20, and 30 is = "<< obj1.add(10,20,30)<< endl;
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
