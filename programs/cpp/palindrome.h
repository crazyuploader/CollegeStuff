#include<iostream>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int palindrome()
{
    int a,b=0,c,pal;
    cout<< "///Program to Check Whether or not Entered Number is Palindrome///"<< endl<< endl<< endl;
    cout<< "Enter the Number: ";
    cin>> a;
    pal=a;
    while(a>0)
        {
            c=a%10;
            b=b*10+c;
            a=a/10;
        }
    if(pal==b)
        {
            cout<< "Number is Palindrome";
        }
    else
        {
            cout<< "Number is not Palindrome";
        }
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
