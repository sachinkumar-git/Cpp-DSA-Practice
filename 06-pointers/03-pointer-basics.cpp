#include <iostream>
using namespace std;
int main(){
    int x = 4;
    int* p = &x;
    // int *p = &x; // both are same 

    cout<<&x<<endl;
    cout<<p;


    
    return 0;
}