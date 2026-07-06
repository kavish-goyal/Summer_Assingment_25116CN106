#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    int choice;

    cout << "Enter a string: ";
    getline(cin, str);

    do {
        cout << "\n--- String Menu ---\n";
        cout << "1. Length\n2. Reverse\n3. Uppercase\n4. Lowercase\n5. Display\n6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Length = " << str.length() << endl;
                break;

            case 2: {
                string temp = str;
                reverse(temp.begin(), temp.end());
                cout << "Reversed string = " << temp << endl;
                break;
            }

            case 3: {
                string temp = str;
                for (char &ch : temp) ch = toupper(ch);
                cout << "Uppercase = " << temp << endl;
                break;
            }

            case 4: {
                string temp = str;
                for (char &ch : temp) ch = tolower(ch);
                cout << "Lowercase = " << temp << endl;
                break;
            }

            case 5:
                cout << "String = " << str << endl;
                break;

            case 6:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 6);

    return 0;
}