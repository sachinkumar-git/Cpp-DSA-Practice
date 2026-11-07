// take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15

// solving using multiple condition and using bracket to deal with herarchy 
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//     if((n%5==0 || n%3==0)&& n%15!=0){
//         cout<<"number is divisible by 5 or 3 but not 15";
//     }else{
//         cout<<"not matching condition";
//     }

    
//     return 0;
// }


// solving using nested if else
#include <iostream>
using namespace std;
int main(){
    int n = 15;
    if(n%5==0 || n%3==0) {
        if (n%15!=0){
            cout<<"the number is divisible by 5 or 3 but not 15";
        }else{ // n%5==0 but n%3 != 0
            cout<<"not matching the condition";
        }
    }
    else{
        cout<<"Not matching condition";
    }
    
    return 0;
}