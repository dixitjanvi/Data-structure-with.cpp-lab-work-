//1.2 Employee ID Verification
//The HR department maintains a sorted list of employee IDs for all active employees. To improve
//the efficiency of employee verification, you are required to implement a binary search algorithm
//to check whether a given employee ID exists in the list.


#include <iostream>
using namespace std;

// Binary Search Function
int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == key)
            return mid;         // ID found
        else if (arr[mid] < key)
            left = mid + 1;     // Search in right half
        else
            right = mid - 1;    // Search in left half
    }

    return -1;  // ID not found
}

int main() {
    int n, key;

    // Input number of employees
    cout << "Enter number of employees: ";
    cin >> n;

    int emp[n];

    // Input sorted employee IDs
    cout << "Enter employee IDs (sorted):\n";
    for (int i = 0; i < n; i++) {
        cin >> emp[i];
    }

    // ID to search
    cout << "Enter employee ID to search: ";
    cin >> key;

    // Perform Binary Search
    int index = binarySearch(emp, n, key);

    // Output
    if (index != -1)
        cout << "Employee ID found at index: " << index << endl;
    else
        cout << "Employee ID NOT found in list!" << endl;

    return 0;
}
