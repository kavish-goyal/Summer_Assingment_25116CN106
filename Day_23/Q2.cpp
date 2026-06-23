//Q2. Program to Find First Repeating Character

#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; i < str.length(); i++) 
    {
        for (int j = i+1; j< str.length(); j++) 
        {
            if (str[i] == str[j]) 
            {
                cout << "First Repeating Character = " << str[i];
                return 0;
            }
        }
    }

    cout << "No Repeating Character Found";
    return 0;
}