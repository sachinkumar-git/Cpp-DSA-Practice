// make a function which calculates 'a' raised to power 'b' using recursion 

#include <iostream>
using namespace std;
int power(int a, int b){
    if(b==0) return 1;
   return  a*power(a, b-1);
}
int main(){
    int a,b;
    cout<<"enter base : ";
    cin>>a;
    cout<<"enter exponent : ";
    cin>>b;
    cout<<a<<"raised to the power "<<b<<" is "<<power(a,b);
    return 0;
}

// using loop 
// #include <iostream>
// using namespace std;
// int power(int a, int b){
//     if(a==0 && b==0){
//         cout<<"0 raised to power 0 is not defined";
//         return -100;
//     }
//     if (a==0) return 0;
//     int p =1;
//     for (int i =1; i<=b; i++){
//         p*=a;
//     }
//     return p;
// }
// int main(){
//     cout<<power(2,4);
    
    
//     return 0;
// }