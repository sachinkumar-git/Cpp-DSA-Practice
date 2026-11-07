// given a string consisting of lowercase english alphabets print the character 
// that is occuring most number of times 

// two ways to solve it 
// method one 


// #include <iostream>
// using namespace std;
// int main(){
//     string s = "programming";
//     int max = 0;
//     for (int i=0; i<s.length(); i++){
//         char ch = s[i];
//         int count = 1;
//         for (int j=i+1; j<s.length();j++){
//             if (s[j]==s[i]) count++;
//         }
//         if(max<count) max = count;
//     }  
 
//      for (int i=0; i<s.length(); i++){
//         char ch = s[i];
//         int count = 1;
//         for (int j=i+1; j<s.length();j++){
//             if (s[j]==s[i]) count++;
//         }
//         if(count==max) {
//             cout<<ch<<" "<<max<<endl;
//         }
//     }    
   
//     return 0;
// }

// optimize code 


#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s = "planet";
    vector<int> arr(26,0);
    for (int i=0;i<s.length(); i++){
        char ch = s[i];
        int ascii = (int)ch;
        arr[ascii-97]++;
    }
    int mx =0;
    for (int i = 0; i<26;i++){
        if (arr[i]>mx) mx = arr[i];
    }
    for (int i=0;i<26;i++){
        if(arr[i]==mx){
            int ascii = i + 97;
            char ch = (char) ascii;
            cout<<ch<<" "<<mx<<endl;
        }
    }
    
    return 0;
}

