/* Two numbers are entered through the keyboard. Write a program to find the value of one number raised
to the power of another.*/



#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter base : ";
    cin>>a;
    cout<<"enter exponent : ";
    cin>>b;
    bool flag = true ; // true means power positive
    if (b<0){
        flag = false; // false  →  negative power
        b = -b;
    }
    float power = 1;
    for (int i=1; i<=b; i++){
        power = power *a;
    }
    if (flag == false){
        power = 1/power;
        b = -b;
    }
    if (a==0&& b==0) cout<<"Not defined";
    else cout<<a<<" raise to thr power "<<b<<" is "<<power;

    return 0;
} 