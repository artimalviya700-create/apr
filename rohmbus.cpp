#include <iostream>
using namespace std;

void solidRhombus(int rows) {
    for (int i = 1; i <= rows; ++i) {
        // Loop to print leading spaces
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }  
    
        // Loop to print stars
        for (int j = 1; j <= rows; ++j) {
            cout << "*";
        }

        // Move to the next line
        cout << endl;
    }
}

int main() {
    int rows = 5;
    cout << "Solid Rhombus Pattern:\n";
    solidRhombus(rows);
    return 0;
}
