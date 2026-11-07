/* REVERSE STAR TRIANGLE
print the given pattern

****
***
**
*

*/

// my logic 
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//    for(int i=n; i>=1; i--){
//      for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
//    }
//     return 0;
// }


// maths logic 
// no. of star = n + 1 - i 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
   for(int i=1; i<=n; i++){
     for(int j=1;j<=n+1-i;j++){
        cout<<"*";
    }
    cout<<endl;
   }
    return 0;
}
