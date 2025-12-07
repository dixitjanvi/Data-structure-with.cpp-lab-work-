//Evaluate a Postfix Expression using Stack
//6.1 Write a C++ program to evaluate a postfix expression using stack operations.

#include <iostream>
using namespace std;

#define MAX 20

class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() { top = -1; }

    void push(int x) {
        if (top == MAX - 1) {
            cout << "Stack Overflow!\n";
        } else {
            arr[++top] = x;
        }
    }

    int pop() {
        if (top == -1) {
            cout << "Stack Underflow!\n";
            return -1;
        } else {
            return arr[top--];
        }
    }
};

int main() {
    Stack s;
    char exp[50];

    cout << "Enter Postfix Expression: ";
    cin >> exp;

    for (int i = 0; exp[i] != '\0'; i++) {
        char ch = exp[i];

        // If operand (number)
        if (isdigit(ch)) {
            s.push(ch - '0');   // Convert char digit to integer
        }
        // If operator
        else {
            int val2 = s.pop();
            int val1 = s.pop();
            int result;

            switch (ch) {
                case '+': result = val1 + val2; break;
                case '-': result = val1 - val2; break;
                case '*': result = val1 * val2; break;
                case '/': result = val1 / val2; break;
                default:
                    cout << "Invalid operator!";
                    return 0;
            }
            s.push(result);
        }
    }

    cout << "Result = " << s.pop() << endl;

    return 0;
}
