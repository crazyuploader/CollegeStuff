//Program to create a Copy Constructor
#include<iostream>
using namespace std;

class Book
{
    public:
    string title, author;
    int pages;
    //Normal Constructor
    Book()
    {
        title = "Harry Potter";
        author = "J. K. Rowling";
        pages = 500;
    }
    //Copy Constructor
    Book(const Book &book)
    {
        title = book.title;
        author = book.author;
        pages = book.pages;
    }
};

int main()
{
    //Default Constructor
    Book book;
    cout<< "Normal Constructor"<< endl<< endl;
    cout<< "Book Title: "<< book.title<< endl;
    cout<< "Book Author: "<< book.author<< endl;
    cout<< "Book Pages: "<< book.pages<< endl<< endl;
    cout<< "Calling Copy Constructor now"<< endl<< endl;
    //Calling Copy Constructor now
    Book bookcopy = book;
    cout<< "Book Title: "<< bookcopy.title<< endl;
    cout<< "Book Author: "<< bookcopy.author<< endl;
    cout<< "Book Pages: "<< bookcopy.pages<< endl;
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
