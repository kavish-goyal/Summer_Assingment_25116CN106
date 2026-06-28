//Q4. Write a program to Create Marksheet Generation System.


#include <iostream>
using namespace std;

struct Marksheet
{
    int rollNo;
    string name;
    float marks1, marks2, marks3, total, percentage;
};

int main()
{
    Marksheet s[50];
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Roll No: ";
        cin >> s[i].rollNo;

        cout << "Name: ";
        cin >> s[i].name;

        cout << "Marks in Subject 1: ";
        cin >> s[i].marks1;

        cout << "Marks in Subject 2: ";
        cin >> s[i].marks2;

        cout << "Marks in Subject 3: ";
        cin >> s[i].marks3;

        s[i].total = s[i].marks1 + s[i].marks2 + s[i].marks3;
        s[i].percentage = s[i].total / 3.0;
    }

    cout << "\n========== Student Marksheet ==========\n";

    for(int i = 0; i < n; i++)
    {
        cout << "\nRoll No    : " << s[i].rollNo;
        cout << "\nName       : " << s[i].name;
        cout << "\nSubject 1  : " << s[i].marks1;
        cout << "\nSubject 2  : " << s[i].marks2;
        cout << "\nSubject 3  : " << s[i].marks3;
        cout << "\nTotal      : " << s[i].total;
        cout << "\nPercentage : " << s[i].percentage << "%\n";
    }

    return 0;
}