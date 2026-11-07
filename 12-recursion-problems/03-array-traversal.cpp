// printing array without using recursion and used for loop and for each loop 

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] = {2,1,6,3,9,0,2,7};
//     int n = sizeof(arr)/sizeof(arr[0]);
    
//     // for (int i=0; i<n;i++){
//     //     cout<<arr[i]<<" ";
//     // }
    
//     // using for each loop 
//     for(int ele : arr){
//         cout<<ele<<" ";
//     }
//     return 0;
// }


// printing using recusrsion 
#include <iostream>
#include <vector>
using namespace std;
void display (int arr[], int n, int idx){
    if (idx==n) return ;
    cout<<arr[idx]<<" ";
    display(arr, n, idx+1);
}

void display2 ( vector<int>& v,  int idx){
    if (idx==v.size()) return ;
    cout<<v[idx]<<" ";
    display2(v, idx+1);
}
int main(){
    int arr[] = {2,1,6,3,9,0,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    // display(arr, n,0); 

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = arr[i];
    }
    display2(v,0);
 
    return 0;
}