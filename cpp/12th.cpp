#include<iostream>

using namespace std;

int main()
{
    int a,b,c=1,i;
    cout<< "///Program to calculate power///"<<endl<<endl<<endl;
    cout<< "Enter number: ";
    cin>> a;
    cout<< "Enter power: ";
    cin>> b;
    while(b!=0)
    {
        c*=a;
        --b;
    }
    cout<< "Result is: "<< c;
    return 0;
}
