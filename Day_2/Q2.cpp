//Q2. Write a program to Reverse a number. 

#include <iostream>
using namespace std;
int main() 
{
    int n, reverse = 0,digit;

    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) 
    {
        digit = n % 10;             
        reverse = reverse*10 + digit; 
        n = n/10;                     
    }
    cout << "Reverse number = " << reverse;

}