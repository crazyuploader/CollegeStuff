#include<iostream>
#include<cstdlib>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

template<class T>
T Large_2(T x, T y)
{
    return (x>y)?x:y;
}

template<class T>
T Large_3(T x, T y, T z)
{
    return (x>y)?((x>z)?x:z):((y>z)?y:z);
}

int greater_template()
{
    int choice;
    cout<< "///Program to Display Greater Number using Template///"<< endl<< endl<< endl;
    cout<< "Options\n";
    cout<< "1. to Check 2 Number(s)\n";
    cout<< "2. to Check 3 Number(s)\n";
    cout<< "Anything else to exit!\n";
    cout<< "Your choice? ";
    cin>> choice;
    if(choice==1)
    {
        int i1,i2;
        float f1,f2;
        char c1,c2;
        cout<< "Checking 2 Number(s)\n\n";
        cout<< "Enter Integers: ";
        cin>> i1>> i2;
        cout<< "Enter Floating Point(s): ";
        cin>> f1>> f2;
        cout<< "Enter Character(s): ";
        cin>> c1>> c2;
        cout<< "The Larger is = "<< Large_2(i1,i2)<< endl;
        cout<< "The Larger is = "<< Large_2(f1,f2)<< endl;
        cout<< "The Larger is = "<< Large_2(c1,c2)<< endl;
    }
    else
    {
        if(choice==2)
        {
            int i1,i2,i3;
            float f1,f2,f3;
            char c1,c2,c3;
            cout<< "Checking 3 Number(s)\n\n";
            cout<< "Enter Integers: ";
            cin>> i1>> i2>> i3;
            cout<< "Enter Floating Point(s): ";
            cin>> f1>> f2>> f3;
            cout<< "Enter Character(s): ";
            cin>> c1>> c2>> c3;
            cout<< "The Largest Number is = "<< Large_3(i1,i2,i3)<< endl;
            cout<< "The Largest Floating Point is = "<< Large_3(f1,f2,f3)<< endl;
            cout<< "The Largest Character is = "<< Large_3(c1,c2,c3)<< endl;
        }
        else
        {
            cout<< "\nUh-huh! You haven't entered the right option, have you?\n\nExiting!";
            cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
            exit(0);
        }
    }
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
