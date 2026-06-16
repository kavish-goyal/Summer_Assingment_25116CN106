//Q1. Write a program to find missing number in array.


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n-1];
    cout << "Enter "<< n-1 << " numbers: ";

    int sum = 0;
    for(int i = 0;i < n-1;i++)
    {
        cin >> arr[i];
        sum = sum +arr[i];
    }
    int total = n*(n + 1) / 2;
    cout << "Missing number is: " << total - sum;

    return 0;
}