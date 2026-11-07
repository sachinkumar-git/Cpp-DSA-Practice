// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     int x = 12345;
//     string s = to_string(x);
//     cout<<s;
    
//     return 0;
// }

// return the total number of digits in anumber without using any loop

#include <iostream>
#include <string>
using namespace std;
int main(){
    int x = 12345; 
    // convert to string
    string s = to_string(x); 
    cout<<s.length();
    
    return 0;
}