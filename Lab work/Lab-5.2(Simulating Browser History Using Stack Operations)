//5.2 "Simulating Browser History Using Stack Operations"
//You are developing a browser application that keeps track of visited web pages. Every time a
//user opens a new page, it is pushed onto the history stack. When the user presses the "Back"
//button, the most recently visited page is popped from the stack, just like in real browser history.
//To simulate this, write a C++ program that performs push and pop operations on a stack of page
//URLs (or page IDs).


#include <iostream>
#include <string>
using namespace std;

#define MAX 10   // Maximum history size

class BrowserHistory {
private:
    string history[MAX];
    int top;

public:
    BrowserHistory() {
        top = -1;
    }

    // Push page (visit new page)
    void visitPage(string url) {
        if (top == MAX - 1) {
            cout << "History Full! Cannot visit new page.\n";
        } else {
            history[++top] = url;
            cout << "Visited: " << url << endl;
        }
    }

    // Pop page (go back)
    void goBack() {
        if (top == -1) {
            cout << "No history available! Cannot go back.\n";
        } else {
            cout << "Going back from: " << history[top] << endl;
            top--;
        }
    }

    // Display history
    void showHistory() {
        if (top == -1) {
            cout << "History is empty.\n";
            return;
        }

        cout << "\nCurrent Browser History:\n";
        for (int i = 0; i <= top; i++) {
            cout << history[i] << endl;
        }
    }
};

int main() {
    BrowserHistory bh;
    int choice;
    string url;

    do {
        cout << "\n--- Browser History Menu ---\n";
        cout << "1. Visit New Page (Push)\n";
        cout << "2. Go Back (Pop)\n";
        cout << "3. Show History\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter page URL: ";
                cin >> url;
                bh.visitPage(url);
                break;

            case 2:
                bh.goBack();
                break;

            case 3:
                bh.showHistory();
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
