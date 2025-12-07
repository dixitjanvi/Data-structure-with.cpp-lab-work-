//12.2 Product Price List Sorting
//Problem Statement:
//You are developing a billing system for a small retail store. Each day, the system receives a list
//of product prices (in rupees). To assist in price analysis and billing, you need to sort this list in
//ascending order so that the lowest-priced items appear first.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    int price[n];

    cout << "Enter product prices:\n";
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    // Bubble Sort (Ascending Order)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (price[j] > price[j + 1]) {
                int temp = price[j];
                price[j] = price[j + 1];
                price[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted Prices (Ascending): ";
    for (int i = 0; i < n; i++) {
        cout << price[i] << " ";
    }

    return 0;
}
