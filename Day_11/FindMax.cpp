//Q2. Write a Program to Write Function to Find maximum.

#include<iostream>
using namespace std;
int maximum(int a, int b)
{
    if(a >b)
        return a;
    else
        return b;
}
int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >>num2;

    cout << "Maximum = "<< maximum(num1, num2);

    return 0;
}