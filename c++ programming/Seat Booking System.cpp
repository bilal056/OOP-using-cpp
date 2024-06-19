// Program Name: Seat Booking System
// Description: This program simulates a seat booking system for a venue with 30 seats.
// It allows users to view booked seats, book a seat, check the number of seats booked, and see the available seats.
// The program uses a 2D array to represent the seating arrangement, where 'E' represents an empty seat and 'B' represents a booked seat.

#include <iostream>
#include <stdbool.h>
using namespace std;

#define row 5
#define col 6

// Function to initialize all seats as empty
void initialiseSeats(char Seats[][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            Seats[i][j] = 'E';
        }
    }
}

// Function to display the seating arrangement
void displaySeating(char Seats[][col])
{
    int l = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << " " << l++ << Seats[i][j];
        }
        cout << endl;
    }
}

// Function to book a seat
bool bookSeat(char Seats[][col])
{
    int row_1;
    int col_1;

    cout << "Enter row you want to select : ";
    cin >> row_1;
    cout << "Enter column you want to select : ";
    cin >> col_1;

    if (row_1 >= row || col_1 >= col)
    {
        cout << "Please enter again, but [ row < 5 And col < 6 ]";
        cout << endl;
    }
    else if (Seats[row_1][col_1] == 'E')
    {
        Seats[row_1][col_1] = 'B';
        return true;
    }
    else
    {
        cout << "The seat is already booked." << endl;
        return false;
    }
}

// Function to display the number of seats booked
void bookedSeats(int count)
{
    cout << "Total Seats Booked: " << count << endl;
}

// Function to display the number of available seats
void availableSeats(int count)
{
    int total_seats_available = 30 - count;
    cout << "Total Seats Available: " << total_seats_available << endl;
}

int main()
{
    char choice;
    char Seats[row][col];
    int count = 0;

    initialiseSeats(Seats);

    do
    {
        int option;
        cout << "1. Display Booked Seats" << endl;
        cout << "2. Book a Seat" << endl;
        cout << "3. Number of Seats Booked" << endl;
        cout << "4. Available Seats" << endl;
        cout << "Enter your choice: ";
        cin >> option;

        switch (option)
        {
        case 1:
            displaySeating(Seats);
            break;
        case 2:
            if (bookSeat(Seats))
            {
                cout << "Booking is successful." << endl;
                count++;
            }
            break;
        case 3:
            bookedSeats(count);
            break;
        case 4:
            availableSeats(count);
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
            break;
        }

        cout << "Do you want to book another seat? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
