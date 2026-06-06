//Q2. Write a program to convert Binary to Decimal.

#include <iostream>
using namespace std;
int main() 
{    
    int binary, decimal = 0, base = 1, rem;

    cout << "Enter binary number: ";
    cin >> binary;

    while (binary > 0) 
    {
        rem = binary % 10;    
        decimal = decimal + rem * base;
        binary = binary / 10;       
        base = base * 2;          
    }
    cout << "Decimal = " << decimal;

    return 0;
}