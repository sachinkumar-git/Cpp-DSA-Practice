/*
print the given pattern
1
13
135
1357
*/
// using shortcut logic

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
   for(int i=1; i<=n; i++){
    // first "i" odd numbers
    int a =1;
    for(int j=1;j<=i;j++){
        cout<<a;
        a+=2;
    }
    cout<<endl;
   }
    return 0;
}


// using  maths logic 
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//    for(int i=1; i<=n; i++){
//     // first "i" odd numbers
//     for(int j=1;j<=2*i-1;j+=2){
//         cout<<j;
//     }
//     cout<<endl;
//    }
//     return 0;
// }
