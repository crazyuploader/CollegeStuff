#include<iostream>
#include<cstdlib>
using namespace std;
#define TAB '\t'
#define NEWLINE '\n'

class calculator{
    int a,b,result;

    public:
           void addition()
           {
               result = a+b;
           }
           void subtraction()
           {
               result = a-b;
           }
           void multiplication()
           {
               result = a*b;
           }
           void quotient()
           {
               if(b==0)
               {
                   cout<< "\nYou can't divide "<< a<< " by 0!\n";
                   cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
                   exit(0);
               }
               result = a/b;
           }
           void remainder()
           {
               if(b==0)
               {
                   cout<< "\nYou can't divde "<< b<< " by 0!\n";
                   cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
                   exit(0);
               }
               result = a%b;
           }
           void output()
           {
               cout<< "Result is = "<< result<< endl;
           }
           void intput()
           {
               cout<< "Enter 2 Numbers!\n";
               cout<< "a: ";
               cin>> a;
               cout<< "b: ";
               cin>> b;
           }
};

int calc_class()
{
    calculator c;
    char choice;
    while(1)
    {
        cout<< "Options:\n";
        cout<< "+ for Addition\n";
        cout<< "- for Subtraction\n";
        cout<< "* for Multiplication\n";
        cout<< "/ for Division\n";
        cout<< "% for Modulus\n";
        cout<< "Your Choice? ";
        cin>> choice;
        switch(choice)
        {
            case '+': c.intput();
                      c.addition();
                      c.output();
                      break;
            case '-': c.intput();
                      c.subtraction();
                      c.output();
                      break;
            case '*': c.intput();
                      c.multiplication();
                      c.output();
                      break;
            case '/': c.intput();
                      c.quotient();
                      c.output();
                      break;
            case '%': c.intput();
                      c.remainder();
                      c.output();
                      break;
            default:  cout<< "Exiting!";
                      cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
                      exit(0);
        }
    }
}
