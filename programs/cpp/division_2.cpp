#include <iostream>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int main()
{
    int a, b;
    cout<< "///Program to divide two numbers///"<< endl<< endl<< endl;
    cout<< "\nEnter Dividend: ";
    cin>> a;
    cout<< "\nEnter Divisor: ";
    cin>> b;
    cout<< "\nQuotient  = "<< a/b<< endl;
    cout<< "\nRemainder = "<< a%b<< endl;
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
