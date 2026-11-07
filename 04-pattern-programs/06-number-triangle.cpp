/*
print the given pattern
1
12
123
1234
*/

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//    for(int i=1; i<=n; i++){
//      for(int j=1;j<=i;j++){
//         cout<<j;
//     }
//     cout<<endl;
//    }
//     return 0;
// }


// reverse number triangle
/*
print the given pattern
1234
123
12
1
*/

// maths logic
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
   for(int i=1; i<=n; i++){
     for(int j=1;j<=n+1-i;j++){
        cout<<j;
    }
    cout<<endl;
   }
    return 0;
}

// my logic 

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//    for(int i=n; i>=1; i--){
//      for(int j=1;j<=i;j++){
//         cout<<j;
//     }
//     cout<<endl;
//    }
//     return 0;
// }

