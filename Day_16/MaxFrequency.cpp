// Q2. Write a program to find maximum frequency element.


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    for(int i = 0;i< n;i++)
    {
        cin >> arr[i];
    }
    int maxFreq = 0,element= arr[0];

    for(int i = 0;i < n; i++)
    {
        int count = 0;
        for(int j =0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count >maxFreq)
        {
            maxFreq = count;
            element = arr[i];
        }
    }
    cout << "Maximum frequency element is: " << element;

    return 0;
}