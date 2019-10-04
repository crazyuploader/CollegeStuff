#include<iostream>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int greater_2()
{
    int a, b;
    cout<< "///Program to Display Greater Number///"<< endl<< endl<< endl;
    cout<< "Enter First Number: ";
    cin>> a;
    cout<< "Enter Second Number: ";
    cin>> b;
    (a==b)?cout<< "Entered Number are Equal":(a>b)?cout<<"Greater Number is = "<<a:cout<< "Greater Number is = "<< b;
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
