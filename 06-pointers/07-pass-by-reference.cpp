#include <iostream>
using namespace std;
void swap (int &a , int &b){
  int temp = a;
    a = b ;
    b = temp;
    return;
}
int main(){
     int a ;
    cout<<"enter 1st number";
    cin>>a;
    int b;
    cout<<"enter 2nd number";
    cin>>b;
    swap (a,b);
    cout<<a<<" "<<b;

    return 0;
}