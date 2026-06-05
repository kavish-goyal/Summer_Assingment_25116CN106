//Q3. Write a program to Print Factors of a number.

#include<iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter a number: ";
    cin >> n;

    while(i <= n)
    {
        if(n % i == 0)
        {
            cout << i << " ";
        }
        i++;
    }
    return 0;
}