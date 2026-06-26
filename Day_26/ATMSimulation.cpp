//Q3. Write a program to create ATM simulation.


#include<iostream>
using namespace std;

int main()
{
    int choice;
    int balance = 5000;
    int amount;

    cout << "1. Check Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if(choice == 1) 
    {
        cout << "Your balance is: " << balance;
    }
    else if(choice == 2) 
    {
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance = balance + amount;
        cout << "Updated balance: " << balance;
    }
    else if(choice == 3) 
    {
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if(amount <= balance) 
        {
            balance = balance - amount;
            cout << "Withdraw successful.\n";
            cout << "Updated balance: " << balance;
        }
        else {
            cout << "Insufficient balance.";
        }
    }
    else 
    {
        cout << "Invalid choice.";
    }

    return 0;
}