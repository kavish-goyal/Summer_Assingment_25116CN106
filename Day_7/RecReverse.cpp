//Q4. Write a program to Recursive Reverse.

#include <iostream>
using namespace std;
int reverseNumber(int n, int rev) 
{
    if (n == 0) 
    {        
        return rev;
    }
    int digit = n % 10;
    rev = rev * 10 + digit;

    return reverseNumber(n / 10, rev);
}

int main() 
{
    int n;

    cout << "Enter a number: ";
    cin >> n;
    int sign = 1;

    if (n < 0) {
        sign = -1;
        n = -n;
    }
    int ans = reverseNumber(n, 0);

    cout << "Reverse number = " << sign * ans;

    return 0;
}