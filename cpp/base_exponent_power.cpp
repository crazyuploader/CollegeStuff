#include<iostream>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int main()
{
    int base,exponent;
    long long result=1;
    cout<< "///Program to Calculate Power of a Number///"<<endl<<endl<<endl;
    cout<< "Enter base: ";
    cin>> base;
    cout<< "Enter exponent: ";
    cin>> exponent;
    while(exponent!=0)
    {
        result*=base;
        --exponent;
    }
    cout<< "Answer = "<< result;
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
