//Q2. Write a program to create Employee Management System.


#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;
    float salary;
};

int main() 
{
    Employee e[50];
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "\nEnter details of employee " << i + 1 << endl;
        cout << "Employee ID: ";
        cin >> e[i].id;
        cout << "Name: ";
        cin >> e[i].name;
        cout << "Department: ";
        cin >> e[i].department;
        cout << "Salary: ";
        cin >> e[i].salary;
    }

    cout << "\n----- Employee Records -----\n";
    for(int i = 0; i < n; i++) {
        cout << "\nEmployee ID: " << e[i].id;
        cout << "\nName: " << e[i].name;
        cout << "\nDepartment: " << e[i].department;
        cout << "\nSalary: " << e[i].salary << endl;
    }

    return 0;
}