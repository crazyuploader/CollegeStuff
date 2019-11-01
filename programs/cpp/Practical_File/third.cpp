//Program to create a Constructor and Destructor
#include<iostream>
using namespace std;

class Book
{
    public:
        string title, author;
        int pages;
        //Default Constructor
        Book()
        {
            cout<< "Default Constructor called"<< endl<< endl;
            title = "Harry Potter";
            author = "J. K. Rowling";
            pages = 500;
        }
        //Parametrized Constructor
        Book(string aTitle, string aAuthor, int aPages)
        {
            cout<< "Parametrized Constructor called"<< endl<< endl;
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
        //Destructor
        ~Book()
        {
            cout<< "Destructor called for Book "<< title<< endl;
        }
};

int main()
{
    //Default Constructor
    Book book1;
    cout<< "Book Title: "<< book1.title<< endl;
    cout<< "Book Author: "<< book1.author<< endl;
    cout<< "Book Pages: "<< book1.pages<< endl<< endl;
    //Parametrized Constructor
    Book book2("War and Peace", "Leo Tolstoy", 499);
    cout<< "Book Title: "<< book2.title<< endl;
    cout<< "Book Author: "<< book2.author<< endl;
    cout<< "Book Pages: "<< book2.pages<< endl;
    cout<< "\nCreated by Jugal Kishore -- 2019\n\n";
    return 0;
}
