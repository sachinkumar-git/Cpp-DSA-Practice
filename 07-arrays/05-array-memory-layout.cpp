// continuous memory allocation 

#include <iostream>
using namespace std;
int main(){
    int arr[5];
    
    cout<<arr<<endl; // it will also  print the address of first element of array
    cout<<&arr<<endl; // it will print the address of first element of array
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;

/*
0x61fe30  address of first element only
0x61fe30  address of first element only
0x61fe30 + 4 
0x61fe34 + 4 
0x61fe38 + 4
0x61fe3c + 4
0x61fe40 
*/
    
    return 0;
}