//Q3. Write a program to recursive Sum Of Digits.

#include <iostream>
using namespace std;
int sumDigits(int n) 
{
    if (n == 0) 
    {    
        return 0;
    }
    return (n % 10) + sumDigits(n / 10);
}

int main() 
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) 
    {
        n = -n;   
    }
    cout << "Sum of digits = " <<sumDigits(n);

    return 0;
}