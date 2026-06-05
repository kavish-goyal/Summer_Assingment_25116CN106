//Q4. Write a program to find largest prime factor.

#include<iostream>
using namespace std;
int main()
{
    int n, i = 2, largest = 1;

    cout << "Enter a number: ";
    cin >> n;

    while(i <= n)
    {
        if(n % i == 0)
        {
            int j = 2, isPrime = 1;
            while(j < i)
            {
                if(i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
                j++;
            }
            if(isPrime == 1)
            {
                largest = i;
            }
        }
        i++;
    }
    cout << "Largest prime factor is: " << largest;

    return 0;
}