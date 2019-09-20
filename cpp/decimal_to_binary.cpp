#include<iostream>
using namespace std;
#define TAB '\t'
#define NEWLINE '\n'

int main()
{
    int i,num,r[10],j;
    cout<< "///Program to convert entered Decimal number to Binary number///"<< endl<< endl<< endl;
    cout<< "Enter number: ";
    cin>> num;
    for(i=0;num>0;i++)
    {
        r[i]=num%2;
        num=num/2;
    }
    cout<< "\nBinary number of entered number is: ";
    for(j=i-1;j>=0;j--)
        {
            cout<< r[j];
        }
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
