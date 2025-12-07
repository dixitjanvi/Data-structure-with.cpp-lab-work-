//2.1 Write a program to count total Even and Odd numbers in an array and print them.

#include <iostream>
using namespace std;

int main() {
    int n;

    // Input size of array
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int evenCount = 0, oddCount = 0;

    // Count even and odd numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    // Output results
    cout << "Total Even Numbers: " << evenCount << endl;
    cout << "Total Odd Numbers: " << oddCount << endl;

    return 0;
}
