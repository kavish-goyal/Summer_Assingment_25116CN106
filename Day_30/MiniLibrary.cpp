#include <iostream>
#include <string>
using namespace std;

int main() {
    string book[50], author[50];
    int n = 0, choice;

    do {
        cout << "\n--- Library Menu ---\n";
        cout << "1. Add Book\n2. Display Books\n3. Search Book\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter book name: ";
                cin >> book[n];
                cout << "Enter author name: ";
                cin >> author[n];
                n++;
                cout << "Book added.\n";
                break;

            case 2:
                cout << "\nLibrary Books:\n";
                for (int i = 0; i < n; i++) {
                    cout << i + 1 << ". " << book[i] << " by " << author[i] << endl;
                }
                break;

            case 3: {
                string searchBook;
                bool found = false;

                cout << "Enter book name to search: ";
                cin >> searchBook;

                for (int i = 0; i < n; i++) {
                    if (book[i] == searchBook) {
                        cout << "Book found. Author: " << author[i] << endl;
                        found = true;
                    }
                }

                if (!found) cout << "Book not found.\n";
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