#include <iostream>
#include <string>
#include <algorithm> // Required for std::reverse
using namespace std;
int main(){
    // // to find the length of string very important in leetcode 
    // string str = "learning cpp is fun";
    // cout<<str.size(); // 0 to str.length()-1
    // cout<<str.length(); // both are same only 
    

    // push_back()  → vector

    // string str = "abcd";
    // cout<<str<<endl;
    // str.push_back('e');
    // str.push_back('f');
    // str.push_back('g');
    // // str.push_back("def");  it will give error 
    // cout<<str<<endl;

    // pop_back() → vector

    // string str = "coding";
    // cout<<str <<endl;
    // str.pop_back();
    // str.pop_back();
    // cout<<str<<endl; 

    // + operator

    // string str ="abc";
    // cout<<str<<endl;
    // string t = "def";
    // str = str + t;
    // cout<<str;

    // shortcut to add it end 
    //  string str ="abc";
    // cout<<str<<endl;
    // str = str + "def"; // append
    // cout<<str;
 
    
    // shortcut to add it in front 
    //  string str ="abc";
    // cout<<str<<endl;
    // str = "def" + str; // append
    // cout<<str;
   

    // reverse 
    // string s = "abcdef"; // 0 1 2 3 4 5 
    // cout<<s<<endl;
    // reverse(s.begin(), s.end());
    // cout<<s<<endl;
    
    // partial reverse 
     
    string s = "abcdef"; // 0 1 2 3 4 5 
    cout<<s<<endl;
    reverse(s.begin()+2, s.end()-1);
    cout<<s<<endl;
    
    
 
    return 0;
}