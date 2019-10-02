#include<iostream>
using namespace std;
#define TAB '\t'
#define NEWLINE '\n'

int main()
{
    char ch;
    int i,j,k,m,n;
    cout<< "///Program to display Alphabet Triangle///"<< endl<< endl<< endl;
    cout<< "Enter any Character: ";
    cin>> ch;
    cout<< "Enter Size: ";
    cin>> n;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
            cout<< " ";
        for(k=1;k<=i;k++)
            cout<<ch++;
            ch--;
        for(m=1;m<i;m++)
            cout<< --ch;
        cout<< "\n";
    }
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
