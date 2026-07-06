#include <iostream>
#include <string>
using namespace std;

int main() {
    string name[50];
    int id[50];
    float salary[50];
    int n = 0, choice;

    do {
        cout << "\n--- Employee Menu ---\n";
        cout << "1. Add Employee\n2. Display Employees\n3. Search Employee\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter employee ID: ";
                cin >> id[n];
                cout << "Enter employee name: ";
                cin >> name[n];
                cout << "Enter salary: ";
                cin >> salary[n];
                n++;
                cout << "Employee added.\n";
                break;

            case 2:
                cout << "\nEmployee Records:\n";
                for (int i = 0; i < n; i++) {
                    cout << "ID: " << id[i]
                         << ", Name: " << name[i]
                         << ", Salary: " << salary[i] << endl;
                }
                break;

            case 3: {
                int searchId;
                bool found = false;

                cout << "Enter employee ID to search: ";
                cin >> searchId;

                for (int i = 0; i < n; i++) {
                    if (id[i] == searchId) {
                        cout << "Name: " << name[i] << ", Salary: " << salary[i] << endl;
                        found = true;
                    }
                }

                if (!found) cout << "Employee not found.\n";
                break;
            }

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 4);

    return 0;
}