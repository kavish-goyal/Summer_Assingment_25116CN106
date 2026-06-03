//Q1. Write a program to check whether a number is prime.

#include<iostream>
using namespace std;
int main()
{
    int n,i=2,count=0;
    cout<< "Enter a number"<<endl;
    cin>> n;

    if(n<=1)
    {
        cout<<"Not prime"<<endl;
        return 0;
    }

    while(i<n)
    {
        if(n%i==0)
        {
            count++;
        } 
        i=i+1;
    }
    if(count==0)
    {
        cout<< "prime" <<endl;
    }
    else
    {
        cout << "Not prime" << endl ;
    }
    return 0;
}