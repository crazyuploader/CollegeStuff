#include<iostream>
#include<cstdlib>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int main()
{
    int a,b,result;
    char option;
    cout<< "///A Simple Calculator///"<< endl<< endl<< endl;
    while(1)
    {
        cout<< "\nEnter First Number: ";
        cin>> a;
        cout<< "\nEnter Second Number: ";
        cin>> b;
        cout<< "\nOptions:\n";
        cout<< "+ for Addition\n";
        cout<< "- for Subtraction\n";
        cout<< "* for Multiplication\n";
        cout<< "/ for Division\n";
        cout<< "% for Modulus\n";
        cout<< "And anything else to exit!\n";
        cout<< "choice: ";
        cin>> option;
        switch(option)
        {
            case '+': cout<< "\nAddition of "<< a<< " and "<< b<< " is = "<< a+b<< endl;
                      break;
            case '-': cout<< "\nDifference of "<< a<< " and "<< b<< " is = "<< a-b<< endl;
                      break;
            case '*': cout<< "\nMultiplication of "<< a<< " and "<< b<< " is = "<< a*b<< endl;
                      break;
            case '/': if(b==0)
                      {
                          cout << "\nYou can't divide "<< a<< " by 0!";
                          cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
                          exit(0);
                      }
                      cout<< "\nDivision of "<< a<< " and "<< b<< " is = "<< a/b<< endl;
                      break;
            case '%': if(b==0)
                      {
                          cout<< "\nYou can't divide "<< a<< " by 0!";
                          cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
                          exit(0);
                      }
                      cout<< "\nModulus of "<< a<< " and "<< b<< " is = "<< a%b<< endl;
                      break;
            default:  cout<< "\nUh-huh! You haven't entered the right option, have you?\n\nExiting!";
                      cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
                      exit(0);

            }
    }
    return 0;
}
