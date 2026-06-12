//Q2. Write a program to write function to check armstrong.

#include <iostream>
using namespace std;
int armstrong(int n)
{
    int original = n;
    int sum = 0;

    while(n>0)
    {
        int digit = n % 10;
        sum = sum +digit*digit * digit;
        n = n/ 10;
    }

    if(original ==sum)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    if(armstrong(n) == 1)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}