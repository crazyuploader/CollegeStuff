#include<iostream>
using namespace std;
#define TAB '\t'
#define NEWLINE '\n'

int factors_of_numbers()
{
    int a,i;
    cout<< "///Program to Display all the Factors an Entered Number///"<< endl<< endl<< endl;
    cout<< "Enter number: ";
    cin>> a;
    cout<< "\nFactors of Entered Number "<< a<< " is:\n\n";
    for(i=1;i<=a;i++)
        {
            if(a%i==0)
            {
                cout<< " "<< i<< " ";
            }
        }
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
