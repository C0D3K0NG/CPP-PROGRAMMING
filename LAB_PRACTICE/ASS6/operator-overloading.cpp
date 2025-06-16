/*P8.Create a class String then implement the following operations
i. Overload + operator to concatenate two strings
ii. Overload assignment operator (=) to assign one string into
another.
iii. Overload comparison operators (<, ==) to compare two strings.*/

#include <iostream>
#include <cstring>
using namespace std;

class String {
    char* str;

public:
    // Default constructor
    String() {
        str = new char[1];
        str[0] = '\0';
    }

    // Parameterized constructor
    String(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Copy constructor
    String(const String& s) {
        str = new char[strlen(s.str) + 1];
        strcpy(str, s.str);
    }

    // Overload + operator to concatenate strings
    String operator+(const String& s) const {
        char* temp = new char[strlen(str) + strlen(s.str) + 1];
        strcpy(temp, str);
        strcat(temp, s.str);
        String result(temp);
        delete[] temp;
        return result;
    }

    // Overload = operator for assignment
    String& operator=(const String& s) {
        if (this != &s) {
            delete[] str;
            str = new char[strlen(s.str) + 1];
            strcpy(str, s.str);
        }
        return *this;
    }

    // Overload < operator for comparison
    bool operator<(const String& s) const {
        return strcmp(str, s.str) < 0;
    }

    // Overload == operator for comparison
    bool operator==(const String& s) const {
        return strcmp(str, s.str) == 0;
    }

    // Display function
    void display() const {
        cout << str << endl;
    }

    // Destructor
    ~String() {
        delete[] str;
    }
};

// Test program
int main() {
    String s1("Hello");
    String s2("World");

    cout << "Initial Strings:\n";
    cout << "s1: "; s1.display();
    cout << "s2: "; s2.display();

    String s3 = s1 + s2;
    cout << "\nConcatenation (s1 + s2): ";
    s3.display();

    String s4;
    s4 = s1;  // Assignment
    cout << "\nAfter assignment (s4 = s1): ";
    s4.display();

    cout << "\nComparison (s1 < s2): " << (s1 < s2 ? "True" : "False") << endl;
    cout << "Comparison (s1 == s4): " << (s1 == s4 ? "True" : "False") << endl;

    return 0;
}
