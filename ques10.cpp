#include <iostream>
using namespace std;

class Distance {
private:
    int meters;
    int centimeters;

public:
    // Constructor
    Distance() {
        meters = 0;
        centimeters = 0;
    }

    // i. Overload '+' operator using Member Function
    Distance operator+(const Distance& d) {
        Distance temp;
        temp.meters = meters + d.meters;
        temp.centimeters = centimeters + d.centimeters;
        
        // Adjustment: if cm >= 100
        if (temp.centimeters >= 100) {
            temp.meters += temp.centimeters / 100;
            temp.centimeters %= 100;
        }
        return temp;
    }

    // ii. Declaration: Overload '-' operator using Friend Function
    friend Distance operator-(const Distance& d1, const Distance& d2);

    // iii. Declaration: Overload >> and << operators
    friend istream& operator>>(istream& input, Distance& d);
    friend ostream& operator<<(ostream& output, const Distance& d);
};

// --- Friend Function Definitions (Class के बाहर) ---

// '-' Operator Definition
Distance operator-(const Distance& d1, const Distance& d2) {
    Distance temp;
    int totalCm1 = (d1.meters * 100) + d1.centimeters;
    int totalCm2 = (d2.meters * 100) + d2.centimeters;
    int diff = totalCm1 - totalCm2;

    temp.meters = diff / 100;
    temp.centimeters = diff % 100;
    return temp;
}

// '>>' Operator Definition (Input के लिए)
istream& operator>>(istream& input, Distance& d) {
    cout << "Enter Meters: ";
    input >> d.meters;
    cout << "Enter Centimeters: ";
    input >> d.centimeters;
    return input;
}

// '<<' Operator Definition (Display के लिए)
ostream& operator<<(ostream& output, const Distance& d) {
    output << d.meters << " m and " << d.centimeters << " cm";
    return output;
}

// --- Menu Driven Main Program ---

int main() {
    Distance d1, d2, result;
    int choice;

    do {
        cout << "\n===== DISTANCE MENU =====";
        cout << "\n1. Input Two Distances";
        cout << "\n2. Addition (d1 + d2)";
        cout << "\n3. Subtraction (d1 - d2)";
        cout << "\n4. Display Result";
        cout << "\n0. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter first distance:\n";
                cin >> d1; // Overloaded >>
                cout << "\nEnter second distance:\n";
                cin >> d2; // Overloaded >>
                break;
            case 2:
                result = d1 + d2; // Member function call
                cout << "\nDistances Added Successfully!"<<result;
                break;
            case 3:
                result = d1 - d2; // Friend function call
                cout << "\nDistances Subtracted Successfully!"<<result ;
                break;
            case 4:
                cout << "\nFinal Distance: " << result << endl; // Overloaded <<
                break;
            case 0:
                cout << "Exiting Program...\n";
                break;
            default:
                cout << "Invalid Choice! Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
