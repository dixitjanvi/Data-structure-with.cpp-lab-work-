//9.1 Student Attendance Tracker
//Operations:
//● Add student roll number (insert at end)
//● Display attendance list (traversal)
//● Remove a student (delete by roll number)


#include <iostream>
using namespace std;

struct Node {
    int roll;
    Node* next;
};

Node* head = NULL;

// Add Student (Insert at End)
void addStudent(int roll) {
    Node* newNode = new Node();
    newNode->roll = roll;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
    cout << "Student with Roll No. " << roll << " added successfully.\n";
}

// Display Attendance List
void displayAttendance() {
    if (head == NULL) {
        cout << "Attendance list is empty.\n";
        return;
    }

    Node* temp = head;
    cout << "\nAttendance List:\n";
    while (temp != NULL) {
        cout << temp->roll << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Remove a Student (Delete by Roll Number)
void removeStudent(int roll) {
    if (head == NULL) {
        cout << "Attendance list is empty.\n";
        return;
    }

    Node* temp = head;
    Node* prev = NULL;

    // If the student to delete is at the head
    if (temp != NULL && temp->roll == roll) {
        head = temp->next;
        delete temp;
        cout << "Student with Roll No. " << roll << " removed.\n";
        return;
    }

    // Search for the roll number
    while (temp != NULL && temp->roll != roll) {
        prev = temp;
        temp = temp->next;
    }

    // If roll number not found
    if (temp == NULL) {
        cout << "Student with Roll No. " << roll << " not found.\n";
        return;
    }

    // Unlink the node
    prev->next = temp->next;
    delete temp;

    cout << "Student with Roll No. " << roll << " removed.\n";
}

// Main Menu
int main() {
    int choice, roll;

    while (true) {
        cout << "\n--- Student Attendance Tracker ---\n";
        cout << "1. Add Student Roll Number\n";
        cout << "2. Display Attendance List\n";
        cout << "3. Remove a Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Roll Number: ";
            cin >> roll;
            addStudent(roll);
            break;

        case 2:
            displayAttendance();
            break;

        case 3:
            cout << "Enter Roll Number to Remove: ";
            cin >> roll;
            removeStudent(roll);
            break;

        case 4:
            cout << "Exiting...\n";
            return 0;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    }
}
