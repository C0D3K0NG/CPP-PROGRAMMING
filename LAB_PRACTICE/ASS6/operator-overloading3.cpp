/*A5. Create a class called HEIGHT that stores the height of a student in
feet and inches in two private instance variables. Include a constructor that
sets these values. Define a function into_cm(), which returns the height in
cm. overload the operator "-" to perform the difference of two student’s
heights. Also Overload comparison operators (<, ==) to compare
twostudent’s heights.*/

#include <iostream>
using namespace std;

class HEIGHT {
private:
    int feet;
    int inches;

    // Helper: convert total inches
    int totalInches() const {
        return feet * 12 + inches;
    }

public:
    // Constructor
    HEIGHT(int f = 0, int i = 0) {
        feet = f;
        inches = i;
    }

    // Convert to centimeters
    double into_cm() const {
        return totalInches() * 2.54;
    }

    // Overload - operator
    HEIGHT operator-(const HEIGHT& h) const {
        int diffInches = abs(totalInches() - h.totalInches());
        return HEIGHT(diffInches / 12, diffInches % 12);
    }

    // Overload < operator
    bool operator<(const HEIGHT& h) const {
        return totalInches() < h.totalInches();
    }

    // Overload == operator
    bool operator==(const HEIGHT& h) const {
        return totalInches() == h.totalInches();
    }

    // Display height
    void display() const {
        cout << feet << " feet " << inches << " inches";
    }
};

int main() {
    HEIGHT h1(5, 10);  // 5 feet 10 inches
    HEIGHT h2(6, 2);   // 6 feet 2 inches

    cout << "Height 1: ";
    h1.display();
    cout << " (" << h1.into_cm() << " cm)" << endl;

    cout << "Height 2: ";
    h2.display();
    cout << " (" << h2.into_cm() << " cm)" << endl;

    HEIGHT diff = h1 - h2;
    cout << "\nHeight difference: ";
    diff.display();
    cout << endl;

    cout << "\nComparisons:\n";
    cout << "h1 < h2: " << (h1 < h2 ? "True" : "False") << endl;
    cout << "h1 == h2: " << (h1 == h2 ? "True" : "False") << endl;

    return 0;
}
