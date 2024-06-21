// Program Name: Vehicle Information System
// Description: This program defines classes to represent vehicles, specifically cars and bikes, along with their attributes. It demonstrates inheritance and object creation for different vehicle types, including Audi, Ford, Bajaj, and TVS. Each vehicle type has specific attributes such as model type, ownership cost, warranty, seating capacity, fuel type, cylinders, number of gears, cooling type, wheel type, and fuel tank size. The program creates instances of these vehicle types and displays their information.

// The classes in this program demonstrate inheritance, where subclasses (Audi, Ford, Bajaj, TVS) inherit attributes and methods from their superclass (car, Bike, Vehicle). 
// The objects created (audi, ford, bajaj, tvs) are instances of these subclasses, each representing a specific type of vehicle. 
// This relationship is an example of "is-a" relationship, where Audi "is a" type of car, Ford "is a" type of car, Bajaj "is a" type of Bike, and TVS "is a" type of Bike.


#include <iostream>
using namespace std;

class Vehicle
{
private:
    int price;
    int mileage;

public:
    Vehicle() {}
    Vehicle(int PRICE, int MILEAGE)
    {
        price = PRICE;
        mileage = MILEAGE;
    }

    void putData(int PRICE, int MILEAGE)
    {
        price = PRICE;
        mileage = MILEAGE;
    }

    int getDATA()
    {
        return price;
    }

    int getDATA_2()
    {
        return mileage;
    }
};

class car : public Vehicle
{
private:
    int Total_cost_of_sales;
    int Warrenty;
    int seating_capacity;
    string fuel_type;

public:
    car() {}
    car(int Total_COST_OF_SALES, int WARRENTY, int SEATING_CAPACITY, string FUEL_TYPE, int ps, int mlage)
        : Vehicle(ps, mlage)
    {
        Total_cost_of_sales = Total_COST_OF_SALES;
        Warrenty = WARRENTY;
        seating_capacity = SEATING_CAPACITY;
        fuel_type = FUEL_TYPE;
    }

    void putData(int Total_COST_OF_SALES, int WARRENTY, int SEATING_CAPACITY, string FUEL_TYPE)
    {
        Total_cost_of_sales = Total_COST_OF_SALES;
        Warrenty = WARRENTY;
        seating_capacity = SEATING_CAPACITY;
        fuel_type = FUEL_TYPE;
    }

    int get_totalcost()
    {
        return Total_cost_of_sales;
    }

    int get_warrenty()
    {
        return Warrenty;
    }
    int get_saeting_capacity()
    {
        return seating_capacity;
    }
    string get_fueltype()
    {
        return fuel_type;
    }

    void show()
    {
        cout << "----------  C A R   -  T Y P E ------------" << endl;
        cout << "Ownership Cost: " << get_totalcost() << endl;
        cout << "Warranty: " << get_warrenty() << endl;
        cout << "Seating Capacity: " << get_saeting_capacity() << endl;
        cout << "Fuel Type: " << get_fueltype() << endl;
        cout << "Mileage: " << getDATA_2() << endl;
        cout << "Price: " << getDATA() << endl;
    }
};

class Audi : public car
{
private:
    string model_Type;

public:
    Audi(string modeltype, int Total_COST_OF_SALES, int WARRENTY, int SEATING_CAPACITY, string FUEL_TYPE, int ps, int mlage)
        : car(Total_COST_OF_SALES, WARRENTY, SEATING_CAPACITY, FUEL_TYPE, ps, mlage)
    {
        model_Type = modeltype;
    }

    void set_modelType(string modeltype)
    {
        model_Type = modeltype;
    }
    string get_modeltype()
    {
        return model_Type;
    }
};

class Ford : public car
{
private:
    string model_Type2;

public:
    Ford(string modeltype2, int Total_COST_OF_SALES, int WARRENTY, int SEATING_CAPACITY, string FUEL_TYPE, int ps, int mlage)
        : car(Total_COST_OF_SALES, WARRENTY, SEATING_CAPACITY, FUEL_TYPE, ps, mlage)
    {
        model_Type2 = modeltype2;
    }

    void set_modelType2(string modeltype)
    {
        model_Type2 = modeltype;
    }
    string get_modeltype2()
    {
        return model_Type2;
    }
};

class Bike : public Vehicle
{
private:
    int cylinders;
    int numberOfGears;
    string coolingType;
    string wheelType;
    double fuelTankSize;

public:
    Bike() {}
    Bike(int CYLINDERS, int NUMBEROFGEARS, string COOLINGTYPE,
         string WHEELTYPE, double FUELTANKSIZE, int ps, int mlage)
        : Vehicle(ps, mlage)
    {
        cylinders = CYLINDERS;
        numberOfGears = NUMBEROFGEARS;
        coolingType = COOLINGTYPE;
        wheelType = WHEELTYPE;
        fuelTankSize = FUELTANKSIZE;
    }

    void putData(int CYLINDERS, int NUMBEROFGEARS, string COOLINGTYPE,
                 string WHEELTYPE, double FUELTANKSIZE)
    {
        cylinders = CYLINDERS;
        numberOfGears = NUMBEROFGEARS;
        coolingType = COOLINGTYPE;
        wheelType = WHEELTYPE;
        fuelTankSize = FUELTANKSIZE;
    }

    int get_cylinders()
    {
        return cylinders;
    }

    int get_numberOfGears()
    {
        return numberOfGears;
    }

    string get_cooligType()
    {
        return coolingType;
    }
    string get_wheelType()
    {
        return wheelType;
    }
    double get_fuelTankSize()
    {
        return fuelTankSize;
    }

    void show()
    {
        cout << "----------  B I K E   -  T Y P E ------------" << endl;
        cout << "Cylinders: " << get_cylinders() << endl;
        cout << "Number of Gears: " << get_numberOfGears() << endl;
        cout << "Cooling Type: " << get_cooligType() << endl;
        cout << "Wheel Type: " << get_wheelType() << endl;
        cout << "Fuel Tank Size: " << get_fuelTankSize() << endl;
    }
};

class Bajaja : public Bike
{
private:
    string make_Type;

public:
    Bajaja(string makeType, int CYLINDERS, int NUMBEROFGEARS, string COOLINGTYPE,
           string WHEELTYPE, double FUELTANKSIZE, int ps, int mlage)
        : Bike(CYLINDERS, NUMBEROFGEARS, COOLINGTYPE, WHEELTYPE, FUELTANKSIZE, ps, mlage)
    {
        make_Type = makeType;
    }
    void set_makeType(string maketype)
    {
        make_Type = maketype;
    }
    string get_mkaetype()
    {
        return make_Type;
    }
};

class TVS : public Bike
{
private:
    string make_Type2;

public:
    TVS(string makeType2, int CYLINDERS, int NUMBEROFGEARS, string COOLINGTYPE,
        string WHEELTYPE, double FUELTANKSIZE, int ps, int mlage)
        : Bike(CYLINDERS, NUMBEROFGEARS, COOLINGTYPE, WHEELTYPE, FUELTANKSIZE, ps, mlage)
    {
        make_Type2 = makeType2;
    }

    void set_makeType(string maketype)
    {
        make_Type2 = maketype;
    }
    string get_mkaetype()
    {
        return make_Type2;
    }
};

int main()
{
    // Create objects of Audi and Ford
    Audi audi("AudiModel", 50000, 3, 5, "Petrol", 200, 25);
    Ford ford("FordModel", 45000, 2, 4, "Diesel", 180, 20);

    // Create objects of Bajaj and TVS
    Bajaja bajaj("BajajModel", 150, 5, "Air-Cooled", "Spoke", 10.5, 125, 50);
    TVS tvs("TVSModel", 180, 6, "Liquid-Cooled", "Alloy", 12.5, 150, 45);

    // Display Information About Audi
    cout << "Audi Information:" << endl;
    cout << "Model Type: " << audi.get_modeltype() << endl;
    audi.show();

    // Display Information About Ford
    cout << "\nFord Information:" << endl;
    cout << "Model Type: " << ford.get_modeltype2() << endl;
    ford.show();

    // Display Information About Bajaj
    cout << "Bajaj Information:" << endl;
    cout << "Make Type: " << bajaj.get_mkaetype() << endl;
    bajaj.show();

    // Display Information About TVS
    cout << "\nTVS Information:" << endl;
    cout << "Make Type: " << tvs.get_mkaetype() << endl;
    tvs.show();

    return 0;
}
