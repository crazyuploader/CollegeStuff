#include<iostream>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int main ()
{
    int a,b,c;
    cout<< "///Program to Display Greatest Number among 3 Number(s)///"<< endl<< endl<< endl;
    cout<< "Enter First Number: ";
    cin>> a;
    cout<< "Enter Second Number: ";
    cin>> b;
    cout<< "Enter Third Number: ";
    cin>> c;
    if(a>b)
        {
            if(a>c)
                {
                    cout << "Greatest Number is = " << a;
                }
            else
                {
                    cout << "Greatest Number is = " << c;
                }
        }
    else
        {
            if(b>c)
                {
                    cout << "Greatest Number is = " << b;
                }
            else
                {
                    cout << "Greatest Number is = " << c;
                }
        }
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
