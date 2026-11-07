#include <iostream>
using namespace std;

void great(){
    cout<<"Good Morning"<<endl;
    cout<<"How are You?"<<endl;
}

int product (int a, int b){
    return a*b;
}
int main(){
    int x = product(2,4);
    cout<<x<<endl;
    great();

    // inbuilt function in c++
    int a = 6;
    int b = 8;
    cout<<a<<" "<<b<<endl;
    swap(a,b);  
    cout<<a<<" "<<b<<endl;
    cout<<max(a,b)<<endl;
    cout<<min(a,b);

    
    
    return 0;
}