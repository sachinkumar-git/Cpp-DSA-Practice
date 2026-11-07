// QUESTION 1. take positive integer input and tell if it is athree digit number or not

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//     if (n>=100 && n<=999){
//         cout<<"it is a three digit number";
//     }else {
//         cout<<"not three digit number";
//     }
    
//     return 0;
// }



// QUESTION 2. number is divisible by both 5 and 3 using &&

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//     if(n%5==0 && n%3==0){
//         cout<<"number is divisible by 5 and 3 ";
//     }else{
//         cout<<"not divisible by 5 and 3";
//     }

    
//     return 0;
// }

// QUESTION 3. number is divisible by both 5 or 3 using ||

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    if(n%5==0 || n%3==0){
        cout<<"number is divisible by 5 or 3";
    }else{
        cout<<"not divisible by 5 or 3";
    }

    
    return 0;
}