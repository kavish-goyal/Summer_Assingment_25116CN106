//Q4. write a program to find x^n withour pow.

#include <iostream>
using namespace std;
int main() 
{
    int x, n;
    int ans = 1;

    cout<< "Enter x: ";
    cin >> x;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) 
    {
        ans = ans * x;
    }
    cout << x << "^" << n << " = " << ans;

    return 0;
}