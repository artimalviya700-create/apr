#include <iostream>
using namespace std;

class complex {
    float real;
    float imag;

public:
    // Function to set values
    void set(float r, float i) {
        real = r;
        imag = i;
    }

    // Function to display the complex number
    void disp() {
        cout << real << " + " << imag << "i" << endl;
    }

    complex sum(complex c) {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    // Creating three complex number objects
    complex c1, c2, c3;

    // Setting values for the first two objects
    c1.set(3.5, 2.5);
    c2.set(1.2, 4.3);

    // Calculating sum: c3 = c1 + c2
    c3 = c1.sum(c2);

    // Displaying all numbers
    cout << "Complex Number 1: "; c1.disp();
    cout << "Complex Number 2: "; c2.disp();
    cout << "Sum (Result):     "; c3.disp();

    return 0;
}