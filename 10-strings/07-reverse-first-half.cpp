// input a string of even length and reverse the first half of the string 

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    //reverse first  half 
    int n = s.length();
    reverse(s.begin(),s.begin()+n/2);
    cout<<s;
    return 0;
}

// input a string of length greater than 5 and reverse the substring from postion 2 lto 5 using inbuilt functions


// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// int main(){
//     string s = "coding";
//     reverse(s.begin()+1,s.begin()+5); // 4 not always 1 extra thats why 5
//     cout<<s;
//     return 0;
// }