#include <iostream>
using namespace std;

class complexNumber {
public:
    int imaginary;
    int real;

    // Add two complex numbers and return the result
    // complexNumber add(complexNumber &c1) {
    //     complexNumber c3;
    //     c3.imaginary = c1.imaginary + this->imaginary;
    //     c3.real = c1.real + this->real;
    //     return c3;  // Return the result
    // }


    complexNumber operator +(complexNumber &c1){
        complexNumber c3;
        c3.imaginary = c1.imaginary + this->imaginary;
        c3.real = c1.real + this->real;
        return c3;  // Return the result
    }
    complexNumber operator -(complexNumber &c1){
        complexNumber c3;
        c3.imaginary = c1.imaginary - this->imaginary;
        c3.real = c1.real - this->real;
        return c3;  // Return the result
    }
};

int main() {
    complexNumber a1, a2;

    // Assign values to the complex numbers
    a1.imaginary = 10;
    a1.real = 5;

    a2.imaginary = 2;  // Fix the assignment to imaginary
    a2.real = 3;       // Assign real part for a2

    // Add the complex numbers
    complexNumber a3 = a1 + a2;
    complexNumber a4 = a1 - a2;

    // Print the result
    cout << "real: " << a3.real << " imaginary: " << a3.imaginary << endl;
    cout << "real: " << a4.real << " imaginary: " << a4.imaginary << endl;
    return 0;
}
