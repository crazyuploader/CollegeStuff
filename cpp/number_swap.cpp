#include<iostream>
#include<cstdlib>
using namespace std;
#define TAB '\t'
#define NEWLINE '\n'

int first_way()
{
    cout<< "Using + and -"<< endl;
    int a,b;
    cout<< "Swapping using + and -"<< endl;
    cout<< "Enter a: ";
    cin>> a;
    cout<< "Enter b: ";
    cin>> b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<< "After swapping a is "<< a<< " and b is "<< b;
}

int second_way()
{
    cout<< "Using * and /"<< endl;
    int a,b;
    cout<< "Swapping using * and /"<< endl;
    cout<< "Enter a: ";
    cin>> a;
    cout<< "Enter b: ";
    cin>> b;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<< "After swapping a is "<< a<< " and b is "<< b;
}

int main()
{
    int choice;
    cout<<"///Program to Swapping two entered numbers///"<< endl<< endl<< endl;
    while(1)
    {
        cout<< "\nChoice\n";
        cout<< "\n1. for Swapping using + and -\n";
        cout<< "\n2. for Swapping using * and /\n";
        cin>> choice;
        switch(choice)
        {
            case 1:  first_way();
                     break;
            case 2:  second_way();
                     break;
            default: cout<< "Exiting...\n\n";
                     exit(0);
        }
    }
    return 0;
}
