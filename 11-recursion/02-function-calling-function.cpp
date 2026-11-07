#include <iostream>
using namespace std;
void gun (){
    cout<<"Hello C++"<<endl;
    return ; // end of code in void it is not compulsory to write return
}
void fun (){
    cout<<"Hello World"<<endl;
    gun();
}
int main(){
    
    fun();
    return 0;
}