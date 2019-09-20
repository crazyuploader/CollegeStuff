#include<iostream>
using namespace std;
#define TAB '\t'
#define NEWLINE '\n'

int main()
{
    int num,i,r,temp,sum=0;
    cout<< "///Program to check whether or not entered number is Armstrong///"<< endl<< endl<< endl;
    cout<< "Enter number: ";
    cin>> num;
    temp=num;
    while(num>0)
    {
        r=num%10;
        sum=sum+(r*r*r);
        num=num/10;
    }
    if(temp==sum) //If-else condition to whether or not the number is equal to the sum of cubes of its digits
    {
        cout<< "\nEntered number "<< temp<< " is Armstrong.\n";
    }
    else
    {
        cout<< "\nEntered number "<< temp<< " is not Armstrong.\n";
    }
    //(temp==sum)?cout<< "\nEntered number "<< temp<< " is Armstrong.\n":cout<< "\nEntered number "<< temp<< " is not Armstrong.\n";
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
