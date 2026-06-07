//Q1. Write a program to Recursive Factorial.

#include <iostream>
using namespace std;
int factorial(int n) 
{
    if (n == 0 || n == 1) 
    {     
        return 1;
    }
    return n * factorial(n - 1); 
}
int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) 
    {
        cout << "Factorial is not possible for negative numbers";
    } 
    else 
    {
        cout << "Factorial of " << n << " = " << factorial(n);
    }
    return 0;
}