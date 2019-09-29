#include<iostream>
#include<cstdlib>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int main()
{
    int a,b,result;
    char option;
    cout<< "///A Simple Calculator///"<< endl<< endl<< endl;
    cout<< "\nEnter First Number: ";
    cin>> a;
    cout<< "\nEnter Second Number: ";
    cin>> b;
    cout<< "Options:\n";
    cout<< "+ for Addition\n";
    cout<< "- for Subtraction\n";
    cout<< "* for Multiplication\n";
    cout<< "/ for Division\n";
    cout<< "choice: ";
    cin>> option;
    if(option=='+')
        {
            cout<< "\nAddition of "<< a<< " and "<< b<< " is "<< a+b;
        }
    else
        {
            if(option=='-')
                {
                    cout<< "\nDifference of "<< a<< " and "<< b<< " is "<< a-b;
                }
            else
                {
                    if(option=='*')
                        {
                            cout<< "\nMultiplication of "<< a<< " and "<< b<< " is "<< a*b;
                        }
                    else
                        {
                            if(option=='/')
                                {
                                    cout<< "\nDivision of "<< a<< " and "<< b<< " is "<< a/b;
                                }
                            else
                                {
                                    cout<< "\nUh-huh! You haven't entered the right option, have you?\n\nExiting!";
                                }
                        }

                }
        }
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
