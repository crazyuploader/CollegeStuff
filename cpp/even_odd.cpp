#include<iostream>
using namespace std;
#define TAB '\t'
#define NEWLINE '\n'

int main()
{
    int a;
    cout<< "///Program to display whether or not a program is even or odd\n"<< endl<< endl<< endl;
    cout<< "Enter number: ";
    cin>> a;
    if(a%2==0) //if-else condition to check whether or not entered number leaves 0 as its remainder
    {
        cout<< "\nEntered number "<< a<< " is even.\n";
    }
    else
    {
        cout<< "\nEntered number "<< a<< " is odd.\n";
    }
    /*Alternative way to do the same work without if-else condition
    (a%2==0)?cout<< "\nEntered number "<< a<< " is even.\n":cout<< "\nEntered number "<< a<< " is odd.\n";
    */
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
