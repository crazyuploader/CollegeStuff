#include<iostream>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int main()
{
  int a, b, c;
  cout << "///Program to display greatest number///" << endl << endl << endl;
  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;
  cout << "Enter third number: ";
  cin >> c;
    if (a > b)
    {
      if (a > c)
	     {
         cout << "Greatest number is: " << a;
       }
      else
	     {
        cout << "Greatest number is: " << c;
       }
     }

    else
    {
      if (b > c)
	     {
         cout << "Greatest number is: " << b;
       }
      else
	     {
         cout << "Greatest number is: " << c;
       }
    }
  cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
  return 0;
}
