#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int gen()
{
    srand((unsigned)time(NULL));
    int number=1;
    while(number%100!=0)
    {
        number=rand()%1000+1;
    }
    return number;
}

int main()
{
    int temp;
    string name;
    cout<< "///Fun///"<< endl<< endl;
    cout<< "Enter your First Name: ";
    cin>> name;
    cout<< "\nHi "<< name<< "!"<< endl<< endl;
    cout<< "Let's Play?"<< endl<< endl;
    cout<< "Press 1 to Continue or 2 to Exit"<< endl;
    cin>> temp;
    if(temp==2)
    {
        cout<< "\nOff my program you go!\nExiting...";
        exit(0);
    }
    int secret = gen();
    cout<< "\nOkay, here it is\nJust do as I say - \n\n";
    cout<< "1. Think of a Number.\n";
    cout<< "2. Double it.\n";
    cout<< "3. Add --->> "<< secret<< " in it.\n";
    cout<< "4. Now half the number.\n";
    cout<< "5. Subtract the original number you had thought of.\n\n";
    cout<< "Final Answer is: --->> "<< secret/2;
    cout<< "\nBye Bye "<< name;
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
