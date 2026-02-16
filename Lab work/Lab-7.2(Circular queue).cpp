//7.2 Parking Lot Management using Circular Queue
//A parking lot has a limited number of parking spaces (say 5). Cars arrive and are parked in the
//order they come. When a car leaves, the next arriving car can take its spot. However, the lot is
//circular in design (like a rotating queue), so when the end is reached, new cars can park at the
//beginning if there’s a vacant space.
//Implement a Circular Queue system to manage this.


#include <iostream>
using namespace std;

#define SIZE 5   // Total parking spaces

class CircularQueue {
    int arr[SIZE];
    int front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    // Car arrives (enqueue)
    void parkCar(int carNumber) {
        if ((front == 0 && rear == SIZE - 1) || (rear + 1) % SIZE == front) {
            cout << "Parking Full! Car " << carNumber << " cannot be parked.\n";
            return;
        }

        if (front == -1) { 
            front = rear = 0;
        } else {
            rear = (rear + 1) % SIZE;
        }

        arr[rear] = carNumber;
        cout << "Car " << carNumber << " parked at position " << rear << ".\n";
    }

    // Car leaves (dequeue)
    void removeCar() {
        if (front == -1) {
            cout << "Parking Lot Empty! No car to remove.\n";
            return;
        }

        cout << "Car " << arr[front] << " removed from position " << front << ".\n";

        if (front == rear) {
            front = rear = -1; // Parking empty now
        } else {
            front = (front + 1) % SIZE;
        }
    }

    // Display parking lot
    void displayParking() {
        if (front == -1) {
            cout << "Parking lot is empty.\n";
            return;
        }

        cout << "Cars currently parked: ";
        int i = front;

        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue parking;
    int choice, car;

    while (true) {
        cout << "\n--- Parking Lot Menu ---\n";
        cout << "1. Park Car\n2. Remove Car\n3. Display Parking\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Car Number: ";
                cin >> car;
                parking.parkCar(car);
                break;

            case 2:
                parking.removeCar();
                break;

            case 3:
                parking.displayParking();
                break;

            case 4:
                return 0;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
}
