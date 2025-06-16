/*Write a program as per following details 
Create one base class PERSON with following data members 
Name, College name 

Create one sub class STUDENT derived from PERSON with following data members 
Student_id , Marks of five subjects, percentage 
Member function: 
showResult( )- Calculate total, percentage and finds class (Dist, First, second, pass) 

Create one sub class EMPLOYEE derived from PERSON with following data members 
Emp_id, qualification , basic salary 
Member function to calculate Net salary and print Net salary 
DA=189% of Basic salary 
HRA=10% of Basic salary 
TA=500 
Income tax=5 % of basic salary, if basic salary >50000 
Income tax=0, if Basic salary <=50000 
Netsalary=(basicsalary+da+hra+ta) - income tax 

Write appropriate setter function in each class and display detail of student and employee in main
*/

#include <iostream>
#include <string>
using namespace std;

// Base class
class PERSON {
protected:
    string name;
    string college_name;

public:
    void setPersonDetails(string pname, string pcollege) {
        name = pname;
        college_name = pcollege;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "College Name: " << college_name << endl;
    }
};

// STUDENT class derived from PERSON
class STUDENT : public PERSON {
private:
    int student_id;
    int marks[5];
    float percentage;

public:
    void setStudentDetails(int id, int m[]) {
        student_id = id;
        for (int i = 0; i < 5; i++)
            marks[i] = m[i];
    }

    void showResult() {
        int total = 0;
        for (int i = 0; i < 5; i++)
            total += marks[i];
        percentage = total / 5.0;

        cout << "\n--- Student Details ---\n";
        displayPersonDetails();
        cout << "Student ID: " << student_id << endl;
        cout << "Total Marks: " << total << "/500" << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 75)
            cout << "Class: Distinction\n";
        else if (percentage >= 60)
            cout << "Class: First Class\n";
        else if (percentage >= 50)
            cout << "Class: Second Class\n";
        else if (percentage >= 35)
            cout << "Class: Pass\n";
        else
            cout << "Class: Fail\n";
    }
};

// EMPLOYEE class derived from PERSON
class EMPLOYEE : public PERSON {
private:
    int emp_id;
    string qualification;
    float basic_salary;

public:
    void setEmployeeDetails(int id, string qual, float basic) {
        emp_id = id;
        qualification = qual;
        basic_salary = basic;
    }

    void displayNetSalary() {
        float da = 1.89f * basic_salary;
        float hra = 0.10f * basic_salary;
        float ta = 500;
        float tax = (basic_salary > 50000) ? 0.05f * basic_salary : 0;
        float net_salary = basic_salary + da + hra + ta - tax;

        cout << "\n--- Employee Details ---\n";
        displayPersonDetails();
        cout << "Employee ID: " << emp_id << endl;
        cout << "Qualification: " << qualification << endl;
        cout << "Basic Salary: ₹" << basic_salary << endl;
        cout << "Net Salary: ₹" << net_salary << endl;
    }
};

// Main function
int main() {
    // STUDENT
    STUDENT s;
    int marks[] = {85, 78, 92, 74, 88};
    s.setPersonDetails("Riya Sen", "XYZ College");
    s.setStudentDetails(101, marks);
    s.showResult();

    // EMPLOYEE
    EMPLOYEE e;
    e.setPersonDetails("Arjun Mehta", "XYZ College");
    e.setEmployeeDetails(202, "M.Tech", 60000);
    e.displayNetSalary();

    return 0;
}
