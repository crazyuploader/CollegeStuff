#include<iostream>
using namespace std;

int main()
{
    int n,i,m=0;
    cout<< "///Program to check Prime Number///" << endl<< endl<< endl;
    cout<< "Enter the number to check for Prime: ";
    cin>> n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        m++;
    }
    if(m==2)
    {
        cout<< "Number is Prime";
    }
    else
    {
        cout<< "Number is not Prime";
    }
    cout<< "\n\n\nCreated by Jugal Kishore -- 2019\n\n";
    return 0;
}
