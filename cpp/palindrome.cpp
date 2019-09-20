#include<iostream>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int main()
{
    int a,b=0,c,pal;
    cout<< "///Program to check for Palindrome///"<< endl<< endl<< endl;
    cout<< "Enter the Number to reverse: ";
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
        cout<< "\nNumber is Palindrome";
    }
    else
    {
        cout<< "\nNumber is not Palindrome";
    }
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
