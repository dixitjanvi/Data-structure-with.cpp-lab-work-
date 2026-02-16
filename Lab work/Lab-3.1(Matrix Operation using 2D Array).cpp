//3.1 "Perform matrix addition of two 3×3 arrays named a and b and store the result in a third
//matrix."

#include <iostream>
using namespace std;

int main() {
    int a[3][3], b[3][3], c[3][3];

    // Input Matrix A
    cout << "Enter elements of Matrix A (3x3):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    // Input Matrix B
    cout << "Enter elements of Matrix B (3x3):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> b[i][j];
        }
    }

    // Matrix Addition: C = A + B
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Output Result
    cout << "\nResultant Matrix (A + B):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
