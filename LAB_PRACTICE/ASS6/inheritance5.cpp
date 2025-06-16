/*Create one base class HOTEL with following data members 
Hotel_name, 
Hotel_type i.e (Three star, five star) 
City 
Hotel_rate i.e (2000,3000,5000)

Create one base class FLIGHT with following data members 
Flight_no 
Source city 
Destination city 
Seat no 

Create one sub class PASSENGER derived from HOTEL and FLIGHT with following data members 
Name, Age, city 
*/

#include <iostream>
#include <string>
using namespace std;

// Base class HOTEL
class HOTEL {
protected:
    string hotel_name;
    string hotel_type;
    string hotel_city;
    float hotel_rate;

public:
    void setHotelDetails(const string& name, const string& type, const string& city, float rate) {
        hotel_name = name;
        hotel_type = type;
        hotel_city = city;
        hotel_rate = rate;
    }

    void getHotelDetails() const {
        cout << "\n--- Hotel Details ---" << endl;
        cout << "Hotel Name: " << hotel_name << endl;
        cout << "Hotel Type: " << hotel_type << endl;
        cout << "Hotel City: " << hotel_city << endl;
        cout << "Hotel Rate: ₹" << hotel_rate << endl;
    }
};

// Base class FLIGHT
class FLIGHT {
protected:
    string flight_no;
    string source_city;
    string destination_city;
    int seat_no;

public:
    void setFlightDetails(const string& fno, const string& src, const string& dest, int seat) {
        flight_no = fno;
        source_city = src;
        destination_city = dest;
        seat_no = seat;
    }

    void getFlightDetails() const {
        cout << "\n--- Flight Details ---" << endl;
        cout << "Flight No: " << flight_no << endl;
        cout << "Source City: " << source_city << endl;
        cout << "Destination City: " << destination_city << endl;
        cout << "Seat No: " << seat_no << endl;
    }
};

// Derived class PASSENGER
class PASSENGER : public HOTEL, public FLIGHT {
private:
    string name;
    int age;
    string passenger_city;

public:
    void setPassengerDetails(const string& pname, int page, const string& pcity) {
        name = pname;
        age = page;
        passenger_city = pcity;
    }

    void getPassengerDetails() const {
        cout << "\n--- Passenger Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "City: " << passenger_city << endl;
    }

    void displayAllDetails() const {
        getPassengerDetails();
        getHotelDetails();
        getFlightDetails();
    }
};

// Main function
int main() {
    PASSENGER p;

    // Set all details
    p.setPassengerDetails("Rajdeep Saha", 25, "Kolkata");
    p.setHotelDetails("The Grand Palace", "Five Star", "Mumbai", 5000.0);
    p.setFlightDetails("AI202", "Kolkata", "Mumbai", 17);

    // Display all details
    p.displayAllDetails();

    return 0;
}
