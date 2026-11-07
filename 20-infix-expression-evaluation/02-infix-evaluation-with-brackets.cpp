#include <iostream>
#include <stack>
using namespace std;

int priority(char ch) {
    if (ch == '+' || ch == '-') return 1;
    else return 2; // for '*' and '/'
}

int solve(int val1, int val2, char ch) {
    if (ch == '+') return val1 + val2;
    else if (ch == '-') return val1 - val2;
    else if (ch == '*') return val1 * val2;
    else return val1 / val2;
}

int main() {
    string s = "(7+9)*4/8-3"; // infix expression
    stack<int> val;
    stack<char> op;

    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            val.push(s[i] - '0'); // convert char digit to int
        }
        else if (s[i] == '(') {
            op.push(s[i]);
        }
        else if (s[i] == ')') {
            while (!op.empty() && op.top() != '(') {
                char ch = op.top(); op.pop();
                int val2 = val.top(); val.pop();
                int val1 = val.top(); val.pop();
                val.push(solve(val1, val2, ch));
            }
            if (!op.empty()) op.pop(); // remove '('
        }
        else { // operator
            while (!op.empty() && op.top() != '(' && priority(s[i]) <= priority(op.top())) {
                char ch = op.top(); op.pop();
                int val2 = val.top(); val.pop();
                int val1 = val.top(); val.pop();
                val.push(solve(val1, val2, ch));
            }
            op.push(s[i]);
        }
    }

    while (!op.empty()) {
        char ch = op.top(); op.pop();
        int val2 = val.top(); val.pop();
        int val1 = val.top(); val.pop();
        val.push(solve(val1, val2, ch));
    }

    cout << val.top() << endl;
    return 0;
}
