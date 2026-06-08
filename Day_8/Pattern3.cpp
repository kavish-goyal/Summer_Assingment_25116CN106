// A
// AB
// ABC
// ABCD

#include<iostream>
using namespace std;
int main()
{
    int n, i=1;

    cout << "Enter the number"<< endl;
    cin >> n;

    while(i<=n)
    {
        int j= 1;
        char ch ='A';
        while(j<=i)
        {
            cout << ch ;
            j=j+1;
            ch =ch+1;
        }
        cout << endl;
        i=i+1;
    }
    return 0;
}