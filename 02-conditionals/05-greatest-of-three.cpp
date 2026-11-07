// take 3 positive integers input and print the greatest of them 

#include <iostream>
using namespace std;
int main(){
    cout<<"enter 1st number";
    int a;
    cin>>a;
    cout<<"enter 2nd number";
    int b;
    cin>>a;
    cout<<"enter 3rd number";
    int c;
    cin>>c;

    if(a>b && a>c ){
        cout<<a<<"  is largest";
    }if(b>a && b>c ){
        cout<<b<<"  is largest";
    }if(c>a && c>b ){
        cout<<c<<"  is largest";
    }
    
    return 0;
}