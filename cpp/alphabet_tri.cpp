#include<iostream>
using namespace std;
#define TAB '\t'
#define NEWLINE '\n'

int main()
{
    char ch='A';
    int i,j,k,m;
    cout<< "///Program to display alphabet triangle///"<< endl<< endl<< endl;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
            cout<< " ";
        for(k=1;k<=i;k++)
            cout<<ch++;
            ch--;
        for(m=1;m<i;m++)
            cout<< --ch;
        cout<< "\n";
        ch='A';
    }
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
