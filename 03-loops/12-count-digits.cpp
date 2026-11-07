// write a program to count digit of a given number

#include <iostream>
using namespace std;
int main(){
    int n, count = 0;
    cout<<"enter a number n ";
    cin>>n;
    int a =n;
    while(n!=0){
        n= n/10;
        count++;
    }
    if (a==0) cout<<1;
    else cout<<"count is "<<count;
    
    return 0;
}