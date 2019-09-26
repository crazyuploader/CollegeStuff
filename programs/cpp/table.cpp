#include<iostream>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int main()
{
    int a,i;
    cout<< "///Program to Display Table of Entered Number///"<<endl<<endl<<endl;
    cout<< "Enter Number: ";
    cin>> a;
    for(i=1;i<=10;++i)
        {
          cout<< "\n"<< a<< " * "<< i<< " = "<< a*i;
        }
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
