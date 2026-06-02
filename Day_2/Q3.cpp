//Q3. Write a program to Find product of digits.

#include <iostream>
using namespace std;
int main() 
{
    int n, product = 1;
    cout << "Enter a number: ";
    cin >> n;

    if (n == 0) 
    {
        product = 0;
    }

    while (n > 0)
    {
        int digit = n % 10;        
        product = product * digit; 
        n = n / 10;                
    }

    cout << "Product of digits =" << product;

}