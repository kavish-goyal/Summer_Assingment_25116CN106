//Q1. Write a program to create number guessing game.


#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() 
{
    srand(time(0));
    int number = rand() % 100+ 1;
    int guess;

    cout << "Guess a number between 1 and 100: ";

    while(true) 
    {
        cin >> guess;

        if(guess == number) 
        {
            cout << "Correct! You guessed the number.";
            break;
        }
        else if(guess < number) 
        {
            cout << "Too low! Try again: ";
        }
        else 
        {
            cout << "Too high! Try again: ";
        }
    }
    return 0;
}