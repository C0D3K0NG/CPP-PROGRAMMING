/*Write a program to create a class shape with functions to find area of
the shapes and display the name of the shape and other essential
component of the class. Create derived classes circle, rectangle and
trapezoid each having overridden functions area and display. Write a
suitable program to illustrate virtual functions and virtual destructor.*/

#include <iostream>
#include <cmath>
using namespace std;

// -------- Base Class --------
class Shape {
public:
    virtual void display() const {
        cout << "This is a generic shape." << endl;
    }

    virtual double area() const = 0;  // Pure virtual function

    virtual ~Shape() {
        cout << "Base class Shape destructor called." << endl;
    }
};

// -------- Derived Class: Circle --------
class Circle : public Shape {
    double radius;

public:
    Circle(double r) : radius(r) {}

    void display() const override {
        cout << "Shape: Circle" << endl;
        cout << "Radius: " << radius << endl;
    }

    double area() const override {
        return M_PI * radius * radius;
    }

    ~Circle() {
        cout << "Circle destructor called." << endl;
    }
};

// -------- Derived Class: Rectangle --------
class Rectangle : public Shape {
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void display() const override {
        cout << "Shape: Rectangle" << endl;
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    double area() const override {
        return length * width;
    }

    ~Rectangle() {
        cout << "Rectangle destructor called." << endl;
    }
};

// -------- Derived Class: Trapezoid --------
class Trapezoid : public Shape {
    double base1, base2, height;

public:
    Trapezoid(double b1, double b2, double h) : base1(b1), base2(b2), height(h) {}

    void display() const override {
        cout << "Shape: Trapezoid" << endl;
        cout << "Base1: " << base1 << ", Base2: " << base2 << ", Height: " << height << endl;
    }

    double area() const override {
        return 0.5 * (base1 + base2) * height;
    }

    ~Trapezoid() {
        cout << "Trapezoid destructor called." << endl;
    }
};

// -------- Main Function --------
int main() {
    Shape* shapes[3];

    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);
    shapes[2] = new Trapezoid(3.0, 5.0, 4.0);

    for (int i = 0; i < 3; ++i) {
        shapes[i]->display();
        cout << "Area: " << shapes[i]->area() << endl << endl;
    }

    // Proper cleanup using virtual destructor
    for (int i = 0; i < 3; ++i) {
        delete shapes[i];
    }

    return 0;
}
