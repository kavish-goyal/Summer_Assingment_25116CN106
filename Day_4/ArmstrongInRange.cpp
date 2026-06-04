#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int start, end;

    cout << "Enter start: ";
    cin >> start;

    cout << "Enter end: ";
    cin >> end;
    int n = start;

    while(n <= end)
    {
        int temp = n;
        int count = 0;
        int sum = 0;

        while(temp!= 0)
        {
            count++;
            temp = temp / 10;
        }
        temp = n;

        while(temp != 0)
        {
            int digit= temp % 10;
            sum = sum + pow(digit, count);
            temp = temp / 10;
        }
        if(sum == n)
        {
            cout<< n << " ";
        }
        n=n+1;
    }
    return 0;
}