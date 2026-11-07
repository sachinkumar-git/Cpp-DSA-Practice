#include <iostream>
using namespace std;

// Function starTriangle takes one parameter 'x'
// Parameter: 'x' is a placeholder variable that will receive a value when the function is called
void starTriangle(int x) {
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    // Calling starTriangle function with the argument 3
    // Argument: 3 is the actual value passed to the parameter 'x' when the function is called
    starTriangle(3);

    // Calling starTriangle function with argument 4
    starTriangle(4);

    // Calling starTriangle function with argument 5
    starTriangle(5);

    return 0;
}
