// remove all occurances of a from a string 

// non recursion 
// #include <iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str = "Data Structures";
//     string s = "";
//     for (int i=0 ; i<str.length(); i++){
//         if (str[i]!='a') s += str[i];
//     }
//     cout<<s;
    
//     return 0;
// }


// recursion → space complexty is not good 
#include <iostream>
#include <string>
using namespace std;
// void removeChar(string ans, string original){
//     if (original.length()==0){
//         cout<<ans;
//         return;
//     }
//     char ch = original[0];
//     if (ch=='a') removeChar(ans, original.substr(1));
//     else removeChar(ans+ch, original.substr(1));

// }

// better time complexity
void removeChar(string ans, string original, int idx){
    if (idx==original.length()){
        cout<<ans;
        return;
    }
    char ch = original[idx];
    if (ch=='p') removeChar(ans, original, idx+1);
    else removeChar(ans+ch, original, idx+1);

}
int main(){
    string str = "data structures";
    removeChar("", str,0);
    
    return 0;
}

