#include<iostream>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int main()
{
    int base,exponent,result=1;
    cout<< "///Program to calculate power///"<<endl<<endl<<endl;
    cout<< "Enter base: ";
    cin>> base;
    cout<< "Enter exponent: ";
    cin>> exponent;
    while(exponent!=0)
    {
        result*=base;
        --exponent;
    }
    cout<< "Answer = "<< c;
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
