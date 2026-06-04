//Q1. Write a program to generate fibonacci series.

#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    int first = 0, second = 1, next;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    while(i <= n)
    {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
        i=i+1;
    }
    return 0;
}