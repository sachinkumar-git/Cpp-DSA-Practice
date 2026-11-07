/* 
number pyramid 
   1
  121
 12321

*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
   for(int i=1; i<=n; i++){
    // spaces loop
    for (int k=1; k<=n-i; k++){
        cout<<" ";
    }
    // triangle loop
     for(int j=1;j<=i;j++){
        cout<<j;
    }
    // another triangle loop
     for(int q=i-1;q>=1;q--){
        cout<<q;
    }
    cout<<endl;
   }
    return 0;
}