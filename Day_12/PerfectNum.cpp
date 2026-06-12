//Q4. Write a program to write a function for perfect number.


#include <iostream>
using namespace std;
int perfect(int n)
{
    int sum = 0;

    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum+i;
        }    
    }

    if(sum ==n)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    if(perfect(n) == 1)
        cout << "Perfect Number";
    else
        cout << "Not Perfect Number";

    return 0;
}