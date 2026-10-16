#include <iostream>
#include <string>
using namespace std;

class MarkSheet {
    string name, enrollment;
    int rollNo;
    float theory[5], practical[5];
    static int rollCounter;

public:
    MarkSheet() { rollNo = ++rollCounter; }
    
    MarkSheet(string n, string e) : name(n), enrollment(e) {
        rollNo = ++rollCounter;
    }

    void inputMarks() {
        cout << "Enter 5 Theory marks: ";
        for(int i=0; i<5; i++) cin >> theory[i];
        cout << "Enter 5 Practical marks: ";
        for(int i=0; i<5; i++) cin >> practical[i];
    }

    char calculateGrade(float m) {
        if (m >= 80) return 'A';
        if (m >= 60) return 'B';
        return 'C';
    }

    void display() {
        cout << "\nRoll No: " << rollNo << " | Name: " << name << endl;
        for(int i=0; i<5; i++) {
            cout << "Sub " << i+1 << " Grade: " << calculateGrade(theory[i] + practical[i]) << endl;
        }
    }
};

int MarkSheet::rollCounter = 1000; // Starting roll number

int main() {
    MarkSheet s1("Alice", "IIPS123");
    s1.inputMarks();
    s1.display();
    return 0;
}