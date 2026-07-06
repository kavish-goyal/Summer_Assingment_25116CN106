// BANK MANAGEMENT SYSTEM //

#include <iostream>
#include <string>
using namespace std;

int accNo[100];
string name[100];
float balance[100];
int total = 0;

void createAccount() {
    cout << "Enter Account Number: ";
    cin >> accNo[total];

    cout << "Enter Name: ";
    cin >> name[total];

    cout << "Enter Initial Balance: ";
    cin >> balance[total];

    total++;
    cout << "Account created successfully!\n";
}

void displayAccounts() {
    cout << "\n--- All Bank Accounts ---\n";
    for (int i = 0; i < total; i++) {
        cout << "Account No: " << accNo[i]
             << ", Name: " << name[i]
             << ", Balance: " << balance[i] << endl;
    }
}

int searchAccount(int number) {
    for (int i = 0; i < total; i++) {
        if (accNo[i] == number)
            return i;
    }
    return -1;
}

void depositMoney() {
    int number;
    float amount;

    cout << "Enter Account Number: ";
    cin >> number;

    int index = searchAccount(number);

    if (index == -1) {
        cout << "Account not found!\n";
    } else {
        cout << "Enter Amount to Deposit: ";
        cin >> amount;

        balance[index] += amount;
        cout << "Amount deposited successfully!\n";
        cout << "Updated Balance: " << balance[index] << endl;
    }
}

void withdrawMoney() {
    int number;
    float amount;

    cout << "Enter Account Number: ";
    cin >> number;

    int index = searchAccount(number);

    if (index == -1) {
        cout << "Account not found!\n";
    } else {
        cout << "Enter Amount to Withdraw: ";
        cin >> amount;

        if (amount > balance[index]) {
            cout << "Insufficient balance!\n";
        } else {
            balance[index] -= amount;
            cout << "Amount withdrawn successfully!\n";
            cout << "Updated Balance: " << balance[index] << endl;
        }
    }
}

void checkBalance() {
    int number;

    cout << "Enter Account Number: ";
    cin >> number;

    int index = searchAccount(number);

    if (index == -1) {
        cout << "Account not found!\n";
    } else {
        cout << "Account Holder: " << name[index] << endl;
        cout << "Current Balance: " << balance[index] << endl;
    }
}

void deleteAccount() {
    int number;

    cout << "Enter Account Number to Delete: ";
    cin >> number;

    int index = searchAccount(number);

    if (index == -1) {
        cout << "Account not found!\n";
    } else {
        for (int i = index; i < total - 1; i++) {
            accNo[i] = accNo[i + 1];
            name[i] = name[i + 1];
            balance[i] = balance[i + 1];
        }

        total--;
        cout << "Account deleted successfully!\n";
    }
}

int main() {
    int choice;

    do {
        cout << "\n========== BANK MANAGEMENT SYSTEM ==========\n";
        cout << "1. Create Account\n";
        cout << "2. Display All Accounts\n";
        cout << "3. Search / Check Balance\n";
        cout << "4. Deposit Money\n";
        cout << "5. Withdraw Money\n";
        cout << "6. Delete Account\n";
        cout << "7. Exit\n";
        cout << "===========================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createAccount();
                break;

            case 2:
                displayAccounts();
                break;

            case 3:
                checkBalance();
                break;

            case 4:
                depositMoney();
                break;

            case 5:
                withdrawMoney();
                break;

            case 6:
                deleteAccount();
                break;

            case 7:
                cout << "Thank you for using Bank Management System.\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 7);

    return 0;
}