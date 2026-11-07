// take input using for loop and print array using for loop

#include <iostream>
using namespace std;
int main(){
    int arr [7];
    
    //input
    for(int i =0; i<=6; i++){
        cout<<"enter number "<<i<<" ";
        cin>>arr[i];
    }

    // output 
    for(int i =0; i<=6; i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}