/*Create two class DM & DB which store the value of distances. DM stores it in meter &
centimeters. DB stores it in feet & inches. Write a program that can read values for the class
objects & add one object of DM with another object of DB. Use a friend function to carry out
the addition operation. The objects that store the result may be of either type depending on
the units in which the results are required. The display function should act accordingly.*/

#include <iostream>
using namespace std;

class DB;  // Forward declaration

class DM {
    int meters;
    int centimeters;

public:
    DM(int m = 0, int cm = 0) {
        meters = m;
        centimeters = cm;
    }

    void display() const {
        cout << "Distance in meters & centimeters: "
             << meters << "m " << centimeters << "cm" << endl;
    }

    friend DM add(const DM&, const DB&);
};

class DB {
    int feet;
    int inches;

public:
    DB(int f = 0, int in = 0) {
        feet = f;
        inches = in;
    }

    void display() const {
        cout << "Distance in feet & inches: "
             << feet << "ft " << inches << "in" << endl;
    }

    friend DM add(const DM&, const DB&);
};

DM add(const DM& dm, const DB& db) {
    // Conversion factors
    const float meter_to_inch = 39.3701;
    const float inch_to_cm = 2.54;

    // Convert DM to centimeters
    float total_cm = dm.meters * 100 + dm.centimeters;

    // Convert DB (feet + inches) to inches
    float total_in = db.feet * 12 + db.inches;

    // Convert inches to centimeters
    float db_cm = total_in * inch_to_cm;

    // Total centimeters
    float final_cm = total_cm + db_cm;

    // Convert back to meters & centimeters
    int final_m = final_cm / 100;
    int final_cm_only = (int)final_cm % 100;

    return DM(final_m, final_cm_only);
}

int main() {
    DM dm(2, 70);   // 2m 70cm
    DB db(3, 10);   // 3ft 10in

    cout << "Initial Distances:\n";
    dm.display();
    db.display();

    DM result = add(dm, db);

    cout << "\nAfter Adding DM + DB (Result in meters and centimeters):\n";
    result.display();

    return 0;
}
