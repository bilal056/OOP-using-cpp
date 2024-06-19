// Program Name: Cube Calculation using Pass by Value and Pass by Reference
// Description: This program demonstrates the difference between pass-by-value 
//              and pass-by-reference in C++ by calculating the cube of two numbers. 
//              The first number's cube is calculated using pass-by-value, and the 
//              second number's cube is calculated using pass-by-reference. The results 
//              are then displayed to the user.

#include <iostream>
using namespace std;

// Function to calculate the cube of a number using pass-by-value
int PassByValue(int number_1)
{
    int total;
    total = number_1 * number_1 * number_1;
    return total;
}

// Function to calculate the cube of a number using pass-by-reference
void PassByReffrence(int &number_2)
{
    number_2 = number_2 * number_2 * number_2;
}

int main()
{
    int number_1;
    int number_2;

    // Input two integers from the user
    cin >> number_1;
    cin >> number_2;

    // Calculate the cube of the first number using pass-by-value
    int total = PassByValue(number_1);
    cout << "Pass By Value: " << total << endl;

    // Calculate the cube of the second number using pass-by-reference
    PassByReffrence(number_2);
    cout << "Pass By Refference: " << total << endl;

    // Output the original and modified numbers
    cout << "NUM-1: " << number_1 << endl;
    cout << "NUM-2: " << number_2 << endl;
}

