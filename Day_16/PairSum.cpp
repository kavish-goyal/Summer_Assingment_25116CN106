// Q3. Write a program to find pair with given sum.


#include<iostream>
using namespace std;
int main()
{
    int n, sum;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }

    cout << "Enter sum: ";
    cin >> sum;

    for(int i = 0;i < n;i++)
    {
        for(int j =i+1;j < n;j++)
        {
            if(arr[i] +arr[j] == sum)
            {
                cout << "Pair: " << arr[i] << " " << arr[j] << endl;
            }
        }
    }
    return 0;
}