//3.2 “Warehouse Stock Adjustment: Subtract Damaged Items from Total Inventory”
//A warehouse manager maintains records of total inventory items in a grid layout for multiple
//sections and rows (like a matrix). After an inspection, a report of damaged items for the same
//sections is recorded.
//To update the system and determine how many undamaged items are available in each section,
//the manager needs a program that subtracts the damaged items matrix from the total stock
//matrix.

#include <iostream>
using namespace std;

int main() {
    int total[3][3], damaged[3][3], undamaged[3][3];

    // Input Total Stock Matrix
    cout << "Enter Total Stock Matrix (3x3):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> total[i][j];
        }
    }

    // Input Damaged Stock Matrix
    cout << "Enter Damaged Stock Matrix (3x3):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> damaged[i][j];
        }
    }

    // Subtract Damaged Stock from Total Stock
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            undamaged[i][j] = total[i][j] - damaged[i][j];
        }
    }

    // Output Undamaged Stock Matrix
    cout << "\nUndamaged Stock Matrix (Total - Damaged):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << undamaged[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
