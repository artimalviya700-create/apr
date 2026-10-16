// #include <iostream>
// using namespace std;

// class Shape {
// protected:
//     double x, y;
// public:
//     void get_data() { cin >> x >> y; }
//     virtual void display_area() = 0; // Pure Virtual Function
// };

// class Triangle : public Shape {
//     void display_area() { cout << "Triangle Area: " << 0.5 * x * y << endl; }
// };

// class Rectangle : public Shape {
//     void display_area() { cout << "Rectangle Area: " << x * y << endl; }
// };

// int main() {
//     Shape *s; Triangle t; Rectangle r;
//     int choice;

//     cout << "1.Triangle 2.Rectangle: "; cin >> choice;
//     // s = (choice == 1) ? (Shape*)&t : (Shape*)&r;
//     if (choice == 1) 
//     s= &t; // Triangle
// else 
//     s = &r; // Rectangl

//     cout << "Enter dimensions: ";
//     s->get_data();
//     s->display_area();

//     return 0;
// }
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    string names[100]; // 
    int codes[100];
    double costs[100];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for item " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> names[i];
        cout << "Code: ";
        cin >> codes[i];
        cout << "Cost: ";
        cin >> costs[i];
    }


    cout << "\n" << left << setw(15) << "NAME" 
         << left << setw(10) << "CODE" 
         << right << setw(10) << "COST" << endl;

   
    cout << setfill('-'); 

    for (int i = 0; i < n; i++) {
        cout << left << setw(15) << names[i] 
             << left << setw(10) << codes[i] 
             << right << setw(10) << fixed << setprecision(2) << costs[i] << endl;
    }

    return 0;
}
