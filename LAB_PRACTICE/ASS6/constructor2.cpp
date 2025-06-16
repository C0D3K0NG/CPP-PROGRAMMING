/*P7.Write down a program on C++ to define your own Stringclass. Your String class should contain-
i.Dynamic constructor(s) to allocate memory space for string.

ii.Copy constructor
iii.Member functionto merge two strings and store it in another string.
iv.Destructor*/

#include <iostream>
#include <cstring>
using namespace std;

class String {
    char* str;

public:
    // Dynamic constructor
    String(const char* s = "") {
        str = new char[strlen(s) + 1];  // +1 for null terminator
        strcpy(str, s);
    }

    // Copy constructor
    String(const String& source) {
        str = new char[strlen(source.str) + 1];
        strcpy(str, source.str);
    }

    // Merge function to combine two strings
    void merge(const String& s1, const String& s2) {
        delete[] str;  // clean old memory before assigning new
        str = new char[strlen(s1.str) + strlen(s2.str) + 1];
        strcpy(str, s1.str);
        strcat(str, s2.str);
    }

    // Function to display the string
    void display() const {
        cout << str << endl;
    }

    // Destructor
    ~String() {
        delete[] str;
    }
};

int main() {
    String s1("Hello ");
    String s2("World!");
    String s3;

    cout << "String 1: ";
    s1.display();

    cout << "String 2: ";
    s2.display();

    s3.merge(s1, s2);
    cout << "Merged String: ";
    s3.display();

    return 0;
}
