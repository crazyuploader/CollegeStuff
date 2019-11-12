//C++ Program for Template Function
#include<iostream>
using namespace std;

template<class T>
T Large(T x, T y)
{
    return (x>y)?x:y;
}

int eleventh_1()
{
    int i1, i2;
    float f1, f2;
    char c1, c2;
    cout<< "Enter two int value(s): \n";
    cin>> i1>> i2;
    cout<< "\nGreater int among "<< i1<< " and "<< i2<< " is = "<< Large(i1,i2)<< endl<< endl;
    cout<< "Enter two float value(s): \n";
    cin>> f1>> f2;
    cout<< "\nGreater float among "<< f1<< " and "<< f2<< " is = "<< Large(f1,f2)<< endl<< endl;
    cout<< "Enter two char value(s): \n";
    cin>> c1>> c2;
    cout<< "\nGreater char among "<< c1<< " and "<< c2<< " is = "<< Large(c1,c2)<< endl;
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
