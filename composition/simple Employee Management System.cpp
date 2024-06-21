#include <iostream>
using namespace std;


// Program Name: Employee Management System

// The program is designed to store and manage employee information. 
// It captures details like personal information, birth date, address, 
// employment history, skills, and salary. The program also includes 
// a search functionality to find and display the information of an 
// employee based on their ID.

// Define the History structure to store job title and department
struct History {
    string job_title;
    string department;
};

// Define the Address structure to store street, city, state, and zipcode
struct Address {
    string street;
    string city;
    string state;
    string zipcode;
};

// Define the Date structure to store day, month, and year
struct Date {
    int day;
    int month;
    int year;
};

// Define the Name structure to store first name and last name
struct Name {
    string First_name;
    string Last_name;
};

// Define the Employee structure to store employee details
struct Employee {
    int Id;
    float salary;
    string skill[5];
    Name full_name;
    Date date;
    Address address;
    History his;

    // Method to print the details of an employee
    void print();
};

// Implementation of the print method for the Employee structure
void Employee::print() {
    cout << "Employ ID: " << Id << endl;
    cout << "First Name: " << full_name.First_name << endl;
    cout << "Last Name: " << full_name.Last_name << endl;
    cout << "Day: " << date.day << endl;
    cout << "Month: " << date.month << endl;
    cout << "Year: " << date.year << endl;
    cout << "--Address-- " << endl;
    cout << "Street: " << address.street << endl;
    cout << "City: " << address.city << endl;
    cout << "State: " << address.state << endl;
    cout << "ZipCode: " << address.zipcode << endl;
    cout << "--Employment History--" << endl;
    cout << "Hire Date: "
         << "Day: " << date.day
         << " Month: " << date.month
         << " Year: " << date.year << endl;
    cout << "Job Title: " << his.job_title << endl;
    cout << "Department: " << his.department << endl;

    for (int j = 0; j < 5; j++) {
        cout << "Skill: " << skill[j] << endl;
    }
    cout << "Salary: " << salary << endl;
}

// Function to search for an employee by ID and print their details
void search_Employ(int search, Employee employ[]) {
    for (int i = 0; i < 5; i++) {
        if (search == employ[i].Id) {
            employ[i].print();
        }
    }
}

int main() {
    int search;
    Employee employ[5], search_data;

    // Loop to input details for 5 employees
    for (int i = 0; i < 5; i++) {
        cout << "Enter your employer Id: ";
        cin >> employ[i].Id;

        cout << "-------Enter personal details----" << endl << endl;
        cout << "First name: ";
        cin >> employ[i].full_name.First_name;

        cout << "Last name: ";
        cin >> employ[i].full_name.Last_name;

        cout << "------Enter your Birth Details------" << endl << endl;
        cout << "Day: ";
        cin >> employ[i].date.day;
        cout << "Month: ";
        cin >> employ[i].date.month;
        cout << "Year: ";
        cin >> employ[i].date.year;

        cout << "------Enter your address Details------" << endl << endl;
        cout << "Enter Street Name: ";
        cin >> employ[i].address.street;
        cout << "Enter City Name: ";
        cin >> employ[i].address.city;
        cout << "Enter State: ";
        cin >> employ[i].address.state;
        cout << "Enter Zip code: ";
        cin >> employ[i].address.zipcode;

        cout << "----Enter History of Employment----" << endl << endl;
        cout << "[ Enter Hire date ]" << endl;
        cout << "Day, Month, Year: ";
        cin >> employ[i].date.day;
        cout << "/";
        cin >> employ[i].date.month;
        cout << "/";
        cin >> employ[i].date.year;

        cout << "Enter Job title: ";
        cin >> employ[i].his.job_title;
        cout << "Enter Department: ";
        cin >> employ[i].his.department;

        for (int j = 0; j < 5; j++) {
            cout << "Skill [" << j + 1 << "]: ";
            cin >> employ[i].skill[j];
        }

        cout << "Enter your Salary: ";
        cin >> employ[i].salary;
        cout << endl << endl;
    }

    cout << endl << endl;
    cout << "Enter Employee ID You Want To Search: ";
    cin >> search;

    // Search and print the employee details based on ID
    search_Employ(search, employ);

    // End of program
    return 0;
}
