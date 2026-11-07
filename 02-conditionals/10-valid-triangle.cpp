// take 3 number input and tell if they can be the sides of a triangle 
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter side a";
    cin>>a;
    cout<<"enter side b";
    cin>>b;
    cout<<"enter side c";
    cin>>c;

    if ((a+b>c)&& (b+c>a) && (c+a>b)){
        cout<<"the side of triangle";
    }else{
        cout<<"not side of triangle";
    }
    
    return 0;
}