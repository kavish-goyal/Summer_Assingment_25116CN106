// Q4. Write a program to Find duplicates in array.


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Duplicate elements are: ";

    for(int i = 0; i <n; i++)
    {
        int count = 0;

        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                count = 1;
                break;
            }
        }
        if(count ==0)
        {
            for(int j = i +1; j <n; j++)
            {
                if(arr[i] == arr[j])
                {
                    cout << arr[i] << " ";
                    break;
                }
            }
        }
    }
    return 0;
}