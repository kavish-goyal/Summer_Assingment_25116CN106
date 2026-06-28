//Q2. Write a program to Create Bank Account System.


#include <iostream>
using namespace std;

struct Bank
{
    int accountNo;
    string holderName;
    float balance;
};

int main()
{
    Bank b[50];
    int n;

    cout << "Enter number of accounts: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Account " << i + 1 << endl;
        cout << "Account Number: ";
        cin >> b[i].accountNo;
        cout << "Account Holder Name: ";
        cin >> b[i].holderName;
        cout << "Balance: ";
        cin >> b[i].balance;
    }

    cout << "\n===== Bank Account Records =====\n";

    for(int i = 0; i < n; i++)
    {
        cout << "\nAccount Number      : " << b[i].accountNo;
        cout << "\nAccount Holder Name : " << b[i].holderName;
        cout << "\nBalance             : " << b[i].balance << endl;
    }

    return 0;
}