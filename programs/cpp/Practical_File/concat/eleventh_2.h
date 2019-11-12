//C++ Program for Template Class
#include<iostream>
using namespace std;

template<class T>
class AdD
{
    public:
    T add(T A, T B)
    {
        return (A>B)?A:B;
    }
};

int eleventh_2()
{
    int i1, i2;
    float f1, f2;
    char c1, c2;
    cout<< "Enter two int value(s): \n";
    cin>> i1>> i2;
    AdD<int> Int;
    cout<< "\nGreater int among "<< i1<< " and "<< i2<< " is = "<< Int.add(i1,i2)<< endl<< endl;
    cout<< "Enter two float value(s): \n";
    cin>> f1>> f2;
    AdD<float> Float;
    cout<< "\nGreater float among "<< f1<< " and "<< f2<< " is = "<< Float.add(f1,f2)<< endl<< endl;
    cout<< "Enter two char value(s): \n";
    cin>> c1>> c2;
    AdD<char> Char;
    cout<< "\nGreater char among "<< c1<< " and "<< c2<< " is = "<< Char.add(c1,c2)<< endl;
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
