// Q3. Write a program to Create Ticket Booking System.

#include <iostream>
using namespace std;

struct Ticket
{
    int ticketNo;
    string passengerName;
    string source;
    string destination;
    int seats;
};

int main()
{
    Ticket t;

    cout << "========== Ticket Booking ==========\n";

    cout << "Enter Ticket Number: ";
    cin >> t.ticketNo;

    cout << "Enter Passenger Name: ";
    cin >> t.passengerName;

    cout << "Enter Source: ";
    cin >> t.source;

    cout << "Enter Destination: ";
    cin >> t.destination;

    cout << "Enter Number of Seats: ";
    cin >> t.seats;

    cout << "\n========== Ticket Details ==========\n";
    cout << "Ticket Number   : " << t.ticketNo << endl;
    cout << "Passenger Name  : " << t.passengerName << endl;
    cout << "Source          : " << t.source << endl;
    cout << "Destination     : " << t.destination << endl;
    cout << "Seats Booked    : " << t.seats << endl;
    cout << "\nTicket Booked Successfully!" << endl;

    return 0;
}