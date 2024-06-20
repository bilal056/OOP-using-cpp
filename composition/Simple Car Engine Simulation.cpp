// Program: Simple Car Engine Simulation
// Description: This program simulates a car engine using composition in C++.
//              It demonstrates how a Car class has a Engine class object,
//              and starting the car also starts the engine.
// Relation: Car class has a Engine object, indicating a "has-a" relationship (composition).

#include <iostream>
#include <string>

using namespace std; // Using the std namespace

class Engine
{
public:
    Engine()
    {
        cout << "Engine constructed." << endl;
    }

    void start()
    {
        cout << "Engine started." << endl;
    }
};

class Car
{
private:
    string make;
    string model;
    Engine engine; // Composition: Car has a Engine

public:
    // Constructor to initialize the car with make and model
    Car(const string &make, const string &model)
        : make(make), model(model), engine()
    {
        cout << "Car constructed: " << make << " " << model << endl;
    }

    // Method to start the car (which starts the engine)
    void start()
    {
        engine.start();
        cout << "Car started." << endl;
    }
};

int main()
{
    // Creating a Car object and starting it
    Car myCar("Toyota", "Camry");
    myCar.start();
    return 0;
}
