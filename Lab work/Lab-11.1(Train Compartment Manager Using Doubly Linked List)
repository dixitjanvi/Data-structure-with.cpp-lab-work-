//Train Compartment Manager Using Doubly Linked List
//Description:
//11.1 A train consists of compartments (coaches) that can be added at the end or beginning,
//viewed from front to back or back to front, and removed by their coach number. Use a doubly
//linked list to manage this train.
//Tasks to Perform:
//● Add a coach at the end of the train.
//● Add a coach at the beginning of the train.
//● Display the train from front to rear.
//● Display the train from rear to front.
//● Remove a coach by its number.

#include <iostream>
using namespace std;

struct Node {
    int coach;
    Node* next;
    Node* prev;
};

Node* head = NULL;

// Add coach at beginning
void addAtBeginning(int c) {
    Node* newNode = new Node();
    newNode->coach = c;
    newNode->next = head;
    newNode->prev = NULL;

    if (head != NULL)
        head->prev = newNode;

    head = newNode;

    cout << "Coach " << c << " added at the beginning.\n";
}

// Add coach at end
void addAtEnd(int c) {
    Node* newNode = new Node();
    newNode->coach = c;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (head == NULL) {
        head = newNode;
        cout << "Coach " << c << " added at the end.\n";
        return;
    }

    Node* temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;

    cout << "Coach " << c << " added at the end.\n";
}

// Display front → rear
void displayForward() {
    cout << "Train (Front → Rear): ";
    Node* temp = head;

    if (temp == NULL) {
        cout << "No coaches.\n";
        return;
    }

    while (temp != NULL) {
        cout << temp->coach << " ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Display rear → front
void displayBackward() {
    cout << "Train (Rear → Front): ";
    if (head == NULL) {
        cout << "No coaches.\n";
        return;
    }

    Node* temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    while (temp != NULL) {
        cout << temp->coach << " ";
        temp = temp->prev;
    }
    cout << "NULL\n";
}

// Remove coach by number
void removeCoach(int c) {
    if (head == NULL) {
        cout << "Train is empty.\n";
        return;
    }

    Node* temp = head;

    // Search
    while (temp != NULL && temp->coach != c)
        temp = temp->next;

    if (temp == NULL) {
        cout << "Coach " << c << " not found.\n";
        return;
    }

    // Remove cases
    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    delete temp;

    cout << "Coach " << c << " removed from train.\n";
}

int main() {
    int choice, c;

    do {
        cout << "\n--- Train Compartment Manager ---\n";
        cout << "1. Add coach at Beginning\n";
        cout << "2. Add coach at End\n";
        cout << "3. Display Front to Rear\n";
        cout << "4. Display Rear to Front\n";
        cout << "5. Remove Coach by Number\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter coach number: ";
                cin >> c;
                addAtBeginning(c);
                break;

            case 2:
                cout << "Enter coach number: ";
                cin >> c;
                addAtEnd(c);
                break;

            case 3:
                displayForward();
                break;

            case 4:
                displayBackward();
                break;

            case 5:
                cout << "Enter coach number to remove: ";
                cin >> c;
                removeCoach(c);
                break;

            case 6:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 6);

    return 0;
}
