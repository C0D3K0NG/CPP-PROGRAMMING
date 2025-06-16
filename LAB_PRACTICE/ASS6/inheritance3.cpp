/* Class Structure Overview
Base Class:

Education → qualification

Derived from Education:

Staff → code, name

Derived from Staff:

Teacher → subject, publication
Officer → grade
Typist → speed

Derived from Typist:

Regular → salary
Casual → daily_wages
*/

#include <iostream>
using namespace std;

// Base class
class Education {
protected:
    string qualification;

public:
    void getEducation() {
        cout << "Enter highest qualification: ";
        getline(cin, qualification);
    }

    void showEducation() const {
        cout << "Qualification: " << qualification << endl;
    }
};

// Intermediate base class
class Staff : public Education {
protected:
    int code;
    string name;

public:
    void getStaff() {
        cout << "Enter staff code: ";
        cin >> code;
        cin.ignore();
        cout << "Enter staff name: ";
        getline(cin, name);
    }

    void showStaff() const {
        cout << "Code: " << code << "\nName: " << name << endl;
    }
};

// Derived class: Teacher
class Teacher : public Staff {
private:
    string subject;
    string publication;

public:
    void getTeacher() {
        getStaff();
        getEducation();
        cout << "Enter subject: ";
        getline(cin, subject);
        cout << "Enter publication: ";
        getline(cin, publication);
    }

    void showTeacher() const {
        cout << "\n--- Teacher Details ---" << endl;
        showStaff();
        showEducation();
        cout << "Subject: " << subject << "\nPublication: " << publication << endl;
    }
};

// Derived class: Officer
class Officer : public Staff {
private:
    char grade;

public:
    void getOfficer() {
        getStaff();
        getEducation();
        cout << "Enter grade: ";
        cin >> grade;
    }

    void showOfficer() const {
        cout << "\n--- Officer Details ---" << endl;
        showStaff();
        showEducation();
        cout << "Grade: " << grade << endl;
    }
};

// Derived class: Typist
class Typist : public Staff {
protected:
    float speed;

public:
    void getTypist() {
        getStaff();
        getEducation();
        cout << "Enter typing speed (wpm): ";
        cin >> speed;
    }

    void showTypist() const {
        showStaff();
        showEducation();
        cout << "Speed: " << speed << " wpm" << endl;
    }
};

// Derived from Typist: Regular
class Regular : public Typist {
private:
    float salary;

public:
    void getRegular() {
        getTypist();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void showRegular() const {
        cout << "\n--- Regular Typist Details ---" << endl;
        showTypist();
        cout << "Salary: ₹" << salary << endl;
    }
};

// Derived from Typist: Casual
class Casual : public Typist {
private:
    float dailyWages;

public:
    void getCasual() {
        getTypist();
        cout << "Enter daily wages: ";
        cin >> dailyWages;
    }

    void showCasual() const {
        cout << "\n--- Casual Typist Details ---" << endl;
        showTypist();
        cout << "Daily Wages: ₹" << dailyWages << endl;
    }
};

// Main function to demonstrate
int main() {
    Teacher t;
    Officer o;
    Regular r;
    Casual c;

    cout << "\nEnter Teacher Information:\n";
    t.getTeacher();

    cout << "\nEnter Officer Information:\n";
    o.getOfficer();

    cout << "\nEnter Regular Typist Information:\n";
    r.getRegular();

    cout << "\nEnter Casual Typist Information:\n";
    c.getCasual();

    // Displaying information
    t.showTeacher();
    o.showOfficer();
    r.showRegular();
    c.showCasual();

    return 0;
}
