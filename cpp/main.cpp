#include<iostream>
#include<cstdlib>
using namespace std;

int add_2()
{
    int a,b;
    cout<< "///Program to add two number///"<<endl<<endl<<endl;
    cout<< "Enter first number: ";
    cin>> a;
    cout<< "Enter second number: ";
    cin>> b;
    cout<< "Addition of entered number is: "<< a+b;
    return 0;
}

int average()
{
  int a[20], i, n;
  float avg = 0;
  cout << "///Program to display average of entered n numbers///" << endl << endl << endl;
  cout << "Enter number of numbers you want to get average of: ";
  cin >> n;
  for (i = 1; i <= n; i++) {
    cout << i << " number: ";
    cin >> a[i];
    avg = avg + a[i];
  }
  cout << "Average of " << n << " number(s) is: " << avg / n;
  return 0;
}


int main()
{
 int choice;
 while(1)
 {
 cout<< "Enter choice: ";
 cin>> choice;
 switch(choice)
 {
     case 1: add_2();
             break;
     case 2: average();
             break;
     case 3: exit(1);
     default: cout<< "Invalid Choice";
    }
  }
  return 0;
}
