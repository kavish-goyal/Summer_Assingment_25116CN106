//Q3. Write a program to Create Salary Management System.


#include <iostream>
using namespace std;

struct Salary
{
    int empId;
    string empName;
    float salary;
};

int main()
{
    Salary s[50];
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Employee " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> s[i].empId;

        cout << "Employee Name: ";
        cin >> s[i].empName;

        cout << "Salary: ";
        cin >> s[i].salary;
    }

    cout << "\n========== Salary Records ==========\n";

    for(int i = 0; i < n; i++)
    {
        cout << "\nEmployee ID   : " << s[i].empId;
        cout << "\nEmployee Name : " << s[i].empName;
        cout << "\nSalary        : " << s[i].salary << endl;
    }

    return 0;
}