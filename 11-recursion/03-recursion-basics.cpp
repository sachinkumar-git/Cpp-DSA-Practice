// recursion 

#include <iostream>
using namespace std;
void fun (int n){
    if(n==0) return; 
    cout<<"Hello World "<<endl;
    fun(n-1);
}
int main(){
    
    fun(4);
    return 0;
}

// practice question 
// #include <iostream>
// using namespace std;
// void morning(int x){
//     if (x==0) return;
//     cout<<"good morning"<<endl;
//     morning(x-1);
// }
// int main(){
//     int x;
//     cout<<"enter the No. of times you want to print "<<endl;
//     cin>>x;
//     morning(x);
    
//     return 0;
// }