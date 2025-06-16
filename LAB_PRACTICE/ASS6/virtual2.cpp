/*Create a class Person and two derived classes Employee, and
Student, inherited from class Person. Now create a class Manager which is
derived from two base classes Employee and Student. Show the use of the
virtual base class.*/

#include <iostream>
using namespace std;

// ---------- Base Class ----------
class Person {
protected:
    string name;
    int age;

public:
    void getPersonData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void showPersonData() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// ---------- Derived Class 1 ----------
class Employee : virtual public Person {
protected:
    string company;

public:
    void getEmployeeData() {
        cout << "Enter company name: ";
        cin >> company;
    }

    void showEmployeeData() const {
        cout << "Company: " << company << endl;
    }
};

// ---------- Derived Class 2 ----------
class Student : virtual public Person {
protected:
    string institution;

public:
    void getStudentData() {
        cout << "Enter institution name: ";
        cin >> institution;
    }

    void showStudentData() const {
        cout << "Institution: " << institution << endl;
    }
};

// ---------- Derived from both Employee and Student ----------
class Manager : public Employee, public Student {
private:
    string department;

public:
    void getManagerData() {
        getPersonData();       // Only one copy of Person because of virtual
        getEmployeeData();
        getStudentData();
        cout << "Enter department: ";
        cin >> department;
    }

    void showManagerData() const {
        showPersonData();
        showEmployeeData();
        showStudentData();
        cout << "Department: " << department << endl;
    }
};

// ---------- Main Function ----------
int main() {
    Manager mgr;

    cout << "Enter Manager Details:\n";
    mgr.getManagerData();

    cout << "\nManager Details:\n";
    mgr.showManagerData();

    return 0;
}
