//Q3. Write a program to write function for fibonacci.

#include <iostream>
using namespace std;
int fibonacci(int n)
{
    int a =0,b =1,next;

    cout << a << " "<<b << " ";

    for(int i = 3;i <= n;i++)
    {
        next = a + b;
        cout << next<<" ";
        a = b;
        b = next;
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter terms: ";
    cin >> n;

    fibonacci(n);

    return 0;
}