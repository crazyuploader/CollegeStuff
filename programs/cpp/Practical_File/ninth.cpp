//C++ Program for Operator Overloading
#include<iostream>
using namespace std;

//Creating a Class
class OP
{
    private:
    int num;
    public:
    OP()
    {
        num=8;
    }
    void operator ++()
    {
        num=num+2;
    }
    void Print()
    {
        cout<< "The Count is: "<< num<< endl;
    }
};

int main()
{
    OP test;
    ++test;  //Calling of a function "void operator ++()"
    test.Print();
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
