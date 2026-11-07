// write a program to check if a number is composite or not 

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter anumber";
//     cin>>n;                       // not take n beacuse number must be divisible by n
//     for(int i =2 ; i<=n-1; i++ ){ // not taken 1 beacuse all number are divisible by 1
//     if(n%i==0){
//         cout<<n<<" is a compostie number";
//         break;
       
//     }
    
//     }
    
//     return 0;
// }

// // write a program to check if a number is prime or not

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter anumber";
    cin>>n;
    bool flag = true;                       // not take n beacuse number must be divisible by n
    for(int i =2 ; i<=n-1; i++ ){ // not taken 1 beacuse all number are divisible by 1
    if(n%i==0){
        flag = false;
        break;
       
    }
    
    }
    if(n==1) cout<<"1 is neither prime nor composite";
    else if (flag == true) cout<<n<<" is prime";
    else cout<<n<<" is composite";
    return 0;
}