#include<iostream>
using namespace std;
#define TAB '\t'
#define NEWLINE '\n'

int main()
{
    int a,i;
    cout<< "///Program to display all the factors an entered numbers///"<< endl<< endl<< endl;
    cout<< "Enter number: ";
    cin>> a;
    cout<< "\nFactors of entered number "<< a<< " is:\n\n";
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
