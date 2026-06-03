//Q4 write a program to Find LCM of two numbers.

#include <iostream>
using namespace std;
int main()
{
    int a, b, lcm;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if(a>b)
    {
        lcm= a;
    }
    else
    {
        lcm= b;
    }
    while(true)
    {
        if(lcm % a==0 && lcm % b==0)
        {
            cout << "LCM is: " << lcm << endl;
            break;
        }
        lcm=lcm+1;
    }
    return 0;
}