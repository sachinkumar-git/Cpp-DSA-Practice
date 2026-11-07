// dereference operator 

// #include <iostream>
// using namespace std;
// int main(){
//     int x = 10;
//     int* p = &x; // can not store integer value in pointer must store address only
//     cout<<p<<endl; // address of p
//     cout<<*p;   // value at address of p

//     return 0;
// }


// update the value of x

// #include <iostream>
// using namespace std;
// int main(){
//     int x = 10;
//     int* p = &x;
//     x = 90; // updated value of x
    
//     cout<<*p;   
    
//     return 0;
// }


// withot x update the value of x

#include <iostream>
using namespace std;
int main(){
    int x = 10;
    int* p = &x;
    cout<<x<<endl;
    *p = 6;
    cout<<x<<endl;
    
    return 0;
}