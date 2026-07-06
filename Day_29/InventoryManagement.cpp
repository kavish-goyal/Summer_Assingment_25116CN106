#include <iostream>
#include <string>
using namespace std;

int main() {
    string name[50];
    int quantity[50], n = 0, choice;

    do {
        cout << "\n--- Inventory Menu ---\n";
        cout << "1. Add Item\n2. Display Items\n3. Search Item\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter item name: ";
                cin >> name[n];
                cout << "Enter quantity: ";
                cin >> quantity[n];
                n++;
                cout << "Item added.\n";
                break;

            case 2:
                cout << "\nInventory List:\n";
                for (int i = 0; i < n; i++) {
                    cout << i + 1 << ". " << name[i] << " - Quantity: " << quantity[i] << endl;
                }
                break;

            case 3: {
                string searchName;
                bool found = false;
                cout << "Enter item name to search: ";
                cin >> searchName;

                for (int i = 0; i < n; i++) {
                    if (name[i] == searchName) {
                        cout << "Item found. Quantity = " << quantity[i] << endl;
                        found = true;
                    }
                }

                if (!found) cout << "Item not found.\n";
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