/* 
   This program demonstrates various basic operations in C++ including:
   1. Reversing a number.
   2. Generating a multiplication table.
   3. Calculating the factorial of a number.
   4. Checking if a given year is a leap year.
   5. Swapping two numbers.
   6. Finding the quotient and remainder of two numbers.
   7. Adding two numbers.
*/

#include<iostream>
using namespace std;

int main(){

    /* ---------------------- Reversed Number ------------------------ */

    int n, reversednumber=0, remainer;

    cout<<"Enter a number ";
    cin>>n;

    while (n!= 0)
    {
        remainer = n%10;
        reversednumber = reversednumber *10+remainer;
        n/=10;
    }

    cout<<"The reversed number is : "<<reversednumber <<endl;

    /* ---------------------------------------------------------------- */

    /* ------------------- Multiplication Table ----------------------- */

    int m;

    cout<<"Enter a number : ";
    cin>>m;

    for (int i = 1; i <= m; i++)
    {
        cout<<m<<" * "<<i<<" = "<<m*i<<endl;
    }

    /* ---------------------------------------------------------------- */

    /* ------------------- Factorial Numbers -------------------------- */

    int fact=1;
    int f;
    cout<<"Enter a number to calculate factorial ";
    cin>>f;

    for (int i = 1; i <= f; i++)
    {
        fact*=i ;

    }
    cout<<"The factorial of "<<f<<" is : "<<fact<<endl;

    /* ---------------------------------------------------------------- */

    /* ------------------------ Leap Year ----------------------------- */

    int year;

    cout<<"Enter a year : ";
    cin>>year;

    if ((year % 400 == 0 && year %100!=0) ||(year % 4 == 0))
    {
        cout<<"It's a leap year"<<endl;
    }
    else
        cout<<"It's not a leap year"<<endl;

    /* ---------------------------------------------------------------- */

    /* ----------------------- Swap Numbers --------------------------- */

    int x,y,temp;

    cout<<"Enter a number ";
    cin>>x;

    cout<<"Enter another number ";
    cin>>y;

    cout<<"Before swapping "<<endl;

    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;

    temp = x;
    x = y;
    y = temp;
    cout<<"After swapping "<<endl;

    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;

    /* ---------------------------------------------------------------- */

    /* ------------------- Quotient and Remainder --------------------- */

    int quotient, remainder, num1, num2;

    cout<<"Enter number one ";
    cin>>num1;
    cout<<"Enter number two ";
    cin>>num2;

    quotient = num1 / num2;
    cout<<"Quotient is "<<quotient<<endl;

    remainder = num1 % num2;
    cout<<"Remainder is "<<remainder<<endl;

    /* ---------------------------------------------------------------- */

    /* --------------------- Adding Two Numbers ----------------------- */

    int num3,num4;
    int result;

    cout<<"Enter number 1 ";
    cin>>num3;
    cout<<"Enter number 2 ";
    cin>>num4;

    result = num3 + num4;
    cout<<"The sum is "<<result<<endl;

    /* ---------------------------------------------------------------- */

    return 0;
}
