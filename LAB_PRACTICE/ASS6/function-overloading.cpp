/*Write a program in C++ to implement class ADD that will have 3 overloaded functions.
1st one will add two integer numbers.
2nd one will add two floating and one integer number.
3rd one will take two complex objects as parameter and will add two complex numbers.*/

#include <iostream>
using namespace std;

// Class to represent complex numbers
class Complex {
    float real, imag;

public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    void display() const {
        cout << real << (imag >= 0 ? " + " : " - ") << abs(imag) << "i" << endl;
    }

    // Friend class ADD to access private members
    friend class ADD;
};

// Class to implement overloaded add functions
class ADD {
public:
    // 1. Add two integers
    void add(int a, int b) {
        cout << "Sum of integers: " << (a + b) << endl;
    }

    // 2. Add two floats and one integer
    void add(float a, float b, int c) {
        cout << "Sum of float + float + int: " << (a + b + c) << endl;
    }

    // 3. Add two complex numbers
    void add(Complex c1, Complex c2) {
        Complex result;
        result.real = c1.real + c2.real;
        result.imag = c1.imag + c2.imag;
        cout << "Sum of complex numbers: ";
        result.display();
    }
};

// Main function to demonstrate functionality
int main() {
    ADD obj;

    // Integer addition
    obj.add(10, 20);

    // Float + float + int
    obj.add(1.5f, 2.5f, 3);

    // Complex addition
    Complex c1(2.0, 3.5), c2(1.5, -2.5);
    obj.add(c1, c2);

    return 0;
}
