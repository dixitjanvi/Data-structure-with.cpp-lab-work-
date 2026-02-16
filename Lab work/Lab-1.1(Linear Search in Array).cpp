//1.1 Student Roll Number Check
//A college maintains a list of student roll numbers enrolled in a specific course. Given the list of
//enrolled roll numbers, write a program to check if a particular student (based on their roll
//number) is enrolled or not. Display the index position if found.


#include <iostream>
using namespace std;

int main() {
    int n, key;

    // Input number of students
    cout << "Enter number of enrolled students: ";
    cin >> n;

    int roll[n];

    // Input roll numbers
    cout << "Enter the roll numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> roll[i];
    }

    // Roll number to search
    cout << "Enter roll number to search: ";
    cin >> key;

    // Linear Search
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (roll[i] == key) {
            index = i;
            break;
        }
    }

    // Output result
    if (index != -1) {
        cout << "Student found at index: " << index << endl;
    } else {
        cout << "Student NOT enrolled in this course!" << endl;
    }

    return 0;
}
