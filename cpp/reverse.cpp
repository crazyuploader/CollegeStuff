#include<iostream>
using namespace std;

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
    cout<< "\n\n\nCreated by Jugal Kishore -- 2019\n\n";
    return 0;
}
