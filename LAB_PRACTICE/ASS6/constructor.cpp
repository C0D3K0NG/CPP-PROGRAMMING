/*Create a class called Time that has a separate integer member data for hours, minutes and seconds.
One method initialize it to fixed values. A member function should display it, in HH:MM:SS format.
The final two member functions should add and subtract two objects of time passed as arguments. A
main() program should create two initialized time objects. Then it should add the two initialized objects,
storing the result in a third time object. Finally it should display the value of the third time object.*/
#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Function to initialize time with fixed values
    void initialize(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Function to display time in HH:MM:SS format
    void display() const {
        cout << (hours < 10 ? "0" : "") << hours << ":"
             << (minutes < 10 ? "0" : "") << minutes << ":"
             << (seconds < 10 ? "0" : "") << seconds << endl;
    }

    // Function to add two time objects
    void addTime(const Time &t1, const Time &t2) {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes + seconds / 60;
        hours = t1.hours + t2.hours + minutes / 60;

        seconds %= 60;
        minutes %= 60;
    }

    // Function to subtract t2 from t1
    void subtractTime(const Time &t1, const Time &t2) {
        int sec1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
        int sec2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

        int diff = sec1 - sec2;
        if (diff < 0) diff = -diff;  // Make positive for demonstration

        hours = diff / 3600;
        diff %= 3600;
        minutes = diff / 60;
        seconds = diff % 60;
    }
};

int main() {
    Time t1, t2, sum, diff;

    // Initialize time objects
    t1.initialize(2, 45, 50);
    t2.initialize(1, 20, 30);

    cout << "Time 1: ";
    t1.display();

    cout << "Time 2: ";
    t2.display();

    // Add time
    sum.addTime(t1, t2);
    cout << "\nSum: ";
    sum.display();

    // Subtract time
    diff.subtractTime(t1, t2);
    cout << "Difference: ";
    diff.display();

    return 0;
}
