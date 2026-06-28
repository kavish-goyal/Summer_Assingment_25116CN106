//Q1. Write a program to Create Library Management System.


#include <iostream>
using namespace std;

struct Book
{
    int bookId;
    string bookName;
    string authorName;
};

int main()
{
    Book b[50];
    int n;

    cout << "Enter number of books: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "\nEnter details of Book " << i + 1 << endl;
        cout << "Book ID: ";
        cin >> b[i].bookId;
        cout << "Book Name: ";
        cin >> b[i].bookName;
        cout << "Author Name: ";
        cin >> b[i].authorName;
    }

    cout << "\n===== Library Records =====\n";

    for(int i = 0; i < n; i++)
    {
        cout << "\nBook ID     : " << b[i].bookId;
        cout << "\nBook Name   : " << b[i].bookName;
        cout << "\nAuthor Name : " << b[i].authorName << endl;
    }

    return 0;
}
