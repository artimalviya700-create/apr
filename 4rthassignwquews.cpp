#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], result[10][10], r1, c1, r2, c2, choice;

    cout << "Enter rows and columns for Matrix A: ";
    cin >> r1 >> c1;
    cout << "Enter elements for Matrix A:\n";
    for(int i=0; i<r1; i++)
        for(int j=0; j<c1; j++)
               cin >> a[i][j];

    cout << "Enter rows and columns for Matrix B: ";
    cin >> r2 >> c2;
    cout << "Enter elements for Matrix B:\n";
    for(int i=0; i<r2; i++)
        for(int j=0; j<c2; j++) 
        cin >> b[i][j];

    do {
        cout << "\n1. Display\n2. Add\n3. Multiply\n4. Transpose A\n5. Exit\nChoice: ";
        cin >> choice;

        switch(choice) {
            case 1: // Display
                cout << "Matrix A:\n";
                for(int i=0; i<r1; i++) {
                    for(int j=0; j<c1; j++) 
                    cout << a[i][j] << " ";
                    cout << endl;
                }
                break;

            case 2: // Addition
                if(r1 == r2 && c1 == c2) {
                    for(int i=0; i<r1; i++)
                        for(int j=0; j<c1; j++)
                         result[i][j] = a[i][j] + b[i][j];
                    
                    cout << "Sum:\n";
                    for(int i=0; i<r1; i++) {
                        for(int j=0; j<c1; j++) 
                        cout << result[i][j] << " ";
                        cout << endl;
                    }
                } else cout << "Sizes don't match for addition!\n";
                break;

            case 3: // Multiplication
                if(c1 == r2) {
                    for(int i=0; i<r1; i++) {
                        for(int j=0; j<c2; j++) {
                            result[i][j] = 0;
                            for(int k=0; k<c1; k++) 
                            result[i][j] += a[i][k] * b[k][j];
                        }
                    }
                    cout << "Product:\n";
                    for(int i=0; i<r1; i++) {
                        for(int j=0; j<c2; j++) 
                        cout << result[i][j] << " ";
                        cout << endl;
                    }
                } else cout << "Cannot multiply these matrices!\n";
                break;

            case 4: // Transpose
                cout << "Transpose of A:\n";
                for(int i=0; i<c1; i++) {
                    for(int j=0; j<r1; j++)
                     cout << a[j][i] << " ";
                    cout << endl;
                }
                break;
        }
    } while(choice != 5);

    return 0;
}