//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

#include<iostream>
using namespace std;
int main()
{
    int n, i=1;

    cout << "Enter the size" << endl;
    cin >> n ;

    while(i<=n)
    {
        int j= 1;
        char ch='A'+j-1;
        int space = 1;
        while(space<=n-i)
        {
            cout << " ";
            space++;
        }
        while(j<=i-1)
        {
            cout << ch;
            ch++;
            j++;
        }
        while(j>=1)
        {
            cout << ch;
            ch--;
            j--;
        }
        cout << endl;
        i++;
        
    }
    return 0;
}