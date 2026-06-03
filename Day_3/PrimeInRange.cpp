//Q2. Write a program to Print prime numbers in a range.

#include <iostream>
using namespace std;
int main()
{
    int start, end, num=start ;

    cout << "Enter starting number:";
    cin >> start;

    cout << "Enter ending number:";
    cin >> end;

    while(num <= end)
    {
        int i = 2;
        int count = 0;

        if(num > 1)
        {
            while(i < num)
            {
                if(num % i == 0)
                {
                    count++;
                    break;
                }
                i=i+1;
            }

            if(count == 0)
            {
                cout << num <<" ";
            }
        }
        num=num+1;
    }
    return 0;
}