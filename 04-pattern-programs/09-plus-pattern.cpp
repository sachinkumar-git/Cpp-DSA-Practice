/*
print the given pattern 

plush pattern 
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"no. of rows : ";
    cin>>n;
    
    int mid = n/2 + 1;
    for (int i=1; i<=n; i++){
        for(int j =1; j<=n; j++){ // keep diiferent like j in inner llop
          if (i==mid || j == mid ) cout<<"*";
          else cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

