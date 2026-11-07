// // #include <iostream>
// using namespace std;
// #include <string>
// int main(){
//      char str[] = {'a','b','c','d','e','f'};
//     // print using loop
//      for (int i=0; str[i]!='\0'; i++){
//         cout<<str[i]<<" ";
//      }

//   //  direct print 
//     cout<<str;

//    // difrent method 
//     char str [5] = "abcd";
//     for (int i=0; i<5; i++){
//         cout<<str[i]<<" ";
//     }

// //type casting 
//     cout<<(int)(str[6]);
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    char str[] = "abcdef";   // now str[6] = '\0'
    cout << (int)(str[6]);   // prints 0
    return 0;
}
