//     1
//    121
//   12321
//  1234321
// 123454321

#include<iostream>
using namespace std;
int main()
{
    int n, i=1;

    cout << "Enter the size";
    cin >> n ;

    while(i<=n)
    {
        int j= 1;
        int space = 1;
        while(space<=n-i)
        {
            cout << " ";
            space++;
        }
        while(j<=i-1)
        {
            cout << j;
            j++;
        }
        while(j>=1)
        {
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }
}