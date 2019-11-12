//Program to create a class and access
//its members using objects.
#include<iostream>
#include<string>
using namespace std;

class info
{
    //Access specifier
    public:
        //Data Members
        string f_name, l_name, roll, course;
        //Member Function
        void input()
        {
            cout<< "Enter First Name: ";
            cin>> f_name;
            cout<< "Enter Last Name: ";
            cin>> l_name;
            cout<< "Enter Roll Number: ";
            cin>> roll;
            cout<< "Enter Course: ";
            cin>> course;
        }
};

int second()
{
    //Declaring an Object of Class 'info'
    info a;
    a.input();
    //Accessing members using Object
    cout<< "\n--- Entered Information ---\n\n";
    cout<< "Full Name: "<< a.f_name<< " "<< a.l_name<< endl;
    cout<< "Roll Number: "<< a.roll<< endl;
    cout<< "Course: "<< a.course<< endl;
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
