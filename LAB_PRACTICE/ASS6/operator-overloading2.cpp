/*Create a complex class to perform addition, subtraction, multiplication
and division of two Complex Numbers. Your complex class should

contain-
i.Constructors to initialize data members

ii.Copy constructor
iii.Overload operators +, -, *, / for addition, subtraction, multiplication
and division of two ComplexNumbers respectively. Then find the
expression a-b*c+d (where a, b, c, and d are complex objects).*/

#include <iostream>
using namespace std;

class Complex {
    float real;
    float imag;

public:
    // Default constructor
    Complex() : real(0), imag(0) {}

    // Parameterized constructor
    Complex(float r, float i) : real(r), imag(i) {}

    // Copy constructor
    Complex(const Complex& c) {
        real = c.real;
        imag = c.imag;
    }

    // Operator Overloading: +
    Complex operator+(const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    // Operator Overloading: -
    Complex operator-(const Complex& c) const {
        return Complex(real - c.real, imag - c.imag);
    }

    // Operator Overloading: *
    Complex operator*(const Complex& c) const {
        return Complex(
            real * c.real - imag * c.imag,
            real * c.imag + imag * c.real
        );
    }

    // Operator Overloading: /
    Complex operator/(const Complex& c) const {
        float denom = c.real * c.real + c.imag * c.imag;
        return Complex(
            (real * c.real + imag * c.imag) / denom,
            (imag * c.real - real * c.imag) / denom
        );
    }

    // Display function
    void display() const {
        cout << real << (imag >= 0 ? " + " : " - ") << abs(imag) << "i" << endl;
    }
};

int main() {
    // Initialize complex numbers
    Complex a(4, 5);
    Complex b(2, -3);
    Complex c(1, 2);
    Complex d(3, 1);

    // Perform expression: a - b * c + d
    Complex result = a - (b * c) + d;

    cout << "Expression: a - b * c + d = ";
    result.display();

    return 0;
}
