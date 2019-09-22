#include<iostream>
using namespace std;
#define TAB '\t'
#define NEWLINE '\n'

int main()
{
    char ch;
    int i,j,k,m;
    cout<< "///Program to display alphabet triangle///"<< endl<< endl<< endl;
    cout<< "Enter any character: ";
    cin>> ch;
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
        ch;
    }
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
