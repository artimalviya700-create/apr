#include <iostream>
#include <cmath>

using namespace std;

float volume(float r) {
    return (4.0/3.0) * 3.14* pow(r, 3);
}

float volume(float l, float b, float h) {
    return l * b * h;
}


double volume(double r, double h) {
    return 3.14 * r * r * h;
}

int main() {

    float radius;
    cout << "Enter radius of sphere: ";
    cin >>radius;
    cout << "Volume of Sphere: " << volume(radius) << endl;

  
    float l, b, h;
    cout << "\nEnter length, breadth, and height of cuboid: ";
    cin >> l >> b >> h;
    cout << "Volume of Cuboid: " << volume(l, b, h) << endl;

    double cylR, cylH;
    cout << "\nEnter radius and height of cylinder: ";
    cin >> cylR >> cylH;
    cout << "Volume of Cylinder: " << volume(cylR, cylH) << endl;

    return 0;
}