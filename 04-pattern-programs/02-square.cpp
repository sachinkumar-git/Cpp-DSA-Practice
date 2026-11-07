// print the given pattern 
/*  
   ****
   ****
   ****
   ****

   user input → n → side of square

*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"no. of rows : ";
    cin>>n;
  
    for (int i=1; i<=n; i++){
        for(int j =1; j<=n; j++){ // keep diiferent like j in inner llop
          cout<<"*";  
        }
        cout<<endl;
    }
    
    return 0;
}

