#include<iostream>
#include<cstdlib>
using namespace std;
#define TAB '\t'
#define NEWLINE '\n'

int main()
{
    int choice,a,b,c;
    cout<< "///Program to Swapping of two Entered Numbers///"<< endl<< endl<< endl;
    while(1)
    {
        cout<< "\nchoices\n";
        cout<< "\n1. for Swapping using third variable";
        cout<< "\n2. for Swapping using + and -";
        cout<< "\n3. for Swapping using * and /";
        cout<< "\nAnything else and off you go!\n";
        cout<< "\nchoice: ";
        cin>> choice;
        switch(choice)
        {
            case 1:  cout<< "\nUsing third variable";
                     cout<< "\nEnter Number a: ";
                     cin>> a;
                     cout<< "\nEnter Number b: ";
                     cin>> b;
                     c=a;
                     a=b;
                     b=c;
                     cout<< "After Swapping a is = "<< a<< " and b is = "<<b;
                     break;
            case 2:  cout<< "\nUsing + and -"<< endl;
                     cout<< "\nEnter Number a: ";
                     cin>> a;
                     cout<< "\nEnter Number b: ";
                     cin>> b;
                     a=a+b;
                     b=a-b;
                     a=a-b;
                     cout<< "After Swapping a is = "<< a<< " and b is = "<< b;
                     break;
            case 3:  cout<< "\nUsing * and /"<< endl;
                     cout<< "\nEnter Number a: ";
                     cin>> a;
                     cout<< "\nEnter Number b: ";
                     cin>> b;
                     a=a*b;
                     b=a/b;
                     a=a/b;
                     cout<< "After Swapping a is = "<< a<< " and b is = "<< b;
                     break;
            default: cout<< "Exiting...\n\n";
                     cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
                     exit(0);
        }
    }
    return 0;
}
