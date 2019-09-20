#include<iostream>
using namespace std;
#define TAB '\t'
#define NEWLINE '\n'

int main()
{
    int num,sum=0,r,temp;
    cout<< "///Program to display sum of its digits///"<< endl<< endl<< endl;
    cout<< "Enter number: ";
    cin>> num;
    temp=num;
    while(num!=0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    cout<< "\nSum of entered number "<< temp<< " is "<< sum;
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
