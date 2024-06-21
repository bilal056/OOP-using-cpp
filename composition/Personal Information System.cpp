// Program Name: Personal Information System
// Description: This program defines classes to store and display personal information such as name, gender, and date of birth.

//  the relationship between the PersonType class and the name and dateOfBirth classes can be described as composition.
#include <iostream>
using namespace std;

// Structure to store first and last name
struct name
{
    string Name;

    // Default constructor
    name()
    {
        Name = "";
    }

    // Setter method to set full name
    void setname(string first, string second)
    {
        Name = first + " " + second;
    }

    // Getter method to get full name
    string getname()
    {
        return Name;
    }

    // Method to display full name
    void Display_Name()
    {
        cout << "Name: " << Name << endl;
    }
};

// Class to store and validate date of birth
class dateOfBirth
{
private:
    int day;
    int month;
    int year;

public:
    // Default constructor
    dateOfBirth()
    {
        day = 0;
        month = 0;
        year = 0;
    }

    // Parameterized constructor with validation
    dateOfBirth(int days, int months, int years);

    // Setter method to set date
    void setdate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    // Getter methods to get date components
    int getday()
    {
        return day;
    }
    int getmonth()
    {
        return month;
    }
    int getyear()
    {
        return year;
    }

    // Method to display date of birth
    void Display_DOB();
};

// Parameterized constructor implementation for dateOfBirth class
dateOfBirth::dateOfBirth(int days, int months, int years)
{
    // Validation for month
    if (months < 1 || months > 12)
    {
        month = 1;
    }
    else
    {
        month = months;
    }

    // Validation for February in leap years
    if (month == 2)
    {
        if (years % 4 == 0 && (years % 100 != 0 || years % 400 == 0))
        {
            if (days < 1 || days > 29)
            {
                day = 1;
            }
            else
            {
                day = days;
            }
        }
        else
        {
            if (days < 1 || days > 28)
            {
                day = 1;
            }
            else
            {
                day = days;
            }
        }
    }
    // Validation for months with 30 days
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (days < 1 || days > 30)
        {
            day = 1;
        }
        else
        {
            day = days;
        }
    }
    // Validation for months with 31 days
    else
    {
        if (days < 1 || days > 31)
        {
            day = 1;
        }
        else
        {
            day = days;
        }
    }

    // Validation for year
    if (years < 1900 || years > 2022)
    {
        year = 2022;
    }
    else
    {
        year = years;
    }
}

// Method implementation to display date of birth
void dateOfBirth::Display_DOB()
{
    cout << "Date of birth: ";
    cout << "" << getday() << "/" << getmonth() << "/" << getyear() << endl;
}

// Class to store and display personal information
class PersonType
{
private:
    char gender;
    name names;
    dateOfBirth DOB;

public:
    // Default constructor
    PersonType()
    {
        gender = '-';
        name();
        dateOfBirth();
    }

    // Setter method to set gender
    void set_gernder(char Gender)
    {
        gender = Gender;
    }

    // Getter method to get gender
    char get_gender()
    {
        return gender;
    }

    // Setter method to set date of birth
    void set_date(int d, int y, int m)
    {
        DOB.setdate(d, m, y);
    }

    // Setter method to set name
    void set_names(const string &first, const string &second)
    {
        names.setname(first, second);
    }

    // Method to display personal information
    void Display()
    {
        cout << "Name: " << names.getname() << endl;
        cout << "Gender: " << gender << endl;
        cout << "DOB: " << DOB.getday() << "/" << DOB.getmonth() << "/" << DOB.getyear() << endl;
    }
};

int main()
{
    // Create an object of PersonType class
    PersonType obj1;

    // Initialize variables
    int day = 2, month = 3, year = 2022;
    char gender = 'm';
    string first_name = "bilal", last_name = "siddiqui";

    // Set personal information using setters
    obj1.set_gernder(gender);
    obj1.set_date(day, month, year);
    obj1.set_names(first_name, last_name);

    // Display personal information
    obj1.Display();

    return 0;
}
