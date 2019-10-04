#include<iostream>
#include<cstdlib>
using namespace std;
#define TAB '\t'
#define NEWLINE '\n'

int convertDecimalToBinary()
{
    int i,num,deci_num,r[10],j;
    cout<< "\nConverting Decimal Number to Binary Number"<< endl<< endl;
    cout<< "\nEnter Decimal Number: ";
    cin>> num;
    deci_num=num;
    for(i=0;num>0;i++)
    {
        r[i]=num%2;
        num=num/2;
    }
    cout<< "Entered Decimal Number is = "<< deci_num<< endl;
    cout<< "Its Binary equivalent is = ";
    for(j=i-1;j>=0;j--)
        {
            cout<< r[j];
        }
    return 0;
}

int convertBinaryToDecimal()
{
    long long num,bin_num;
    int i,r=0,deci=0,base=1;
    cout<< "\nConverting Binary Number to Decimal Number"<< endl<< endl;
    cout<< "\nEnter binary number(1s and 0s): ";
    cin>> num;
    bin_num=num;
    for(i=0;num>0;i++)
    {
        r=num%10;
        deci=deci+r*base;
        num=num/10;
        base=base*2;
    }
    cout << "Entered Binary Number is = "<< bin_num<< endl;
    cout << "Its Decimal Equivalent is = "<< deci;
    return 0;
}

int number_conversion()
{
    long long n;
    int choice;
    cout<< "///Program to convert Numbers///"<< endl<< endl<< endl;
    while(1)
    {
        cout<< "\nchoices\n";
        cout<< "\n1. for Decimal to Binary";
        cout<< "\n2. for Binary to Decimal";
        cout<< "\nAnything else and off you go!\n";
        cout<< "\nchoice: ";
        cin>> choice;
        switch(choice)
        {
            case 1:  convertDecimalToBinary();
                     break;
            case 2:  convertBinaryToDecimal();
                     break;
            default: cout<< "Exiting...\n\n";
                     cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
                     exit(0);
        }
    }
}
