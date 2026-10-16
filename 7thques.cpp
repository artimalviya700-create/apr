#include <iostream>
using namespace std;

class Date {
    int dd, mm, yy;
public:
    Date(int d=1, int m=1, int y=2000) : dd(d), mm(m), yy(y) {}
    
    // Overloading prefix ++
    void operator++() {
        dd++;
        if (dd > 30) { // Simplified logic for demo
            dd = dd-30;
            mm++;
            if (mm > 12) {
                mm = 1;
                yy++;
            }
        }
    }

    friend ostream& operator<<(ostream& os, const Date& d);
    friend istream& operator>>(istream& is, Date& d);
};

ostream& operator<<(ostream& os, const Date& d) {
    os << d.dd << "/" << d.mm << "/" << d.yy;
    return os;
}



istream& operator>>(istream& is, Date& d) {
    cout << "Enter day, month, year: ";
    is >> d.dd >> d.mm >> d.yy;
    return is;
}

int main() {
    Date d1;
    cin >> d1;
    ++d1;
    cout << "Incremented Date: " << d1 << endl;
    return 0;
}