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

void add(int a , int b){
    cout<<a+b<<endl;
}

void add(int a){
    cout<<10+a<<endl;
}


int main() {
    add(1,2);
    add(5);
    return 0;
}
