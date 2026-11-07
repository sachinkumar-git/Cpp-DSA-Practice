// print sum from 1 to n (parameterised)

// #include <iostream>
// using namespace std;

// void sum1toN(int sum, int n){
//     if (n==0) {
//         cout<<sum<<endl;
//         return; 
//     } 
//     sum1toN(sum+n, n-1);
// }
// int main(){
//     int n ;
//     cout<<"enter a number";
//     cin >> n;
//     cout<<endl;
//     sum1toN(0,n);    
//     return 0;
// }


// print sum from 1 to n (return type)
// most important vvvv.important 

#include <iostream>
using namespace std;


int sum1toN(int n){
    if(n==0) return 0 ;
    return n+sum1toN(n-1);  // same as factorial one  

}
int main(){
    int n ;
    cout<<"enter a number";
    cin >> n;
    cout<<endl;
   cout<< sum1toN(n);    
    return 0;
}
