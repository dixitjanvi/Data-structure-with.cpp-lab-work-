//7.1 Perform fundamental operations of a queue: inserting an element at the rear and deleting
//from the front.

#include <iostream>
using namespace std;

#define MAX 5   // queue size

class Queue {
    int arr[MAX];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Insert element at rear
    void enqueue(int x) {
        if (rear == MAX - 1) {
            cout << "Queue Overflow! Cannot insert " << x << endl;
            return;
        }
        if (front == -1) front = 0;  // first element
        arr[++rear] = x;
        cout << x << " inserted into the queue." << endl;
    }

    // Delete element from front
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow! No elements to delete." << endl;
            return;
        }
        cout << arr[front] << " deleted from the queue." << endl;
        front++;
    }

    // Display queue
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    int choice, value;

    while (true) {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                q.enqueue(value);
                break;

            case 2:
                q.dequeue();
                break;

            case 3:
                q.display();
                break;

            case 4:
                return 0;

            default:
                cout << "Invalid choice!" << endl;
        }
    }
}
