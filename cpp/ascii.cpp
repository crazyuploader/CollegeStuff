#include<iostream>
#include<cstdlib>
using namespace std;
#define TAB '\t'
#define NEWLINE '\n'

int main()
{
    int choice,a;
    cout<< "///Program to display all the ASCII codes///"<< endl<< endl<< endl;
    while(1)
    {
        cout<< "\nchoices\n";
        cout<< "\n1. for all the ASCII Codes\n";
        cout<< "\n2. for the ASCII Codes you can see and make sense of\n";
        cout<< "\nAnything else and off you go!\n";
        cout<< "\nchoice: ";
        cin>> choice;
        switch(choice)
        {
            case 1:  a=0;
                     while(a!=127)
                         {
                             cout<< "\nASCII Code for "<< a<< " is "<< char(a);
                             a++;
                         }
                     cout<< endl;
                     break;
            case 2:  a=32;
                     while(a!=127)
                         {
                             cout<< "\nASCII Code for "<< a<< " is "<< char(a);
                             a++;
                         }
                     cout<< endl;
                     break;
            default: cout<< "Exiting...\n\n";
                     cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
                     exit(0);
        }
    }
    return 0;
}
