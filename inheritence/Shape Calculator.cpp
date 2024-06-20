/*
   Program: Shape Calculator
   Description: This program calculates the area and volume of various shapes, including circles, squares, cubes, and pyramids.
                It demonstrates the use of inheritance and polymorphism in C++.

   Relation between classes and objects:
   - Classes define the blueprint for objects. In this program, the classes Shape, TwoD_Shape, ThreeD_Shape, circle, square, cube, and pyramid
     define the properties and behaviors of different shapes.
   - Objects are instances of classes. In the main function, objects of classes circle, square, cube, and pyramid are created and used to calculate
     the area and volume of shapes.

   The relation between classes and objects in this program is called instantiation, where objects are created from classes.
*/
#include <iostream>
#include <math.h>
using namespace std;

// Abstract base class for shapes
class Shape
{
public:
    virtual void area() = 0;    // Pure virtual function for calculating area
    virtual void volume(){};    // Virtual function for calculating volume
};

// Abstract base class for 2D shapes
class TwoD_Shape : public Shape{};

// Circle class inheriting from TwoD_Shape
class circle : public TwoD_Shape
{
protected:
    double radius;

public:
    circle(double Rds)
    {
        radius = Rds;
    }
    ~circle() {} // Destructor
    void area()
    {
        double pi = 3.14159; // Corrected the value of pi

        double area = pi * pow(radius, 2);

        cout << "Calculation Of Circle Area: " << area << endl;
    }
};

// Square class inheriting from TwoD_Shape
class square : public TwoD_Shape
{
protected:
    double side;

public:
    square(double sd)
    {
        side = sd;
    }
    ~square() {} // Destructor
    void area()
    {
        double area = side * side;

        cout << "Calculation of Square Area: " << area << endl;
    }
};

// Abstract base class for 3D shapes
class ThreeD_Shape : public Shape{};

// Cube class inheriting from ThreeD_Shape
class cube : public ThreeD_Shape
{
protected:
    int length;
    int width;
    int height;

public:
    cube(int Length = 0, int Width = 0, int Height = 0)
    {
        length = Length;
        width = Width;
        height = Height;
    }
    ~cube() {} // Destructor
    void area()
    {
        int area = 2 * ((length * width) + (width * height) + (height * length));
        cout << "Calculation of Cube Area: " << area << endl;
    }
    void volume()
    {
        int result = length * width * height;
        cout << "Volume of Cube: " << result << endl;
    }
};

// Pyramid class inheriting from ThreeD_Shape
class pyramid : public ThreeD_Shape
{
protected:
    int base;
    double height;

public:
    pyramid(int bs, double h)
    {
        base = bs;
        height = h;
    }
    ~pyramid() {} // Destructor
    void area()
    {
        double volume = 0;
        volume = base * height;
        cout << "Calculation of Pyramid Area: " << volume << endl;
    }
    void volume()
    {
        double result = 0.33 * base * height;
        cout << "Volume of Pyramid: " << result << endl;
    }
};

int main()
{
    // Creating an array of shape pointers for 2D shapes
    TwoD_Shape *shape_1[4];
    shape_1[0] = new circle(3.5);
    shape_1[1] = new circle(4.4);
    shape_1[2] = new square(5.1);
    shape_1[3] = new square(10.3);

    cout << " ---------  Shape 1 and 2 Calculations   ---------- " << endl;
    for (int i = 0; i < 4; i++)
    {
        shape_1[i]->area();
    }

    // Creating an array of shape pointers for 3D shapes
    ThreeD_Shape *shape_2[4];
    shape_2[0] = new cube(2.0, 2.0, 2.0);
    shape_2[1] = new cube(2.0, 2.0, 2.0);
    shape_2[2] = new pyramid(3, 3.2);
    shape_2[3] = new pyramid(4, 6.1);

    cout << " ---------  Shape 3 and 4 Calculations   ---------- " << endl;
    for (int i = 0; i < 4; i++)
    {
        shape_2[i]->area();
    }

    for (int i = 0; i < 4; i++)
    {
        shape_2[i]->volume();
    }

    // Freeing memory to avoid memory leaks
    for (int i = 0; i < 4; i++)
    {
        delete shape_1[i];
        delete shape_2[i];
    }

    return 0;
}
