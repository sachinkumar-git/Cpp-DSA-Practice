 // trying to swap using pass by value → which will not work to swap to number

// #include <iostream>
// using namespace std;
// void swap (int a , int b){
//   int temp = a;
//     a = b;
//     b = temp;
//     return;
// }
// int main(){
//      int a , temp ;
//     cout<<"enter 1st number";
//     cin>>a;
//     int b;
//     cout<<"enter 2nd number";
//     cin>>b;
//     swap (a,b); // pass by value
//     cout<<a<<" "<<b;

//     return 0;
// }

// now swaping by using pass by refrence which will work 

#include <iostream>
using namespace std;
void swap (int* x , int* y){
  int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(){
     int a , temp ;
    cout<<"enter 1st number";
    cin>>a;
    int b;
    cout<<"enter 2nd number";
    cin>>b;
    swap (&a,&b);
    cout<<a<<" "<<b;

    return 0;
}