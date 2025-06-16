/*Write base class that ask the user to enter a complex number and derived class adds the
complex number of its own with the base. Finally make third class that is friend of derived
and calculate the difference of base complex number and its own complex number.*/

#include <iostream>
using namespace std;

// ---------------- Base Class ----------------
class ComplexBase {
protected:
    float real, imag;

public:
    void getComplex() {
        cout << "Enter real part of base complex number: ";
        cin >> real;
        cout << "Enter imaginary part of base complex number: ";
        cin >> imag;
    }

    void showComplex() {
        cout << "Base Complex Number = " << real << " + " << imag << "i" << endl;
    }

    // Make friend class declaration here
    friend class ComplexFriend;
};

// ---------------- Derived Class ----------------
class ComplexDerived : public ComplexBase {
protected:
    float dreal, dimag;

public:
    void setDerivedComplex() {
        cout << "\nEnter real part of derived complex number: ";
        cin >> dreal;
        cout << "Enter imaginary part of derived complex number: ";
        cin >> dimag;
    }

    void addComplex() {
        float r = real + dreal;
        float i = imag + dimag;
        cout << "Sum (Base + Derived) = " << r << " + " << i << "i" << endl;
    }

    friend class ComplexFriend;
};

// ---------------- Friend Class ----------------
class ComplexFriend {
public:
    void subtractComplex(ComplexDerived d) {
        float r = d.real - d.dreal;
        float i = d.imag - d.dimag;
        cout << "Difference (Base - Derived) = " << r << " + " << i << "i" << endl;
    }
};

// ---------------- Main Function ----------------
int main() {
    ComplexDerived obj;
    ComplexFriend f;

    cout << "----- Enter Base Complex Number -----" << endl;
    obj.getComplex();
    obj.showComplex();

    cout << "\n----- Enter Derived Complex Number -----" << endl;
    obj.setDerivedComplex();

    cout << "\n----- Addition -----" << endl;
    obj.addComplex();

    cout << "\n----- Subtraction (Using Friend Class) -----" << endl;
    f.subtractComplex(obj);

    return 0;
}
