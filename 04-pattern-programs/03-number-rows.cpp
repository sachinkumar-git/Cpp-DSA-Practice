// to print
// 1234
// 1234
// 1234
// in pattern

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         cout<<"1234"<<endl;
//     }
    
//     return 0;
// }

// to print square no. 

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
   for(int i=1; i<=n; i++){
     for(int j=1;j<=n;j++){
        cout<<j;
    }
    cout<<endl;
   }
    return 0;
}