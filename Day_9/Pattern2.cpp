// 12345
// 1234
// 123
// 12
// 1

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
        while(j<=n-i+1)
        {
            cout << j ;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}