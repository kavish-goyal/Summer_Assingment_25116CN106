// Q4. Write a program to remove duplicates from array.


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }

    cout << "Array after removing duplicates: ";

    for(int i = 0;i < n;i++)
    {
        int found = 0;

        for(int j = 0;j < i;j++)
        {
            if(arr[i] == arr[j])
            {
                found =1;
                break;
            }
        }

        if(found== 0)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}