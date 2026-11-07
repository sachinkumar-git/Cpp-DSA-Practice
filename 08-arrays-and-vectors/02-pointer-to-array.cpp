#include <iostream>
using namespace std;
int main(){
    int  arr[] = { 4,2,6,1,7};
    int* ptr = arr; // giving address
    // cout<<ptr<<endl;
    // ptr[0]=8; // usning pointer we can modify array
    for(int i=0; i<=4; i++){
        cout<<ptr[i]<<" "; // using ptr instent of array 
    }
    cout<<endl;
    *ptr = 8; // ptr[0]=8; both are same 
    ptr++;
    *ptr = 9;
    ptr--;
    for (int i=0; i<=4; i++){
        cout<<ptr[i]<<" ";
    }
    return 0;
}



// othher method to print 
// int  arr[] = { 4,2,6,1,7};
// int* ptr = arr; // giving address
// for(int i=0; i<=4; i++){
//     cout<<*ptr<<" ";
//      ptr++;
// }