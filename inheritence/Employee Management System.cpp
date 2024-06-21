// Program: Employee Management System
// Description: This program implements an Employee Management System using classes in C++.
//              It includes three types of employees: Manager, Scientist, and Programmer.
//              Each employee has specific attributes and methods to manage their information.
//              The program demonstrates inheritance and polymorphism concepts in object-oriented programming.
//              It allows the user to create instances of different employee types and display their information.

// Relation between Classes and Objects:
// - The relation between classes and objects is called "Instantiation".
// - A class is a blueprint or template that defines the attributes and behaviors (methods) of objects.
// - An object is an instance of a class, created using the class definition.
// - Objects hold specific values for the attributes defined by their class and can invoke the behaviors (methods) defined by the class.
// - In this program, Manager, Scientist, and Programmer are classes, and admin, dr, and Programmer_1 are objects (instances) of these classes.

// Relation between Classes:
// - The relation between classes in this program is called "Inheritance".
// - Inheritance allows a class (derived class) to inherit attributes and methods from another class (base class).
// - In this program, Employee is the base class, and Manager, Scientist, and Programmer are derived classes.
// - Manager, Scientist, and Programmer inherit common attributes and methods from the Employee class and add their specific attributes and methods.

#include <iostream>
using namespace std;

// Base class for all employees
class Employee
{
private:
    string empName;
    int empNumber;

public:
    Employee(string E_M_P_name, int E_M_P_number)
    {
        empName = E_M_P_name;
        empNumber = E_M_P_number;
    }

    void putData(int EMPNUMBER, string EMPNAME)
    {
        empName = EMPNAME;
        empNumber = EMPNUMBER;
    }

    int getDATA()
    {
        return empNumber;
    }

    string getDATA_2()
    {
        return empName;
    }
};

// Manager class, derived from Employee
class Manager : public Employee
{
private:
    char title;
    double club_dues;

public:
    Manager(char TiTle, double C_L_U_B_dues, string empnm, int empnmbr) : Employee(empnm, empnmbr)
    {
        title = TiTle;
        club_dues = C_L_U_B_dues;
    }

    void putData(char TITLE, double CLUB_DUES)
    {
        title = TITLE;
        club_dues = CLUB_DUES;
    }

    char getDATA_3()
    {
        return title;
    }

    double getDATA_4()
    {
        return club_dues;
    }

    void show()
    {
        cout << "Admin Name: " << getDATA_2() << endl;
        cout << "Admin number: " << getDATA() << endl;
        cout << "Admin Title: " << getDATA_3() << endl;
        cout << "Admin club dues: " << getDATA_4() << endl;
    }
};

// Scientist class, derived from Employee
class Scientist : public Employee
{
private:
    int publication;

public:
    Scientist(string empnm, int empnmbr, int Publication) : Employee(empnm, empnmbr)
    {
        publication = Publication;
    }

    void putData(int PUBLICATION)
    {
        publication = PUBLICATION;
    }

    int getDATA_3()
    {
        return publication;
    }

    void show()
    {
        cout << "Scientist Name: " << getDATA_2() << endl;
        cout << "Scientist number: " << getDATA() << endl;
        cout << "Scientist publication: " << getDATA_3() << endl;
    }
};

// Programmer class, derived from Employee
class Programmer : public Employee
{
private:
    double salary;
    string expertise;

public:
    Programmer(string EXP, double sry, string empnm, int empnmbr) : Employee(empnm, empnmbr)
    {
        expertise = EXP;
        salary = sry;
    }

    void putData(double SALARY, string EXPERTIES)
    {
        salary = SALARY;
        expertise = EXPERTIES;
    }

    double getDATA_3()
    {
        return salary;
    }

    string getDATA_4()
    {
        return expertise;
    }

    void show()
    {
        cout << "Programmer Name: " << getDATA_2() << endl;
        cout << "Programmer number: " << getDATA() << endl;
        cout << "Programmer salary: " << getDATA_3() << endl;
        cout << "Programmer expertise: " << getDATA_4() << endl;
    }
};

int main()
{
    // Creating instances of different employee types
    Manager admin('a', 23423.32, "usman ahmed", 1);
    Scientist dr("Dr. asher", 3, 200000);
    Programmer Programmer_1("5 years", 450000, "ubaid bilal", 2);

    // Displaying employee information
    admin.show();
    dr.show();
    Programmer_1.show();

    return 0;
}
