// *********
//  *******
//   *****
//    ***
//     *

#include<iostream>
using namespace std;
int main()
{
    int n, i=1 ;

    cout << "Enter the size" <<endl;
    cin >> n;

    while(i<=n)
    {
        int j=1;
        int space=1;
        while(space<=i-1)
        {
            cout << " ";
            space++;
        }
        while(j<=2*(n-i)+1)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}