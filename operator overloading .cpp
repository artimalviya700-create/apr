#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;
public:
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // Prefix Increment के लिए friend function
    friend void operator++(Time &t);

    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

void operator++(Time &t) {
    t.seconds++;
    if (t.seconds >= 60) {
        t.seconds = 0;
        t.minutes++;
    }
    if (t.minutes >= 60) {
        t.minutes = 0;
        t.hours++;
    }
}

int main() {
    Time t1(10, 59, 59);
    ++t1; 
    t1.display();
    return 0;
}
