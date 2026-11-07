#include <iostream>
#include <cstring>
using namespace std;

class Simple {
    char *str;
public:
    // Constructor
    Simple(const char *s) {
        int len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
    }

    // Copy constructor (deep copy)
    Simple(const Simple &other) {
        int len = strlen(other.str);
        str = new char[len + 1];
        strcpy(str, other.str);
        // Now this->str is independent of other.str
    }

    // Destructor
    ~Simple() {
        delete[] str;
    }

    void show() {
        cout << str << endl;
    }
};

int main() {
    Simple a("Hello");
    Simple b = a;  // calls copy constructor
    b.show();       // prints “Hello”
    return 0;
}
