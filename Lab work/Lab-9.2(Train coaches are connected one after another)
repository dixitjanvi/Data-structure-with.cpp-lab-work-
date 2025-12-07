//9.2 Train coaches are connected one after another.
//Operations:
//● Add a new coach at the end.
//● Display the connected coaches.
//● Remove a specific coach by number.


#include <iostream>
using namespace std;

struct Node {
    int coachNo;
    Node* next;
};

Node* head = NULL;

// Add coach at the end
void addCoach(int no) {
    Node* newNode = new Node();
    newNode->coachNo = no;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
    cout << "Coach " << no << " added successfully.\n";
}

// Display connected coaches
void displayCoaches() {
    if (head == NULL) {
        cout << "No coaches connected.\n";
        return;
    }

    Node* temp = head;
    cout << "\nConnected Coaches:\n";
    while (temp != NULL) {
        cout << temp->coachNo << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Remove specific coach by number
void removeCoach(int no) {
    if (head == NULL) {
        cout << "No coaches to remove.\n";
        return;
    }

    Node* temp = head;
    Node* prev = NULL;

    // If the coach to remove is the head
    if (temp != NULL && temp->coachNo == no) {
        head = temp->next;
        delete temp;
        cout << "Coach " << no << " removed.\n";
        return;
    }

    // Search for the coach
    while (temp != NULL && temp->coachNo != no) {
        prev = temp;
        temp = temp->next;
    }

    // If coach not found
    if (temp == NULL) {
        cout << "Coach " << no << " not found.\n";
        return;
    }

    // Remove the coach
    prev->next = temp->next;
    delete temp;

    cout << "Coach " << no << " removed.\n";
}

// MAIN MENU
int main() {
    int choice, no;

    while (true) {
        cout << "\n--- Train Coach Management ---\n";
        cout << "1. Add New Coach\n";
        cout << "2. Display Connected Coaches\n";
        cout << "3. Remove Coach\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Coach Number: ";
            cin >> no;
            addCoach(no);
            break;

        case 2:
            displayCoaches();
            break;

        case 3:
            cout << "Enter Coach Number to Remove: ";
            cin >> no;
            removeCoach(no);
            break;

        case 4:
            cout << "Exiting...\n";
            return 0;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    }
}
