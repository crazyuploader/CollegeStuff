#include<iostream>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int main()
{
    int n,i,fac=1;
    cout<< NEWLINE<< "///Program to display factorial of an entered number///"<< endl<< endl<< endl;
    cout<< "Enter number: ";
    cin>> n;
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    cout<< NEWLINE<< "Factorial of "<< n<< " is "<< fac<< NEWLINE;
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
