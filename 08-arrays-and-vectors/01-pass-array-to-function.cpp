#include <iostream>
using namespace std;
void display (int a[], int size ){
    for(int i=0; i<=size-1; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}

void change (int b [], int size){
    b[0]=100;


}
int main(){
    int arr[5] = {1,4,2,7,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    //acessinng  the element of array in another function 
    // updation, pass by value or pass by refrence

    display(arr, size);
    change(arr, size);
    display(arr , size);

    return 0; 
}