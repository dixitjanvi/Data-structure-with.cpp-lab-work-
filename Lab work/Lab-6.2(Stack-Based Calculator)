//6.2 Solving Math Problems Step-by-Step Like a Stack-Based Calculator
//Imagine a student is using a basic math calculator that can only perform one operation at a time
//and always processes numbers in the order they were typed in postfix format (e.g., 5 3 +
//instead of 5 + 3).
//Since the calculator doesn't understand brackets or operator precedence, it uses a stack to
//evaluate the expression.



#include <iostream>
#include <stack>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Print stack from bottom -> top
void printStack(const stack<double>& s) {
    if (s.empty()) {
        cout << "[ empty ]\n";
        return;
    }
    stack<double> tmp = s;
    vector<double> vals;
    while (!tmp.empty()) { vals.push_back(tmp.top()); tmp.pop(); }
    cout << "[ bottom ";
    for (int i = (int)vals.size() - 1; i >= 0; --i) {
        cout << fixed << setprecision(6) << vals[i];
        if (i != 0) cout << " , ";
    }
    cout << " top ]\n";
}

bool isOperator(const string& t) {
    return t == "+" || t == "-" || t == "*" || t == "/";
}

int main() {
    cout << "Enter a postfix expression (tokens space-separated).\n";
    cout << "Example: 5 3 + 8 2 - *\n";
    cout << "Supported operators: + - * /\n\n";

    string line;
    if (!std::getline(cin, line) || line.find_first_not_of(" \t\r\n") == string::npos) {
        cout << "No expression entered. Exiting.\n";
        return 0;
    }

    stringstream ss(line);
    string token;
    stack<double> st;
    int step = 1;

    while (ss >> token) {
        cout << "\nStep " << step++ << ": Read token -> '" << token << "'\n";

        if (isOperator(token)) {
            if (st.size() < 2) {
                cout << "Error: Not enough operands for operator '" << token << "'.\n";
                return 0;
            }
            double rhs = st.top(); st.pop();
            double lhs = st.top(); st.pop();
            cout << "  Pop RHS = " << rhs << ", Pop LHS = " << lhs << "\n";

            double res = 0.0;
            if (token == "+") res = lhs + rhs;
            else if (token == "-") res = lhs - rhs;
            else if (token == "*") res = lhs * rhs;
            else if (token == "/") {
                if (rhs == 0.0) {
                    cout << "Error: Division by zero.\n";
                    return 0;
                }
                res = lhs / rhs;
            }

            cout << "  Compute: " << lhs << " " << token << " " << rhs << " = " << res << "\n";
            st.push(res);
            cout << "  Push result -> " << res << "\n";
            cout << "  Stack now: "; printStack(st);
        } else {
            // try parse as double
            try {
                size_t idx = 0;
                double val = stod(token, &idx);
                if (idx != token.size()) throw invalid_argument("bad");
                st.push(val);
                cout << "  Token is number -> Push " << val << "\n";
                cout << "  Stack now: "; printStack(st);
            } catch (...) {
                cout << "Error: Invalid token '" << token << "'. Tokens must be numbers or operators.\n";
                return 0;
            }
        }
    }

    cout << "\n--- Evaluation finished ---\n";
    if (st.empty()) {
        cout << "No result on stack (stack empty).\n";
    } else if (st.size() > 1) {
        cout << "Warning: Multiple values remain on stack (expression may be invalid).\n";
        cout << "Stack contents: "; printStack(st);
        cout << "Top of stack taken as result: " << fixed << setprecision(6) << st.top() << "\n";
    } else {
        cout << "Final Result = " << fixed << setprecision(6) << st.top() << "\n";
    }

    return 0;
}
