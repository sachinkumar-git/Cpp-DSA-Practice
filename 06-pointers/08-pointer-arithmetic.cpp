#include <iostream>
using namespace std;
int main(){
    // int x = 7;
    // int* ptr = &x;
    // cout<<ptr<<endl;  // 0x61fe44
    // ptr = ptr +1;
    // cout<<ptr<<endl; // 0x61fe48

    // bool flag = true;
    // bool* ptr = &flag;
    // cout<<ptr<<endl; //0x61fe3f
    // ptr = ptr + 1;
    // cout << ptr << endl; //  0x61fe40

    // int x = 4;
    //  int* ptr = &x;
    // cout<<*ptr<<endl;  // 4
    // ptr = ptr +1;
    // cout<<*ptr<<endl; // 6422088 as *ptr has nothing thats the reason why value is not their


    int x = 4;
    int* ptr = &x;
   cout<<*ptr<<endl;  // 4
    (*ptr)++ ; // x = x +1 always use parenthisis 
   cout<<*ptr<<endl;  // 5


    
    return 0;
}