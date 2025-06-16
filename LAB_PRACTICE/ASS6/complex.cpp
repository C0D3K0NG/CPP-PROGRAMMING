/*Create a complex class to perform addition, subtraction, multiplication and division of two Complex

Numbers. Your complex class should contain-
i.Constructors to initialize data members

ii.Copy constructor
iii.Member functions for addition, subtraction, multiplication and division of two Complex Numbers*/

#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Default constructor
    Complex() {
        real = 0;
        imag = 0;
    }

    // Parameterized constructor
    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    // Copy constructor
    Complex(const Complex &c) {
        real = c.real;
        imag = c.imag;
    }

    // Member function to add two complex numbers
    Complex add(const Complex &c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    // Member function to subtract two complex numbers
    Complex subtract(const Complex &c) const {
        return Complex(real - c.real, imag - c.imag);
    }

    // Member function to multiply two complex numbers
    Complex multiply(const Complex &c) const {
        float r = real * c.real - imag * c.imag;
        float i = real * c.imag + imag * c.real;
        return Complex(r, i);
    }

    // Member function to divide two complex numbers
    Complex divide(const Complex &c) const {
        float denominator = c.real * c.real + c.imag * c.imag;
        float r = (real * c.real + imag * c.imag) / denominator;
        float i = (imag * c.real - real * c.imag) / denominator;
        return Complex(r, i);
    }

    // Function to display complex number
    void display() const {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
        cout << endl;
    }
};

// Main function
int main() {
    Complex a(4, 5), b(2, -3);

    Complex sum = a.add(b);
    Complex diff = a.subtract(b);
    Complex prod = a.multiply(b);
    Complex quot = a.divide(b);

    cout << "a = ";
    a.display();
    cout << "b = ";
    b.display();

    cout << "\na + b = ";
    sum.display();

    cout << "a - b = ";
    diff.display();

    cout << "a * b = ";
    prod.display();

    cout << "a / b = ";
    quot.display();

    return 0;
}
