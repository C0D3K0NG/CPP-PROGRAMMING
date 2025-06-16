/*Write three derived classes inheriting functionality of base class person (should have
member function, that ask to enter name and age) and with added unique features of student,
employee, and functionality to assign, change and delete records of student and employee.
And make one member function for printing address of the objects of classes (base and
derived) using this pointer. Create two objects of base class and derived classes each and
print the addresses of individual objects. Using calculator, calculate the address*/

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void getDetails() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); // To handle newline
    }

    void printAddress() {
        cout << "Object address: " << this << endl;
    }
};

class Student : public Person {
    int rollNo;

public:
    void assignStudent(int r, string n, int a) {
        rollNo = r;
        name = n;
        age = a;
    }

    void changeStudent(string newName, int newAge) {
        name = newName;
        age = newAge;
    }

    void deleteStudent() {
        name = "";
        age = 0;
        rollNo = 0;
    }

    void displayStudent() {
        cout << "Student: " << name << ", Age: " << age << ", Roll No: " << rollNo << endl;
    }

    void printAddress() {
        cout << "Student object address: " << this << endl;
    }
};

class Employee : public Person {
    int empID;

public:
    void assignEmployee(int id, string n, int a) {
        empID = id;
        name = n;
        age = a;
    }

    void changeEmployee(string newName, int newAge) {
        name = newName;
        age = newAge;
    }

    void deleteEmployee() {
        name = "";
        age = 0;
        empID = 0;
    }

    void displayEmployee() {
        cout << "Employee: " << name << ", Age: " << age << ", Employee ID: " << empID << endl;
    }

    void printAddress() {
        cout << "Employee object address: " << this << endl;
    }
};

int main() {
    // Base class objects
    Person p1, p2;
    cout << "\nEnter details for person 1:\n";
    p1.getDetails();
    cout << "\nEnter details for person 2:\n";
    p2.getDetails();

    cout << "\nAddresses of base class Person objects:\n";
    p1.printAddress();
    p2.printAddress();

    // Derived class objects
    Student s1, s2;
    s1.assignStudent(101, "Alice", 20);
    s2.assignStudent(102, "Bob", 21);

    Employee e1, e2;
    e1.assignEmployee(501, "John", 30);
    e2.assignEmployee(502, "Emma", 28);

    cout << "\nAddresses of derived class Student objects:\n";
    s1.printAddress();
    s2.printAddress();

    cout << "\nAddresses of derived class Employee objects:\n";
    e1.printAddress();
    e2.printAddress();

    cout << "\n--- Displaying All Records ---\n";
    s1.displayStudent();
    s2.displayStudent();
    e1.displayEmployee();
    e2.displayEmployee();

    return 0;
}
