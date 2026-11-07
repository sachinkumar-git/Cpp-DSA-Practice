/* LINEAR SEARCH
find the element x in the array. take array and x as input 
*/

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
    cout<<"enter element to find";
    cin>>x;
    
   

    // search
    // check mark 

    bool flag = false; // false → not present 
    for (int i = 0; i <= n-1; i++)
    {
        if(arr[i]==x) flag = true;
    }

    if (flag==true) cout<<"element present";
    else cout<<"element not found";



    
    return 0;
}