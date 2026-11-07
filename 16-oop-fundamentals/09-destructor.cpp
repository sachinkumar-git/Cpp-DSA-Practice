#include <iostream>
using namespace std;

class Bike {
public:
    int tyreSize;
    int engineSize;  // Declare engineSize as a member variable

    // Constructor that accepts both tyreSize and engineSize
    Bike(int tyreSize, int engineSize) {
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
    }
 ~Bike(){
    cout<<"distructor call hua"<<endl;
 }
};

int main() {
    // Create objects with both tyreSize and engineSize values
    Bike tvs(12, 100);
    Bike honda(13, 150);  
    Bike royalEnfield(15, 350);
    Bike bajaj(13, 180);   // Providing engineSize for bajaj as well

    // Output the values of tyreSize and engineSize for each object
    cout << tvs.tyreSize << " " << tvs.engineSize << endl;
    cout << honda.tyreSize << " " << honda.engineSize << endl;
    cout << royalEnfield.tyreSize << " " << royalEnfield.engineSize << endl;
    cout << bajaj.tyreSize << " " << bajaj.engineSize << endl;

    return 0;
}
