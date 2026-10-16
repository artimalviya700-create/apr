#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Flight {
private:
    int FlightNumber;
    string Destination;
    float Distance;
    float Fuel;

    void CALFUEL() {
        if (Distance <= 1000) {
            Fuel = 500;
        } else if (Distance > 1000 && Distance <= 2000) {
            Fuel = 1100;
        } else if (Distance > 2000) {
            Fuel = 2200;
        }
    }

public:
    void FEEDINFO() {
        cout << "Enter Flight Number: ";
        cin >> FlightNumber;
        cout << "Enter Destination: ";
        cin>>Destination;
       // cin.ignore();
        //getline(cin, Destination);
        cout << "Enter Distance: ";
        cin >> Distance;
        CALFUEL();
    }

    void SHOWINFO() {
        cout << " "<< "Flight Number"
                  << " " << "Destination"
                  << " " << "Distance"
                  << " " << "Fuel" << endl;
        cout << " " << FlightNumber
                  << " " << Destination
                  << " " << Distance
                  << " " << Fuel << endl;
    }
};

int main() {
    Flight f;
    f.FEEDINFO();
    f.SHOWINFO();
    return 0;
}