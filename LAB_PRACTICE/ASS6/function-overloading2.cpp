/*Assume that object represents an employee report that contains the information about
employee id, total bonus, and total overtime in a particular year. Use four objects to represent
four employees' reports. Write a program that display report information. Use setpara()
overloaded member functions to set report attributes by passing/without passing the
arguments and member function displayreport() to show the reports according to parameter
passed.*/

#include <iostream>
using namespace std;

class EmployeeReport {
private:
    int emp_id;
    float total_bonus;
    float total_overtime;

public:
    // Constructor to initialize default values
    EmployeeReport() {
        emp_id = 0;
        total_bonus = 0.0;
        total_overtime = 0.0;
    }

    // Overloaded setpara() without parameters (takes user input)
    void setpara() {
        cout << "Enter Employee ID: ";
        cin >> emp_id;
        cout << "Enter Total Bonus: ";
        cin >> total_bonus;
        cout << "Enter Total Overtime: ";
        cin >> total_overtime;
    }

    // Overloaded setpara() with parameters
    void setpara(int id, float bonus, float overtime) {
        emp_id = id;
        total_bonus = bonus;
        total_overtime = overtime;
    }

    // Function to display the employee report
    void displayreport() {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Total Bonus: $" << total_bonus << endl;
        cout << "Total Overtime: " << total_overtime << " hours\n" << endl;
    }
};

// Main function
int main() {
    // Creating 4 employee report objects
    EmployeeReport e1, e2, e3, e4;

    // Set parameters using parameterized and non-parameterized functions
    e1.setpara(1001, 5000.50, 20);
    e2.setpara(1002, 4500.75, 15);
    e3.setpara(); // Using user input
    e4.setpara(); // Using user input

    // Displaying employee reports
    cout << "\n--- Employee Reports ---\n" << endl;
    e1.displayreport();
    e2.displayreport();
    e3.displayreport();
    e4.displayreport();

    return 0;
}
