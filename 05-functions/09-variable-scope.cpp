#include <iostream>
using namespace std;
int a = 9; // global variable all function can access this variable
void fun(int x , int y){
       cout<<"address of fun x "<<&x<<endl;
    cout<<"address of fun y "<<&y<<endl;
}

int main(){
    cout<<a+7<<endl;
    int b =6; // local  variable only accesable in this funnction
    cout <<b;
    return 0;
}