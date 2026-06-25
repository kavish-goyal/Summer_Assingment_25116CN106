//Q2. Write a program to Find common characters in strings.

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    cout << "\nCommon Characters:\n";

    for(int i = 0; str1[i]!= '\0'; i++)
    {
        for(int j = 0;str2[j] != '\0'; j++)
        {
            if(str1[i]==str2[j])
            {
                cout <<str1[i] << " ";
                break;
            }
        }
    }
    return 0;
}