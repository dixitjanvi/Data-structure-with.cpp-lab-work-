//4.1 Develop a C++ program that computes and displays the transpose of an m × n matrix by
//interchanging its rows and columns.

#include <iostream>
using namespace std;

int main() {
    int m, n;

    // Input matrix size
    cout << "Enter number of rows (m): ";
    cin >> m;
    cout << "Enter number of columns (n): ";
    cin >> n;

    int a[m][n], t[n][m];

    // Input matrix
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // Print Original Matrix
    cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Compute Transpose
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            t[j][i] = a[i][j];
        }
    }

    // Print Transpose Matrix
    cout << "\nTranspose of Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
