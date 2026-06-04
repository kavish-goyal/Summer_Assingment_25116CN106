//Q2. Write a program to Find Nth Fibonacci term.

#include<iostream>
using namespace std;
int main()
{
    int n, i=3;
    cout << "Enter n:";
    cin >> n;

    int first=0, second = 1, next;
    if(n== 1)
    {
        cout <<"Nth Fibonacci number is:" << first;
    }
    else if(n== 2)
    {
        cout <<"Nth Fibonacci number is: "<< second;
    }
    else
    {
        while(i<=n)
        {
            next = first + second;
            first = second;
            second = next;
            i=i+1;
        }

        cout << "Nth Fibonacci number is: " << second;
    }
    return 0;
}