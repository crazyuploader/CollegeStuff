#include<iostream>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

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
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
