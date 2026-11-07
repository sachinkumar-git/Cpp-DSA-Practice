// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string s = "abcdef";
//     // s.substr(idx)
//     cout<<s.substr(4)<<endl; // ef
//     // s.substr(idx, len)
//     cout<<s.substr(1,3); // bcd

    
//     return 0;
// }

// input a string of even length and return the second half of that string using inbuilt substr function 

#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    // abcdefgh → n=8
    int n = str.size();
    cout<<str.substr(n/2);


     return 0;
 }