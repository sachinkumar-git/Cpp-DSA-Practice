// swap 2 number is not possible with function when passing value directly 
// solved swapping without function with third variables and without third variables

#include <iostream>
using namespace std;
int main(){
     int a , temp ;
    cout<<"enter 1st number";
    cin>>a;
    int b;
    cout<<"enter 2nd number";
    cin>>b;
// with third variable 

    // temp = a;
    // a = b;
    // b = temp;

// withot third variable 

    a = a +b;
    b = a - b;
    a = a-b;


    cout<<a<<" "<<b;

    return 0;
}