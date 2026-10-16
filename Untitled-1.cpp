#include <iostream>
#include <string>
using namespace std;

class student {
public:
    string name;
    int age;
    bool gender;

    void printinfo() {
        cout << name << " " << age << " " << gender << endl;
    }
};

int main() {
    student arr[3];

    for(int i = 0; i < 3; i++) {
        cout << "name: ";
        cin >> arr[i].name;

        cout << "age: ";
        cin >> arr[i].age;

        cout << "gender (1/0): ";
        cin >> arr[i].gender;
    }

    for(int i = 0; i < 3; i++) {
        arr[i].printinfo();
    }

    return 0;
}
