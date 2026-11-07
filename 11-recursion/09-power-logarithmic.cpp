#include <iostream>
using namespace std;
int power(int x, int n){
    if(n==0) return 1;
    int ans = power(x,n/2);
    return ans*ans;
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