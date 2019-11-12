#include<iostream>
#include<cstdlib>
#include"first.h"
#include"second.h"
#include"third.h"
#include"fourth.h"
#include"fifth.h"
#include"sixth.h"
#include"seventh_1.h"
#include"seventh_2.h"
#include"seventh_3.h"
#include"seventh_4.h"
#include"seventh_5.h"
#include"eighth_1.h"
#include"eighth_2.h"
#include"ninth.h"
#include"tenth.h"
#include"eleventh_1.h"
#include"eleventh_2.h"
#include"twelfth.h"
#include"thirteenth.h"
#include"fourteenth.h"
using namespace std;

int main()
{
    int choice;
    cout<< "///Main Program///\n";
    while(1)
    {
        cout<< "\nPrograms\n\n";
        cout<< "1.  for First Program\n";
        cout<< "2.  for Second Program\n";
        cout<< "3.  for Third Program\n";
        cout<< "4.  for Fourth Program\n";
        cout<< "5.  for Fifth Program\n";
        cout<< "6.  for Sixth Program\n";
        cout<< "7.  for Inheritance first type:   Single Inheritance\n";
        cout<< "8.  for Inheritance second type:  Multiple Inheritance\n";
        cout<< "9.  for Inheritance third type:   Multilevel Inheritance\n";
        cout<< "10. for Inheritance fourth type:  Hierarchical Inheritance\n";
        cout<< "11. for Inheritance fifth type:   Hybrid (Virtual) Inheritance\n";
        cout<< "12. for Friend Class Program\n";
        cout<< "13. for Friend Function Program\n";
        cout<< "14. for Ninth Program\n";
        cout<< "15. for Tenth Program\n";
        cout<< "16. for Template Function Program\n";
        cout<< "17. for Template Class Program\n";
        cout<< "18. for Twelfth Program\n";
        cout<< "19. for Thirteenth Program\n";
        cout<< "20. for Furteenth Program\n";
        cout<< "Anything else to exit!\n";
        cout<< "\nchoice: ";
        cin>> choice;
        switch(choice)
        {
            case 1:  first();
                     break;
            case 2:  second();
                     break;
            case 3:  third();
                     break;
            case 4:  fourth();
                     break;
            case 5:  fifth();
                     break;
            case 6:  sixth();
                     break;
            case 7:  seventh_1();
                     break;
            case 8:  seventh_2();
                     break;
            case 9:  seventh_3();
                     break;
            case 10: seventh_4();
                     break;
            case 11: seventh_5();
                     break;
            case 12: eighth_1();
                     break;
            case 13: eighth_2();
                     break;
            case 14: ninth();
                     break;
            case 15: tenth();
                     break;
            case 16: eleventh_1();
                     break;
            case 17: eleventh_2();
                     break;
            case 18: twelfth();
                     break;
            case 19: thirteenth();
                     break;
            case 20: fourteenth();
                     break;
            default: cout<< "So you decided to exit huh?\n";
                     cout<< "Exiting...\n";
                     exit(0);
        }
    }
}
