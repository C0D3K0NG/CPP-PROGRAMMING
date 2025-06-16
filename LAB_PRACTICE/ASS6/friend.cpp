/*Create a class complex that contains two double data members. Overload +, - , and *
arithmetic operators using friend function, so that they can operate on the object of complex.
Then find the expression a - b * c + d (where a, b, c, and d are complex objects).*/

#include <iostream>
using namespace std;

class Complex {
    double real, imag;

public:
    // Constructor
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    // Friend function declarations
    friend Complex operator+(Complex, Complex);
    friend Complex operator-(Complex, Complex);
    friend Complex operator*(Complex, Complex);

    // Display function
    void display() {
        cout << real << (imag >= 0 ? " + " : " - ") << abs(imag) << "i" << endl;
    }
};

// Addition
Complex operator+(Complex a, Complex b) {
    return Complex(a.real + b.real, a.imag + b.imag);
}

// Subtraction
Complex operator-(Complex a, Complex b) {
    return Complex(a.real - b.real, a.imag - b.imag);
}

// Multiplication
Complex operator*(Complex a, Complex b) {
    return Complex(
        a.real * b.real - a.imag * b.imag,
        a.real * b.imag + a.imag * b.real
    );
}

// Main function
int main() {
    Complex a(3, 2);
    Complex b(1, 4);
    Complex c(2, -1);
    Complex d(0, 3);

    cout << "a = "; a.display();
    cout << "b = "; b.display();
    cout << "c = "; c.display();
    cout << "d = "; d.display();

    // Evaluate: a - b * c + d
    Complex result = a - (b * c) + d;

    cout << "\nResult of a - b * c + d = ";
    result.display();

    return 0;
}
