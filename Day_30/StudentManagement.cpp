#include <iostream>
#include <string>
using namespace std;

int main() {
    string name[50];
    int roll[50];
    float marks[50];
    int n = 0, choice;

    do {
        cout << "\n--- Student Record Menu ---\n";
        cout << "1. Add Student\n2. Display Students\n3. Search Student\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter roll number: ";
                cin >> roll[n];
                cout << "Enter name: ";
                cin >> name[n];
                cout << "Enter marks: ";
                cin >> marks[n];
                n++;
                cout << "Student added.\n";
                break;

            case 2:
                cout << "\nStudent Records:\n";
                for (int i = 0; i < n; i++) {
                    cout << "Roll: " << roll[i]
                         << ", Name: " << name[i]
                         << ", Marks: " << marks[i] << endl;
                }
                break;

            case 3: {
                int r;
                bool found = false;
                cout << "Enter roll number to search: ";
                cin >> r;

                for (int i = 0; i < n; i++) {
                    if (roll[i] == r) {
                        cout << "Name: " << name[i] << ", Marks: " << marks[i] << endl;
                        found = true;
                    }
                }

                if (!found) cout << "Student not found.\n";
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