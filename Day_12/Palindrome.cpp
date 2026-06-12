//Q1. Write a program to write function for Palindrome.

#include <iostream>
using namespace std;
int palindrome(int n)
{
    int original = n;
    int rev = 0;

    while(n > 0)
    {
        int digit = n%10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if(original == rev)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    if(palindrome(n) == 1)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}