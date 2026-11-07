#include <iostream>
using namespace std;

class Bike {
public:
    int tyreSize;

    // default Constructor that accepts both tyreSize and engineSize
    Bike() {
        cout<<"constructor call hua"<<endl;
       
    }
};

int main() {
    Bike tvs; // object creation // constructor ko call jayega
    Bike honda;  
 

    return 0;
}
