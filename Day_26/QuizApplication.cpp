//Q4. Write a program to create quiz application.


#include<iostream>
using namespace std;

int main() 
{
    int score = 0;
    char ans;

    cout << "Q1. What is the capital of India?\n";
    cout << "a) Delhi\nb) Mumbai\nc) Kolkata\n";
    cout << "Enter answer: ";
    cin >> ans;

    if(ans == 'a' || ans == 'A') 
    {
        score++;
    }

    cout << "\nQ2. Which language is used here?\n";
    cout << "a) Python\nb) C++\nc) Java\n";
    cout << "Enter answer: ";
    cin >> ans;

    if(ans == 'b' || ans == 'B') 
    {
        score++;
    }

    cout << "\nQ3. How many days are there in a week?\n";
    cout << "a) 5\nb) 6\nc) 7\n";
    cout << "Enter answer: ";
    cin >> ans;

    if(ans == 'c' || ans == 'C') 
    {
        score++;
    }

    cout << "\nYour final score is: " << score << "/3";

    return 0;
}