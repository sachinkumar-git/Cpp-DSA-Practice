// take positive integer input and tell if it is divisible by 5 or not

// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"enter a number";
//     int n;
//     cin>>n;
//     if(n%5==0){
//         cout<<"the number is divisible by 5";
//     }else{
//         cout<<"the number is not divisible by 5";
//     }
    
//     return 0;
// }

// absolute number means |-7| → 7 , |7| → 7
// print absolute value 
#include <iostream>
using namespace std;
int main(){
    cout<<"enter a number";
    int n;
    cin>>n;
    if (n<0){
        n = -n;
    }
    cout<<n;
    return 0;
}