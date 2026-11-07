// print the star triangle in flipped way  
// star triangle flipped
 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
   for(int i=1; i<=n; i++){
    // spaces
     for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    // fliped stars 
    for(int k=1; k<=i;k++){
        cout<<"*";
    }
    cout<<endl;
   }
    return 0;
}