#include <iostream>
using namespace std;
int main(){
    int arr[]= {1, 2, 4, 5, 9, 15, 18, 21};
    int target = 18;

    bool flag = false; // false means  target not present 
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i =0; i<n; i++){
        if (arr[i] == target){
            flag = true;
            break;
        }
    }
    if (flag == true) cout<<"target present ";
    else cout<<"target not present";
    
    return 0;
}