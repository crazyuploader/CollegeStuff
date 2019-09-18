#include<iostream>
using namespace std;

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
    cout<< "\n\n\nCreated by Jugal Kishore -- 2019\n\n";
    return 0;
}
