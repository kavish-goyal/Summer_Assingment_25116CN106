#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, pos, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    do {
        cout << "\n--- Array Menu ---\n";
        cout << "1. Display\n2. Insert\n3. Delete\n4. Search\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Array: ";
                for (int i = 0; i < n; i++) cout << arr[i] << " ";
                cout << endl;
                break;

            case 2:
                cout << "Enter position and value: ";
                cin >> pos >> value;
                if (pos < 0 || pos > n) cout << "Invalid position.\n";
                else {
                    for (int i = n; i > pos; i--) arr[i] = arr[i - 1];
                    arr[pos] = value;
                    n++;
                    cout << "Inserted successfully.\n";
                }
                break;

            case 3:
                cout << "Enter position to delete: ";
                cin >> pos;
                if (pos < 0 || pos >= n) cout << "Invalid position.\n";
                else {
                    for (int i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
                    n--;
                    cout << "Deleted successfully.\n";
                }
                break;

            case 4:
                cout << "Enter value to search: ";
                cin >> value;
                {
                    bool found = false;
                    for (int i = 0; i < n; i++) {
                        if (arr[i] == value) {
                            cout << "Found at position " << i << endl;
                            found = true;
                        }
                    }
                    if (!found) cout << "Not found.\n";
                }
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 5);

    return 0;
}