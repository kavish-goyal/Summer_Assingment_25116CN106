// Q4. Write a program to Find Column-wise Sum.


#include<iostream>
using namespace std;
int main()
{
    int r, c;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int A[10][10];

    cout << "Enter matrix elements:\n";
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin >> A[i][j];

    cout << "\nColumn-wise Sum:\n";

    for(int j=0; j<c; j++)
    {
        int sum = 0;

        for(int i=0; i<r; i++)
        {
            sum += A[i][j];
        }

        cout <<"Column " << j+1<< " Sum = " << sum << endl;
    }
    return 0;
}