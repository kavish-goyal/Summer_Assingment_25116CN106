// Write a program to Union of arrays.


#include<iostream>
using namespace std;
int main()
{
    int a[100], b[100];
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    cout << "Enter elements of first array: ";
    for(int i=0;i<n1; i++)
        cin >>a[i];

    cout << "Enter size of second array: ";
    cin >> n2;

    cout << "Enter elements of second array: ";
    for(int i=0;i<n2;i++)
        cin >> b[i];

    cout << "Union Array: ";

    for(int i=0;i<n1; i++)
        cout << a[i] << " ";

    for(int i=0; i<n2;i++)
    {
        int found = 0;

        for(int j=0;j<n1; j++)
        {
            if(b[i] ==a[j])
            {
                found = 1;
                break;
            }
        }
        if(found == 0)
            cout << b[i] << " ";
    }
    return 0;
}