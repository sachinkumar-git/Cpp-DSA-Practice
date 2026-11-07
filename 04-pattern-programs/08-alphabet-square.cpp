// print the given pattern 
/*  
ABCD
ABCD
ABCD
ABCD

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
         cout<<char (int(j + 64))<<" ";    // using type casting with asscai value 
       // cout<<char(j + 64)<<" "; // shortcut method to write it 
        }
        cout<<endl;
    }
    
    return 0;
}


// alphabet triangle 

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"no. of rows : ";
//     cin>>n;
  
//     for (int i=1; i<=n; i++){
//         for(int j =1; j<=i; j++){ // keep diiferent like j in inner llop
//          cout<<char (int(j + 64))<<" ";    // using type casting with asscai value 
//        // cout<<char(j + 64)<<" "; // shortcut method to write it 
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }


// reverse alphabet triangle 

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"no. of rows : ";
//     cin>>n;
  
//     for (int i=1; i<=n; i++){
//         for(int j =1; j<=n+1-i; j++){ // keep diiferent like j in inner llop
//          cout<<char (int(j + 64))<<" ";    // using type casting with asscai value 
//        // cout<<char(j + 64)<<" "; // shortcut method to write it 
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }


