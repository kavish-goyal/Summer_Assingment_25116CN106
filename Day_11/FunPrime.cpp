#include<iostream>
using namespace std;
int isPrime(int n)
{
    if(n <=1)
        return 0;

    int i =2;
    while(i <n)
    {
        if(n % i==0)
        return 0;
        i++;
    }
    return 1;
}
int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(isPrime(n) ==1)
        cout << n<< " is Prime";
    else
        cout << n<< " is Not Prime";

    return 0;
}