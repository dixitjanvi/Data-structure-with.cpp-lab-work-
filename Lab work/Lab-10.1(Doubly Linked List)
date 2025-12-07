//Doubly Linked List
//10.1 Implementation of a Doubly Linked List, along with the basic operations commonly needed:
//● Operations Covered
//● Insertion at the end
//● Forward traversal
//● Backward traversal


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* head = NULL;

// Insert at end
void insertAtEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (head == NULL) {      
        head = newNode;
    }
    else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    cout << "Inserted: " << value << " at end\n";
}

// Forward Traversal
void displayForward() {
    cout << "Forward List: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Backward Traversal
void displayBackward() {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    // Move to LAST node
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Traverse backward
    cout << "Backward List: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << "NULL\n";
}

int main() {
    int choice, value;

    do {
        cout << "\n--- Doubly Linked List Menu ---\n";
        cout << "1. Insert at End\n";
        cout << "2. Display Forward\n";
        cout << "3. Display Backward\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                insertAtEnd(value);
                break;

            case 2:
                displayForward();
                break;

            case 3:
                displayBackward();
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while(choice != 4);

    return 0;
}
