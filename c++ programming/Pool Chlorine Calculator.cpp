/*
Program Name: Pool Chlorine Calculator

Description:
This program calculates the amount of chlorine needed to reach the desired level in a swimming pool.
The user inputs the pool size in gallons, the desired chlorine level, the current chlorine level,
and the concentration of chlorine in the product they are using. The program converts the pool size
from gallons to cubic feet and calculates the amount of chlorine needed in pounds.

Functions:
1. convert_gallon_to_cubic_feet(int no_of_gallons): Converts the pool size from gallons to cubic feet.
2. calculate_chlorine_needed_in_pounds(float Desired_Level_chl, int current_level_chl, float pool_cubic_feet, int Concentration_of_chl):
   Calculates the amount of chlorine needed in pounds based on the desired chlorine level, current chlorine level,
   pool size in cubic feet, and the concentration of chlorine.

Main Function:
- Takes user inputs for pool size, desired chlorine level, current chlorine level, and concentration of chlorine.
- Converts pool size from gallons to cubic feet.
- Calculates the required amount of chlorine.
- Outputs the amount of chlorine needed or states that no additional chlorine is required if the desired level is already met.
*/

#include <iostream>
using namespace std;

// Function to convert pool size from gallons to cubic feet
int convert_gallon_to_cubic_feet(int no_of_gallons)
{
    int poolcubicfeet;
    poolcubicfeet = no_of_gallons / 7.481; // 1 cubic foot = 7.481 gallons
    return poolcubicfeet;
}

// Function to calculate the amount of chlorine needed in pounds
int calculate_chlorine_needed_in_pounds(float Desired_Level_chl, int current_level_chl, float pool_cubic_feet, int Concentration_of_chl)
{
    int cipounds;
    cipounds = (Desired_Level_chl - current_level_chl) * pool_cubic_feet / Concentration_of_chl;
    return cipounds;
}

int main()
{
    int pool_size;
    int current_level_chl;
    int Concentration_of_chl;
    float Desired_Level_chl;
    float pool_cubic_feet;
    float chl_pounds;

    // Get user input for pool size in gallons
    cout << "Enter Pool size in gallon : ";
    cin >> pool_size;

    // Get user input for desired chlorine level within the valid range [1.0, 3.1]
    do
    {
        cout << "Enter Desired level of chlorine : ";
        cin >> Desired_Level_chl;
    } while ((Desired_Level_chl < 1.0) || (Desired_Level_chl > 3.1));

    // Get user input for current chlorine level
    cout << "Enter Current level of chlorine : ";
    cin >> current_level_chl;

    // Get user input for concentration of chlorine
    cout << "Enter Concentration of chlorine : ";
    cin >> Concentration_of_chl;

    // Convert pool size from gallons to cubic feet
    pool_cubic_feet = convert_gallon_to_cubic_feet(pool_size);

    // Calculate the amount of chlorine needed in pounds
    chl_pounds = calculate_chlorine_needed_in_pounds(Desired_Level_chl, current_level_chl, pool_cubic_feet, Concentration_of_chl);

    // Display the amount of chlorine needed or indicate no additional chlorine is required
    if (chl_pounds > 0)
    {
        cout << "The pool needs " << chl_pounds << " more chlorine ";
    }
    else
    {
        cout << "The pool already has enough chlorine, no more is needed.";
    }
}
