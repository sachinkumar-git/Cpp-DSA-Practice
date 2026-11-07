#include <iostream>
#include <string> 
using namespace std;
int main(){
    // string str = "hello world"; // space is also a character
    // cout<<str; // print string
    // cout<<str[0]; // print index

    // directly take word as input 
    string s;
    // cin>> s; // it will only work if the given string has no spaces

    getline(cin,s); // it will work with spaces also
    cout<< s;  // but when we will use the space it will give an error
    
    return 0;
}