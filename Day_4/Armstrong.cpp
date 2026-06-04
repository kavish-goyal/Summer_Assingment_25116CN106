#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, temp, digit,sum= 0,count = 0;

    cout << "Enter a number: ";
    cin >> n;
    temp = n;

    while(temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    temp = n;

    while(temp != 0)
    {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }
    if(sum == n)
    {
        cout << "Armstrong number";
    }
    else
    {
        cout << "Not Armstrong number";
    }
    return 0;
}