#include <iostream>
using namespace std;


void swapNumbers(int &x, int &y) {
    int temp;   
    temp = x;   
    x = y;      
    y = temp;   
}

int main() {
    int a = 5, b = 10;

    cout << "Before swapping: a = " << a << ", b = " << b <<endl;
    swapNumbers(a, b);

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
