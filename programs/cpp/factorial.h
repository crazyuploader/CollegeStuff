#include<iostream>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int factorial()
{
    int n,i,fac=1;
    cout<< "///Program to Display Factorial of an Entered Number///"<< endl<< endl<< endl;
    cout<< "Enter Number: ";
    cin>> n;
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    cout<< "Factorial of "<< n<< " is = "<< fac;
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
