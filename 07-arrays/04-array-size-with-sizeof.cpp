// size and sizeof operator (how can we use it to find the length of array ? )

#include <iostream>
using namespace std;
int main(){
    int arr[] ={1,2,1,4,2,7,6,9,8,7,8};
    int size = sizeof(arr)/ sizeof(arr[5]);
    cout<<size;
    
    return 0;
}