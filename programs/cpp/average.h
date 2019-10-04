#include<iostream>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int average()
{
    int a[20], i, n;
    float avg = 0;
    cout<< "///Program to Display Average of Entered n Numbers///"<< endl<< endl<< endl;
    cout<< "Enter Number of Numbers you want to get Average of: ";
    cin>> n;
    for(i=1;i<=n;i++)
    {
        cout << i << " Number: ";
        cin >> a[i];
        avg = avg + a[i];
    }
    cout<< "Average of "<< n<< " Number(s) is = "<< avg/n;
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
