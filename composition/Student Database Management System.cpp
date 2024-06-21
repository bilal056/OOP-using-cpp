// Program Name: Student Database Management System
// Description: This program demonstrates a simple student database management system
//              using a class to store student information and perform operations
//              such as adding students, retrieving student information by ID, and listing all students.


// The StudentDatabase class "has" student records (IDs, names, projects) as its member variables. When you create an object of the StudentDatabase class, such as database or copyOfDatabase, each object represents a specific student database instance.

// Therefore, the StudentDatabase class "has" objects that are instances of itself, and this relationship is a "has-a" relationship.

#include <iostream>
using namespace std;

class StudentDatabase
{
private:
    int *studentIDs;
    string *studentNames;
    string *studentProjects;
    int capacity;
    int size;

public:
    // Constructor to initialize the database
    StudentDatabase(int CAPACITY)
    {
        // Set capacity to a default value if provided capacity is invalid
        capacity = (CAPACITY <= 0) ? 10 : CAPACITY;
        size = 0;
        studentIDs = new int[capacity];
        studentNames = new string[capacity];
        studentProjects = new string[capacity];
    }

    // Copy constructor to create a deep copy of the database
    StudentDatabase(const StudentDatabase &other)
    {
        capacity = other.capacity;
        size = other.size;
        studentIDs = new int[capacity];
        studentNames = new string[capacity];
        studentProjects = new string[capacity];

        for (int i = 0; i < size; i++)
        {
            studentIDs[i] = other.studentIDs[i];
            studentNames[i] = other.studentNames[i];
            studentProjects[i] = other.studentProjects[i];
        }
    }

    // Destructor to free memory allocated for the database
    ~StudentDatabase()
    {
        delete[] studentIDs;
        delete[] studentNames;
        delete[] studentProjects;
    }

    // Method to add a student to the database
    void addStudent(int student_id, string student_name, string student_project)
    {
        if (size < capacity)
        {
            studentIDs[size] = student_id;
            studentNames[size] = student_name;
            studentProjects[size] = student_project;
            size++;
        }
    }

    // Method to retrieve student information by ID
    int getStudentInfo(int Student_Id)
    {
        for (int i = 0; i < size; i++)
        {
            if (studentIDs[i] == Student_Id)
            {
                return studentIDs[i];
            }
        }
        return -1; // Return -1 if student ID is not found
    }

    // Method to list all students in the database
    void ListAllStudents()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Student " << i + 1 << ":\n";
            cout << "Student ID: " << studentIDs[i] << endl;
            cout << "Student Name: " << studentNames[i] << endl;
            cout << "Student Project: " << studentProjects[i] << endl;
            cout << endl;
        }
    }
};

int main()
{
    // Create a StudentDatabase object
    StudentDatabase database(3);

    // Add student records
    database.addStudent(101, "Alice", "Project A");
    database.addStudent(102, "Bob", "Project B");
    database.addStudent(103, "Charlie", "Project C");

    // Retrieve and display student information by ID
    cout << "Student 101:\n" << database.getStudentInfo(101) << endl;
    cout << "Student 102:\n" << database.getStudentInfo(102) << endl;

    // List all students
    cout << "----------------------------------------------\n";
    cout << "All Students:" << endl;
    database.ListAllStudents();
    cout << "----------------------------------------------\n";

    // Create a copy of the database using the copy constructor
    StudentDatabase copyOfDatabase(database);

    // List all students in the copied database
    cout << "All Students in Copied Database:" << endl;
    copyOfDatabase.ListAllStudents();

    return 0;
}
