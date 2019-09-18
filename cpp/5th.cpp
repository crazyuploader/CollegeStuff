#include<iostream>

using namespace std;

int main()
{
    int a,i;
    cout<< "///Program to display multiplication table of entered number///"<<endl<<endl<<endl;
    cout<< "Enter number: ";
    cin>> a;
    for(i=1;i<=10;++i)
        cout<< "\n" << a << " * " << i << " = " << a*i ;
    cout<< "\n\n\nCreated by Jugal Kishore -- 2019\n\n";
    return 0;
}
