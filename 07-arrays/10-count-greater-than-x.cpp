// count the number of elements in given array greater than a given number x

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];

     //input
     for (int i=0; i<=n-1; i++){
        cin>>arr[i];
    }


    // to find
    int x;
    cout<<"find greater element then x";
    cin>>x;
    
   



    int count = 0 ;
    for (int i = 0; i <= n-1; i++)
    {
        if(arr[i]>x) count++;
    }
    
    cout<<count;



    
    return 0;
}