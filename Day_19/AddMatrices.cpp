//Q1. Write a program to Add matrices.

#include<iostream>
using namespace std;
int main()
{
    int r, c;

    cout << "Enter rows and columns: ";
    cin >>r >> c;

    int A[r][c],B[r][c], Sum[r][c];

    cout << "Enter first matrix:\n";
    for(int i =0; i<r; i++)
    {
        for(int j =0; j<c; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter second matrix:\n";
    for(int i =0; i< r;i++)
    {
        for(int j =0; j< c;j++)
        {
            cin >> B[i][j];
        }
    }

    for(int i = 0; i <r;i++)
    {
        for(int j = 0; j < c; j++)
        {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Addition of matrices:\n";
    for(int i =0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}