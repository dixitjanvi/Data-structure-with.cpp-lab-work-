//4.2 "Switching Rows and Columns in a Seating Arrangement: Transpose Operation"
//A university arranges student seating in an examination hall using a grid layout (matrix), where
//each cell contains a student's roll number. However, due to last-minute rearrangement for social
//distancing, the university decides to rotate the seating plan so that rows become columns and
//vice versa.
//To help automate this process, you are asked to write a C++ program that takes the original
//seating matrix (m × n) and prints its transposed version — where each student's position is
//switched such that matrix[i][j] becomes matrix[j][i].

#include <iostream>
using namespace std;

int main() {
    int m, n;

    // Input seating matrix size
    cout << "Enter number of rows (m): ";
    cin >> m;
    cout << "Enter number of columns (n): ";
    cin >> n;

    int seat[m][n], trans[n][m];

    // Input original seating arrangement
    cout << "Enter the seating arrangement (roll numbers):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> seat[i][j];
        }
    }

    // Print Original Seating Matrix
    cout << "\nOriginal Seating Arrangement:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << seat[i][j] << " ";
        }
        cout << endl;
    }

    // Create Transpose (switch rows & columns)
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            trans[j][i] = seat[i][j];
        }
    }

    // Print Transposed Seating Matrix
    cout << "\nTransposed Seating Arrangement (Rows <-> Columns):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
