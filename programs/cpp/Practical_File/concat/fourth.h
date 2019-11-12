//Program to create a Copy Constructor
#include<iostream>
using namespace std;

class booK
{
    public:
    string title, author;
    int pages;
    //Normal Constructor
    booK()
    {
        title = "Harry Potter";
        author = "J. K. Rowling";
        pages = 500;
    }
    //Copy Constructor
    booK(const booK &book)
    {
        title = book.title;
        author = book.author;
        pages = book.pages;
    }
};

int fourth()
{
    //Default Constructor
    booK book;
    cout<< "Normal Constructor"<< endl<< endl;
    cout<< "Book Title: "<< book.title<< endl;
    cout<< "Book Author: "<< book.author<< endl;
    cout<< "Book Pages: "<< book.pages<< endl<< endl;
    cout<< "Calling Copy Constructor now"<< endl<< endl;
    //Calling Copy Constructor now
    booK bookcopy = book;
    cout<< "Book Title: "<< bookcopy.title<< endl;
    cout<< "Book Author: "<< bookcopy.author<< endl;
    cout<< "Book Pages: "<< bookcopy.pages<< endl;
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
