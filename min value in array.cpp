#include<iostream>
using namespace std;
#include <limits> // Required for std::numeric_limits

int main() {
    int arr[] = {100, 55, 200, 87, 150};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Initialize min_value with a very large number or the first element
    int min_value = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] < min_value) {
            min_value = arr[i]; // Update if a smaller element is found
        }
    }

    std::cout << "The minimum value in the array is: " << min_value << std::endl;

    return 0;
}
