#include<iostream>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int main()
{
    int a,b=0,c;
    cout<< "///Program to reverse number///"<< endl<< endl<< endl;
    cout<< "Enter the Number to reverse: ";
    cin>> a;
    while(a>0)
    {
        c=a%10;
        b=b*10+c;
        a=a/10;
    }
    cout<< "Revered Number is: "<< b;
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
