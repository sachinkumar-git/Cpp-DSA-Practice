// write a program to sum of 1 to n using loops
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    int sum =0;
    for(int i =0; i<=n; i++ ){
        sum = sum + i;
    }
    cout<<sum;
    
    return 0;
}