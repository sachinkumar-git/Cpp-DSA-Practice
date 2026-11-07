#include <iostream>
#include <string>
using namespace std;
int main(){
    // convert string to integer  (stoi)
    // string str = "123456";
    // int x = stoi(str);
    // cout<<x<<endl; //123456
    // cout<<x+1; // 123457

    // to store out of range data in long long 

    string str = "123456789123";
    long long x = stoll(str);
    cout<<x<<endl; 
    



    return 0;
}