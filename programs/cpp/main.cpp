#include<iostream>
#include<cstdlib>
#include"add_2.h"
#include"alpha_tri.h"
#include"armstrong.h"
#include"ascii.h"
#include"average.h"
#include"base_exponent_power.h"
#include"calc_class.h"
#include"calc.h"
#include"division_2.h"
#include"even_odd.h"
#include"factorial.h"
#include"factors_of_numbers.h"
#include"greater_2.h"
#include"greater_3.h"
#include"greater_template.h"
#include"multiplication_2.h"
#include"number_conversion.h"
#include"number_swap.h"
#include"palindrome.h"
#include"prime.h"
#include"reverse.h"
#include"sizeof_data_types.h"
#include"some_info.h"
#include"subtract_2.h"
#include"sum_digits.h"
#include"table.h"
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int footer()
{
    cout<< "\n";
    cout<< TAB<< " =================================\n";
    cout<< TAB<< "||Created by Jugal Kishore -- 2019||"<< NEWLINE;
    cout<< TAB<< " =================================\n";
    return 0;
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
   cout<< "26. for Program to Show Greater Number using Templates\n";
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
     case 26: greater_template();
              break;
     default: cout<< "Exiting...\n";
              footer();
              exit(0);
   }
   cout<<"\n";
 }
}
