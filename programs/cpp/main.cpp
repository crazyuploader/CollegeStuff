#include<iostream>
#include<cstdlib>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int add_2()
{
    int a,b;
    cout<< "///Program to Add two Number///"<<endl<<endl<<endl;
    cout<< "Enter First Number: ";
    cin>> a;
    cout<< "Enter Second Number: ";
    cin>> b;
    cout<< "Addition of entered number is = "<< a+b;
    return 0;
}

int average()
{
    int a[20], i, n;
    float avg = 0;
    cout<< "///Program to Display Average of Entered n Numbers///"<< endl<< endl<< endl;
    cout<< "Enter Number of Numbers you want to get Average of: ";
    cin>> n;
    for(i=1;i<=n;i++)
        {
            cout << i << " Number: ";
            cin >> a[i];
            avg = avg + a[i];
        }
    cout<< "Average of "<< n<< " Number(s) is = "<< avg/n;
    return 0;
}

int base_exponent_power()
{
    int base,exponent;
    long long result=1;
    cout<< "///Program to Calculate Power of a Number///"<<endl<<endl<<endl;
    cout<< "Enter Base: ";
    cin>> base;
    cout<< "Enter Exponent: ";
    cin>> exponent;
    while(exponent!=0)
    {
        result*=base;
        --exponent;
    }
    cout<< "Answer = "<< result;
    return 0;
}

int division_2()
{
    int a, b;
    cout<< "///Program to divide two numbers///"<< endl<< endl<< endl;
    cout<< "\nEnter Dividend: ";
    cin>> a;
    cout<< "\nEnter Divisor: ";
    cin>> b;
    cout<< "\nQuotient  = "<< a/b<< endl;
    cout<< "\nRemainder = "<< a%b<< endl;
    return 0;
}

int even_odd()
{
    int a;
    cout<< "///Program to Display Whether or not Entered Number is Even or Odd///"<< endl<< endl<< endl;
    cout<< "Enter number: ";
    cin>> a;
    if(a%2==0) //if-else condition to check whether or not entered number leaves 0 as its remainder
        {
            cout<< "\nEntered Number "<< a<< " is Even.\n";
        }
    else
        {
            cout<< "\nEntered Number "<< a<< " is Odd.\n";
        }
    /*Alternative way to do the same work without if-else condition
    (a%2==0)?cout<< "\nEntered number "<< a<< " is even.\n":cout<< "\nEntered number "<< a<< " is odd.\n";
    */
    return 0;
}

int factorial()
{
    int n,i,fac=1;
    cout<< "///Program to Display Factorial of an Entered Number///"<< endl<< endl<< endl;
    cout<< "Enter Number: ";
    cin>> n;
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    cout<< "Factorial of "<< n<< " is = "<< fac;
    return 0;
}

int greater_2()
{
    int a, b;
    cout<< "///Program to Display Greater Number///"<< endl<< endl<< endl;
    cout<< "Enter First Number: ";
    cin>> a;
    cout<< "Enter Second Number: ";
    cin>> b;
    (a==b)?cout<< "Entered Number are Equal":(a>b)?cout<<"Greater Number is = "<<a:cout<< "Greater Number is = "<< b;
    return 0;
}

int greater_3()
{
    int a,b,c;
    cout<< "///Program to Display Greatest Number among 3 Number(s)///"<< endl<< endl<< endl;
    cout<< "Enter First Number: ";
    cin>> a;
    cout<< "Enter Second Number: ";
    cin>> b;
    cout<< "Enter Third Number: ";
    cin>> c;
    if(a>b)
        {
            if(a>c)
                {
                    cout << "Greatest Number is = " << a;
                }
            else
                {
                    cout << "Greatest Number is = " << c;
                }
        }
    else
        {
            if(b>c)
                {
                    cout << "Greatest Number is = " << b;
                }
            else
                {
                    cout << "Greatest Number is = " << c;
                }
        }
    return 0;
}

int reverse()
{
    int a,b=0,c;
    cout<< "///Program to Reverse Number///"<< endl<< endl<< endl;
    cout<< "Enter the Number to Reverse: ";
    cin>> a;
    while(a>0)
        {
            c=a%10;
            b=b*10+c;
            a=a/10;
        }
    cout<< "Revered Number is = "<< b;
    return 0;
}

int palindrome()
{
    int a,b=0,c,pal;
    cout<< "///Program to Check Whether or not Entered Number is Palindrome///"<< endl<< endl<< endl;
    cout<< "Enter the Number: ";
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
    cout<< "///Program to Check Prime Number///"<< endl<< endl<< endl;
    cout<< "Enter the Number: ";
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
    cout<< "///Program to Subtract two Number(s)///"<<endl<<endl<<endl;
    cout<< "Enter First Number: ";
    cin>> a;
    cout<< "Enter Second Number: ";
    cin>> b;
    cout<< "The Difference of these two Entered Number(s) is = "<< a-b;
    return 0;

}

int table()
{
    int a,i;
    cout<< "///Program to Display Table of Entered Number///"<<endl<<endl<<endl;
    cout<< "Enter Number: ";
    cin>> a;
    for(i=1;i<=10;++i)
        {
          cout<< "\n"<< a<< " * "<< i<< " = "<< a*i;
        }
    return 0;
}

int multiplication_2()
{
    int a,b;
    cout<< "///Program to Display Multiplication of two Entered Number(s)///"<<endl<<endl<<endl;
    cout<< "Enter First Number: ";
    cin>> a;
    cout<< "Enter Second Number: ";
    cin>> b;
    cout<< "Answer is "<< a*b;
    return 0;
}

int armstrong()
{
    int num,i,r,temp,sum=0;
    cout<< "///Program to Check Whether or not Entered Number is Armstrong///"<< endl<< endl<< endl;
    cout<< "Enter Number: ";
    cin>> num;
    temp=num;
    while(num>0)
    {
        r=num%10;
        sum=sum+(r*r*r);
        num=num/10;
    }
    if(temp==sum) //If-else condition to whether or not the number is equal to the sum of cubes of its digits
    {
        cout<< "\nEntered Number "<< temp<< " is Armstrong.\n";
    }
    else
    {
        cout<< "\nEntered Number "<< temp<< " is not Armstrong.\n";
    }
    /* Alternative way to do the same work without if-else condition
    (temp==sum)?cout<< "\nEntered number "<< temp<< " is Armstrong.\n":cout<< "\nEntered number "<< temp<< " is not Armstrong.\n";
    */
    return 0;
}

int sum_digits()
{
    int num,sum=0,r,temp;
    cout<< "///Program to Display Sum of its Digit(s)///"<< endl<< endl<< endl;
    cout<< "Enter Number: ";
    cin>> num;
    temp=num;
    while(num!=0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    cout<< "\nSum of Digit(s) of Entered Number "<< temp<< " is "<< sum;
    return 0;
}

int number_swap()
{
    int choice,a,b,c;
    cout<< "///Program to Swapping of two Entered Number(s)///"<< endl<< endl<< endl;
    while(1)
    {
        cout<< "\nchoices\n";
        cout<< "\n1. for Swapping using third variable";
        cout<< "\n2. for Swapping using + and -";
        cout<< "\n3. for Swapping using * and /";
        cout<< "\nAnything else and off you go!\n";
        cout<< "\nchoice: ";
        cin>> choice;
        switch(choice)
        {
            case 1:  cout<< "\nUsing third variable";
                     cout<< "\nEnter Number a: ";
                     cin>> a;
                     cout<< "\nEnter Number b: ";
                     cin>> b;
                     c=a;
                     a=b;
                     b=c;
                     cout<< "After Swapping a is = "<< a<< " and b is = "<<b;
                     break;
            case 2:  cout<< "\nUsing + and -"<< endl;
                     cout<< "\nEnter Number a: ";
                     cin>> a;
                     cout<< "\nEnter Number b: ";
                     cin>> b;
                     a=a+b;
                     b=a-b;
                     a=a-b;
                     cout<< "After Swapping a is = "<< a<< " and b is = "<< b;
                     break;
            case 3:  cout<< "\nUsing * and /"<< endl;
                     cout<< "\nEnter Number a: ";
                     cin>> a;
                     cout<< "\nEnter Number b: ";
                     cin>> b;
                     a=a*b;
                     b=a/b;
                     a=a/b;
                     cout<< "After Swapping a is = "<< a<< " and b is = "<< b;
                     break;
            default: cout<< "Exiting...\n\n";
                     cout<< TAB<< " =================================\n";
                     cout<< TAB<< "||Created by Jugal Kishore -- 2019||"<< NEWLINE;
                     cout<< TAB<< " =================================\n";
                     exit(0);
        }
    }
    return 0;
}

int convertDecimalToBinary()
{
    int i,num,deci_num,r[10],j;
    cout<< "\nConverting Decimal Number to Binary Number"<< endl<< endl;
    cout<< "\nEnter Decimal Number: ";
    cin>> num;
    deci_num=num;
    for(i=0;num>0;i++)
    {
        r[i]=num%2;
        num=num/2;
    }
    cout<< "Entered Decimal Number is = "<< deci_num<< endl;
    cout<< "Its Binary equivalent is = ";
    for(j=i-1;j>=0;j--)
        {
            cout<< r[j];
        }
    return 0;
}

int convertBinaryToDecimal()
{
    long long num,bin_num;
    int i,r=0,deci=0,base=1;
    cout<< "\nConverting Binary Number to Decimal Number"<< endl<< endl;
    cout<< "\nEnter binary number(1s and 0s): ";
    cin>> num;
    bin_num=num;
    for(i=0;num>0;i++)
    {
        r=num%10;
        deci=deci+r*base;
        num=num/10;
        base=base*2;
    }
    cout << "Entered Binary Number is = "<< bin_num<< endl;
    cout << "Its Decimal Equivalent is = "<< deci;
    return 0;
}

int number_conversion()
{
    long long n;
    int choice;
    cout<< "///Program to convert Numbers///"<< endl<< endl<< endl;
    while(1)
    {
        cout<< "\nchoices\n";
        cout<< "\n1. for Decimal to Binary";
        cout<< "\n2. for Binary to Decimal";
        cout<< "\nAnything else and off you go!\n";
        cout<< "\nchoice: ";
        cin>> choice;
        switch(choice)
        {
            case 1:  convertDecimalToBinary();
                     break;
            case 2:  convertBinaryToDecimal();
                     break;
            default: cout<< "Exiting...\n\n";
                     cout<< TAB<< " =================================\n";
                     cout<< TAB<< "||Created by Jugal Kishore -- 2019||"<< NEWLINE;
                     cout<< TAB<< " =================================\n";
                     exit(0);
        }
    }
}

int sizeof_data_types()
{
    cout<< "///Program to Display various size(s) of Data Type(s) in your System///"<< endl<< endl<< endl;
    cout<< "Size of 'char' Type is "<< sizeof(char)<< " byte(s).\n";
    cout<< "Size of 'int' Type is "<< sizeof(int)<< " byte(s).\n";
    cout<< "Size of 'float' Type is "<< sizeof(float)<< " byte(s).\n";
    cout<< "Size of 'double' Type is "<< sizeof(double)<< " byte(s).\n";
    return 0;
}

int ascii()
{
    int choice,a;
    cout<< "///Program to Display all the ASCII Code(s)///"<< endl<< endl<< endl;
    while(1)
    {
        cout<< "\nchoices\n";
        cout<< "\n1. for all the ASCII Code(s)\n";
        cout<< "\n2. for the ASCII Code(s) you can see and make sense of\n";
        cout<< "\nAnything else and off you go!\n";
        cout<< "\nchoice: ";
        cin>> choice;
        switch(choice)
        {
            case 1:  a=0;
                     while(a!=127)
                         {
                             cout<< "\nASCII Code for "<< a<< " is "<< char(a);
                             a++;
                         }
                     cout<< endl;
                     break;
            case 2:  a=32;
                     while(a!=127)
                         {
                             cout<< "\nASCII Code for "<< a<< " is "<< char(a);
                             a++;
                         }
                     cout<< endl;
                     break;
            default: cout<< "Exiting...\n\n";
                     cout<< TAB<< " =================================\n";
                     cout<< TAB<< "||Created by Jugal Kishore -- 2019||"<< NEWLINE;
                     cout<< TAB<< " =================================\n";
                     exit(0);
        }
    }
    return 0;
}

int factors_of_numbers()
{
    int a,i;
    cout<< "///Program to Display all the Factors an Entered Number///"<< endl<< endl<< endl;
    cout<< "Enter number: ";
    cin>> a;
    cout<< "\nFactors of Entered Number "<< a<< " is:\n\n";
    for(i=1;i<=a;i++)
        {
            if(a%i==0)
            {
                cout<< " "<< i<< " ";
            }
        }
    return 0;
}

int alpha_tri()
{
    char ch;
    int i,j,k,m;
    cout<< "///Program to display Alphabet Triangle///"<< endl<< endl<< endl;
    cout<< "Enter any Character: ";
    cin>> ch;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
            cout<< " ";
        for(k=1;k<=i;k++)
            cout<<ch++;
            ch--;
        for(m=1;m<i;m++)
            cout<< --ch;
        cout<< "\n";
        ch;
    }
    return 0;
}

int some_info()
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
                    cout<< TAB<< " =================================\n";
                    cout<< TAB<< "||Created by Jugal Kishore -- 2019||"<< NEWLINE;
                    cout<< TAB<< " =================================\n";
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
                        cout<< TAB<< " =================================\n";
                        cout<< TAB<< "||Created by Jugal Kishore -- 2019||"<< NEWLINE;
                        cout<< TAB<< " =================================\n";
                        exit(0);
                    }
            }
        else
        {
            cout<< "\nUh-huh! You haven't pressed 1 or 2, have you?\n\nExiting!";
            cout<< TAB<< " =================================\n";
            cout<< TAB<< "||Created by Jugal Kishore -- 2019||"<< NEWLINE;
            cout<< TAB<< " =================================\n";
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
    return 0;
}

int calc()
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
                          cout<< TAB<< " =================================\n";
                          cout<< TAB<< "||Created by Jugal Kishore -- 2019||"<< NEWLINE;
                          cout<< TAB<< " =================================\n";
                          exit(0);
                      }
                      cout<< "\nDivision of "<< a<< " and "<< b<< " is = "<< a/b<< endl;
                      break;
            case '%': if(b==0)
                      {
                          cout<< "\nYou can't divide "<< a<< " by 0!";
                          cout<< TAB<< " =================================\n";
                          cout<< TAB<< "||Created by Jugal Kishore -- 2019||"<< NEWLINE;
                          cout<< TAB<< " =================================\n";
                          exit(0);
                      }
                      cout<< "\nModulus of "<< a<< " and "<< b<< " is = "<< a%b<< endl;
                      break;
            default:  cout<< "\nUh-huh! You haven't entered the right option, have you?\n\nExiting\n!";
                      cout<< TAB<< " =================================\n";
                      cout<< TAB<< "||Created by Jugal Kishore -- 2019||"<< NEWLINE;
                      cout<< TAB<< " =================================\n";
                      exit(0);

            }
    }
    return 0;
}

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
            default:  cout<< "Exiting!\n";
                      cout<< TAB<< " =================================\n";
                      cout<< TAB<< "||Created by Jugal Kishore -- 2019||"<< NEWLINE;
                      cout<< TAB<< " =================================\n";
                      exit(0);
        }
    }
}

int main()
{
 int choice;
 cout<< "///Main Program///\n";
 while(1)
 {
   cout<< "\nPrograms\n\n";
   cout<< "1.  for Program to Add two Number(s)\n";
   cout<< "2.  for Program to Subtract two Number(s)\n";
   cout<< "3.  for Program to Multiply two number(s)\n";
   cout<< "4.  for Program to Divide two Number(s)\n";
   cout<< "5.  for Program to Check Whether the Entered number is Even or Odd\n";
   cout<< "6.  for Program to Calculate Factorial of an Entered Number\n";
   cout<< "7.  for Program to Show Greatest Number from 2 Number(s)\n";
   cout<< "8.  for Program to Show Greatest Number from 3 Number(s)\n";
   cout<< "9.  for Program to Calculate Power of a Number\n";
   cout<< "10. for Program to Reverse Entered Number\n";
   cout<< "11. for Program to Check if Entered Number is Palindrome or not\n";
   cout<< "12. for Program to Get Average of Entered Number(s)\n";
   cout<< "13. for Program to Show Table of Entered Number\n";
   cout<< "14. for Program to Check if Entered Number is Prime or not\n";
   cout<< "15. for Program to Check Whether or not Entered Number is Armstrong\n";
   cout<< "16. for Program to Display Sum of its Digit(s)\n";
   cout<< "17. for Program to Swap two Entered Numbers using three way(s)\n";
   cout<< "18. for Program to Convert Number(s)\n";
   cout<< "19. for Program to Display Sizes of various Data type(s) in your system\n";
   cout<< "20. for Program to Show all the ASCII Code(s)\n";
   cout<< "21. for Program to Show all the Factors of an Entered Number\n";
   cout<< "22. for Program to Display Alphabet Triangle\n";
   cout<< "23. for Program to Displaying Entered Details using String\n";
   cout<< "24. for Program to Do Basic Calculations\n";
   cout<< "25. for Program to Do Basic Calculations using Class and object\n";
   cout<< "Anything else to exit!\n";
   cout<< "\nchoice: ";
   cin>> choice;
   switch(choice)
   {
     case 1:  add_2();
              break;
     case 2:  subtract_2();
              break;
     case 3:  multiplication_2();
              break;
     case 4:  division_2();
              break;
     case 5:  even_odd();
              break;
     case 6:  factorial();
              break;
     case 7:  greater_2();
              break;
     case 8:  greater_3();
              break;
     case 9:  base_exponent_power();
              break;
     case 10: reverse();
              break;
     case 11: palindrome();
              break;
     case 12: average();
              break;
     case 13: table();
              break;
     case 14: prime();
              break;
     case 15: armstrong();
              break;
     case 16: sum_digits();
              break;
     case 17: number_swap();
              break;
     case 18: number_conversion();
              break;
     case 19: sizeof_data_types();
              break;
     case 20: ascii();
              break;
     case 21: factors_of_numbers();
              break;
     case 22: alpha_tri();
              break;
     case 23: some_info();
              break;
     case 24: calc();
              break;
     case 25: calc_class();
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
