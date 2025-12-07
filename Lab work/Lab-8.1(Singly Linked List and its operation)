//8.1 Demonstrates how to create a simple singly linked list by manually linking nodes and then
//displaying its elements sequentially from head to tail.

#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of nodes.\n";
        return 0;
    }

    Node* head = nullptr;
    Node* temp = nullptr;

    cout << "Enter " << n << " values:\n";

    // Creating list from user input
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;

        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;   // first node
            temp = head;
        } else {
            temp->next = newNode;  // link next node
            temp = newNode;
        }
    }

    // Display list
    cout << "\nSingly Linked List elements: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
    return 0;
}
