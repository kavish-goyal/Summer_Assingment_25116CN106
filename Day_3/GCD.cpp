//Q3. Write a program to Find GCD of two numbers.

#include <iostream>
using namespace std;

int main()
{
    int a, b,i=1, gcd=1;
    
    cout << "Enter two numbers: ";
    cin >> a >> b;

    while(i<= a && i<= b)
    {
        if(a % i== 0 && b % i== 0)
        {
            gcd= i;
        }
        i+i+1;
    }
    cout << "GCD is:"<< gcd << endl;

    return 0;
}