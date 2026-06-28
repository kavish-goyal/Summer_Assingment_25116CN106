//Q4. Write a program to Create Contact Management System.


#include <iostream>
using namespace std;

struct Contact
{
    string name;
    string phoneNo;
    string email;
};

int main()
{
    Contact c[50];
    int n;

    cout << "Enter number of contacts: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Contact " << i + 1 << endl;
        cout << "Name: ";
        cin >> c[i].name;
        cout << "Phone Number: ";
        cin >> c[i].phoneNo;
        cout << "Email: ";
        cin >> c[i].email;
    }

    cout << "\n===== Contact Records =====\n";

    for(int i = 0; i < n; i++)
    {
        cout << "\nName         : " << c[i].name;
        cout << "\nPhone Number : " << c[i].phoneNo;
        cout << "\nEmail        : " << c[i].email << endl;
    }

    return 0;
}