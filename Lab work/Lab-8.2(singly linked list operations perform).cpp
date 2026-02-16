//8.2 Perform Operations on Singly Linked List
//● Insert at the Beginning
//● Insert at the End
//● Count Number of Nodes
//● Search for an Element
//● Reverse the Linked List

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// Insert at Beginning
void insertAtBeginning(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    cout << "Inserted at beginning: " << value << endl;
}

// Insert at End
void insertAtEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
    cout << "Inserted at end: " << value << endl;
}

// Count Nodes
int countNodes() {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Search an Element
bool searchElement(int key) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == key)
            return true;
        temp = temp->next;
    }
    return false;
}

// Reverse Linked List
void reverseList() {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;

    cout << "Linked List Reversed Successfully!" << endl;
}

// Display List
void displayList() {
    if (head == NULL) {
        cout << "List is Empty!" << endl;
        return;
    }
    Node* temp = head;
    cout << "Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Main Function with Menu
int main() {
    int choice, value;

    while (true) {
        cout << "\n--- Singly Linked List Menu ---\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Count Number of Nodes\n";
        cout << "4. Search for an Element\n";
        cout << "5. Reverse the Linked List\n";
        cout << "6. Display List\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            insertAtBeginning(value);
            break;

        case 2:
            cout << "Enter value: ";
            cin >> value;
            insertAtEnd(value);
            break;

        case 3:
            cout << "Total Nodes = " << countNodes() << endl;
            break;

        case 4:
            cout << "Enter element to search: ";
            cin >> value;
            if (searchElement(value))
                cout << value << " found in the list." << endl;
            else
                cout << value << " NOT found in the list." << endl;
            break;

        case 5:
            reverseList();
            break;

        case 6:
            displayList();
            break;

        case 7:
            cout << "Exiting..." << endl;
            return 0;

        default:
            cout << "Invalid Choice!" << endl;
        }
    }
}
