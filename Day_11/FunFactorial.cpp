//Q4. Write a Program to Write Function to find Factorial.

#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    int i = 1;

    while(i <= n)
    {
        fact = fact * i;
        i++;
    }
    return fact;
}
int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial = " << factorial(n);

    return 0;
}