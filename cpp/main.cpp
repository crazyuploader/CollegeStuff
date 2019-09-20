#include<iostream>
#include<cstdlib>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int add_2()
{
    int a,b;
    cout<< "///Program to add two number///"<<endl<<endl<<endl;
    cout<< "Enter first number: ";
    cin>> a;
    cout<< "Enter second number: ";
    cin>> b;
    cout<< "Addition of entered number is: "<< a+b<<endl;
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
  cout << "Average of " << n << " number(s) is: " << avg / n<<endl;
  return 0;
}

int base_pow()
{
    int base,exponent;
    long long result=1;
    cout<< "///Program to Calculate Power of a Number///"<<endl<<endl<<endl;
    cout<< "Enter base: ";
    cin>> base;
    cout<< "Enter exponent: ";
    cin>> exponent;
    while(exponent!=0)
    {
        result*=base;
        --exponent;
    }
    cout<< "Answer = "<< result;
    return 0;
}

int division()
{
  float a, b;
  cout << "///Program to divide two numbers///" << endl << endl << endl;
  cout << "Enter dividend: ";
  cin >> a;
  cout << "Enter divisor: ";
  cin >> b;
  cout << "Final answer is: " << a / b;
  return 0;
}

int factorial()
{
    int n,i,fac=1;
    cout<< "///Program to display factorial of an entered number///"<< endl<< endl<< endl;
    cout<< "Enter number: ";
    cin>> n;
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    cout<< "Factorial of "<< n<< " is "<< fac;
    return 0;
}

int greater_2()
{
  int a, b;
  cout << "///Program to display greater number///" << endl << endl << endl;
  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;
  (a == b) ? cout << "Entered number are equal":(a>b)?cout<<"Greater number is: "<<a: cout << "Greater number is: " << b;
  return 0;
}

int greater_3()
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
  return 0;
}

int reverse()
{
    int a,b=0,c;
    cout<< "///Program to reverse number///"<< endl<< endl<< endl;
    cout<< "Enter the Number to reverse: ";
    cin>> a;
    while(a>0)
    {
        c=a%10;
        b=b*10+c;
        a=a/10;
    }
    cout<< "Revered Number is: "<< b;
    return 0;
}

int palindrome()
{
    int a,b=0,c,pal;
    cout<< "///Program to check for Palindrome///"<< endl<< endl<< endl;
    cout<< "Enter the Number to reverse: ";
    cin>> a;
    pal=a;
    while(a>0)
    {
        c=a%10;
        b=b*10+c;
        a=a/10;
    }
    if(pal==b)
    {
        cout<< "Number is Palindrome";
    }
    else
    {
        cout<< "Number is not Palindrome";
    }
    return 0;
}

int prime()
{
    int n,i,m=0;
    cout<< "///Program to check Prime Number///" << endl<< endl<< endl;
    cout<< "Enter the number to check for Prime: ";
    cin>> n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        m++;
    }
    if(m==2)
    {
        cout<< "Number is Prime";
    }
    else
    {
        cout<< "Number is not Prime";
    }
    return 0;
}

int subtract_2()
{
    int a,b;
    cout<< "///Program to subtract two numbers///"<<endl<<endl<<endl;
    cout<< "Enter first number: ";
    cin>> a;
    cout<< "Enter second number: ";
    cin>> b;
    cout<< "The difference of these two numbers is: "<< a-b;
    return 0;

}

int table()
{
    int a,i;
    cout<< "///Program to display table of entered number///"<<endl<<endl<<endl;
    cout<< "Enter number: ";
    cin>> a;
    for(i=1;i<=10;++i)
        {
          cout<< "\n" << a << " * " << i << " = " << a*i ;
        }
    return 0;
}

int multiplication()
{
  int a,b;
  cout<< "///Program to display multiplication table of entered number///"<<endl<<endl<<endl;
  cout<< "Enter 1st number: ";
  cin>> a;
  cout<< "Enter 2nd number: ";
  cin>> b;
  cout<< "Answer is "<< a*b;
  return 0;
}

int main()
{
 int choice;
 cout<< "///Main Program///\n";
 while(1)
 {
   cout<< "\nPrograms:\n";
   cout<< "1. for Program to add two numbers\n";
   cout<< "2. for Program to subtract two numbers\n";
   cout<< "3. for Program to multiply two numbers\n";
   cout<< "4. for Program to perform division\n";
   cout<< "5. for Program to calculate factorial\n";
   cout<< "6. for Program to show greatest number from 2 numbers\n";
   cout<< "7. for Program to show greatest number from 3 numbers\n";
   cout<< "8. for Program to calculate power of a number\n";
   cout<< "9. for for Program to reverse entered number\n";
   cout<< "10. Program to check if entered number is Palindrome or not\n";
   cout<< "11. for Program to get average of entered number(s)\n";
   cout<< "12. for Program to show table of entered number\n";
   cout<< "13. for Program to check if entered number is Prime or not\n";
   cout<< "Anything else to exit!\n";
   cout<< "choice: ";
   cin>> choice;
   switch(choice)
   {
     case 1: add_2();
             break;
     case 2: subtract_2();
             break;
     case 3: multiplication();
             break;
     case 4: division();
             break;
     case 5: factorial();
             break;
     case 6: greater_2();
             break;
     case 7: greater_3();
             break;
     case 8: base_pow();
             break;
     case 9: reverse();
             break;
     case 10: palindrome();
             break;
     case 11: average();
             break;
     case 12: table();
             break;
     case 13: prime();
             break;
     default: cout<< "Exiting...\n\n";
              cout<< TAB<< " =================================\n";
              cout<< TAB<< "||Created by Jugal Kishore -- 2019||"<< NEWLINE;
              cout<< TAB<< " =================================\n";
             exit(0);
   }
   cout<<"\n";
 }
}
