//Q1. Write a program to print half pyramid pattern.

#include<iostream>
using namespace std;
int main()
{
    int n ,i=1;

    cout << "Enter The number";
    cin>> n;

    while(i<=n)
    {
        int j=1;
        int space=1;
        while(space<=n-i-j+1)
        {
            cout << " ";
            space=space+1;
    
        }
        while(j<=i)
        {
            cout << "*";
            j=j+1;
        }
        cout<< endl;
        i=i+1;
    }
    return 0;
}