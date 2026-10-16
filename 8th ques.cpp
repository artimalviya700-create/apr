#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    void setlength(float l) { length = l; }
    void setwidth(float w) { width = w; }
    
    float perimeter() { return 2 * (length + width); }
    float area() { return length * width; }
    
    void show() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    int sameArea(Rectangle other) {
        return (this->area() == other.area()) ? 1 : 0;
    }
};

int main() {
    Rectangle r1, r2;       

    // Initial setup
    r1.setlength(5); r1.setwidth(2.5);
    r2.setlength(5); r2.setwidth(18.9);

    cout << "Rectangle 1: "; r1.show();
    cout << "Area: " << r1.area() << ", Perimeter: " << r1.perimeter() << endl;

    cout << "\nRectangle 2: "; r2.show();
    cout << "Area: " << r2.area() << ", Perimeter: " << r2.perimeter() << endl;

    if (r1.sameArea(r2)) cout << "\nRectangles have the same area." << endl;
    else cout << "\nRectangles have different areas." << endl;

    // Updating values
    cout << "\n--- Updating R1 values ---" << endl;
    r1.setlength(15); r1.setwidth(6.3);
    
    r1.show(); cout << "New Area: " << r1.area() << endl;
    r2.show(); cout << "Area: " << r2.area() << endl;

    if (r1.sameArea(r2)) cout << "Now they have the same area." << endl;
    else cout << "They still have different areas." << endl;

            return 0;}