// A
// BB
// CCC
// DDDD
// EEEEE

#include<iostream>
using namespace std;
int main()
{
    int n, i=1;

    cout << "Enter the size" <<endl;
    cin >> n ;

    while(i<=n)
    {
        int j=1;
        char ch = 'A'+i-1;
        while(j<=i)
        {
            cout << ch ;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}