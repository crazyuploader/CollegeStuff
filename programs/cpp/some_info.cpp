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
    cout<< "\nLandline or Mobile Phone?";
    cout<< "\n\n1 for Landline and 2 for Mobile Phone: ";
    cin>> temp;
    if(temp==1)
        {
            cout<< "\nEnter your Landline Number with STD code: ";
            cin>> phone;
            if(phone.length()==11)
                {
                    cout<< "\nEntered Landline Number is OK"<< endl;
                }
            else
                {
                    cout<< "Check Number and Try Again!";
                    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
                    exit(0);
                }
        }
    else
        if(temp==2)
            {
                cout<< "\nEnter your Mobile Phone Number: ";
                cin>> phone;
                if(phone.length()==10)
                    {
                        cout<< "\nEntered Mobile Phone Number is OK"<< endl;
                    }
                else
                    {
                        cout<< "Check Number and Try Again!";
                        cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
                        exit(0);
                    }
            }
        else
        {
            cout<< "\nUh-huh! You haven't pressed 1 or 2, have you?\n\nExiting!";
            cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
            exit(0);
        }
    cout<< "\nEnter your Address: ";
    cin.ignore();
    getline(cin,address);
    cout<< "\nEnter your Email Address: ";
    cin>> email;
    cout<< NEWLINE<< "Your Entered Details are as follows -"<< endl;
    cout<< "\nFull Name: "<< f_name<< " "<< l_name<< endl;
    cout<< "\nPhone Number: "<< phone<< endl;
    cout<< "\nAddress: "<< address<< endl;
    cout<< "\nEmail Address: "<< email;
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
