// write a program to print reverse of a given number

#include <iostream>
using namespace std;
int main(){
    int n, r =0, last_digit = 0;
    cout<<"enter a number";
    cin>>n;
    while(n>0){
        r = r*10;
        last_digit = n%10;
        r = r + last_digit;
        n = n/10;
        
    }
    cout<<r;
    
    return 0;
}