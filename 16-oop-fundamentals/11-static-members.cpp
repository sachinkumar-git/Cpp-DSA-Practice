#include <iostream>
using namespace std;

class Bike {
public:
 static int  noOfBikes; // this beelongs to the class
    int tyreSize;
    int engineSize;  
    Bike(int tyreSize, int engineSize = 200) {
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
    }
    static void increaseNoOfBikes(){
        noOfBikes++;
    }
};

void print(){
   static int b = 10;
    cout<<b<<endl;
    b++;
}

int Bike::noOfBikes = 10;
int main() {
    // print();
    // print();
    // print();





    Bike royalEnfield(15, 350);
    Bike bajaj(13);   
 
    royalEnfield.increaseNoOfBikes();


    cout<<royalEnfield.noOfBikes<<endl;
    cout << royalEnfield.tyreSize << " " << royalEnfield.engineSize << endl;
    cout << bajaj.tyreSize << " " << bajaj.engineSize << endl;

    return 0;
}
