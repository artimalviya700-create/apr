#include <iostream>
#include <iomanip> // Required for setprecision
using namespace std;

int main() {
    float fahrenheit, celsius;

    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Conversion formula using floating-point numbers
    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

    cout <<fixed<< setprecision(2); // Formats output to 2 decimal places
    cout << "The temperature in Celsius is: " << celsius << std::endl;

    return 0;
}
