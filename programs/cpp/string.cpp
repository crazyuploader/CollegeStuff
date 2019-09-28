#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;
#define TAB '\t'
#define NEWLINE '\n'

int main()
{
    string f_name,l_name,phone,address,email;
    int temp;
    cout<< "///Program to Enter various Details and Display them///"<< endl<< endl<< endl;
    cout<< "\nEnter First Name: ";
    cin>> f_name;
    cout<< "\nEnter Last Name: ";
    cin>> l_name;
    cout<< "\nDo you have Landline or a Mobile Phone? ";
    cout<< "\nPlease type 1 for Landline and 2 for Mobile Phone: ";
    cin>> temp;
    if(temp==1)
        {
            cout<< "\nEnter your Landline Number with STD code: ";
            cin>> phone;
            if(phone.length()==10)
                {
                    cout<< "\nEntered Landline Number is = "<< phone;
                }
            else
                {
                    cout<< "Check number and try again ";
                    exit(0);
                }
        }
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
