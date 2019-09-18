#include<iostream>

using namespace std;

int main() {
  int a, b;
  cout << "///Program to display greater number///" << endl << endl << endl;
  cout << "Enter first number: ";
  cin >> a;
  cout << "Entered number is: " << a << endl;
  cout << "Enter second number: ";
  cin >> b;
  cout << "Entered number is: " << b << endl;
  (a == b) ? cout << "Entered number are equal":(a>b)?cout<<"Greater number is: "<<a: cout << "Greater number is: " << b;
  cout<< "\n\n\nCreated by Jugal Kishore -- 2019\n\n";
  return 0;
}
