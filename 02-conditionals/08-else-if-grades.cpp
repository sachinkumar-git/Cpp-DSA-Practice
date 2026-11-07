// take input marks of astudent and print the grade according to marks 

// #include <iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"enter a number";
//     cin>>n;
//     if (n>=91){
//         cout<<"excellent";
//     }
//     else{
//         if (n>=81){
//             cout<<"good";
//         }
//         else{
//             if (n>=71){
//                 cout<<"good";
//             }else {
//                 if (n>=61){
//                     cout<<"can do better";
//                 }
//                 else{
//                     if(n>=51){
//                         cout<<"Average";
//                     }
//                     else{
//                         if (n>=41){
//                             cout<<"below average";
//                         }
//                         else{
//                             cout<<"Fail";
//                         }
//                     }
//                 }
//             }
//         }
//     }
    
//     return 0;
// }


// else if shortcut trick

// #include <iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"enter a number";
//     cin>>n;

//     if (n>=91){
//         cout<<"Excellent";
//     }
//     else if (n>=81){
//         cout<<"very good";
//     }
//     else if (n>=71){
//         cout<<"good";
//     }
//     else if (n>=61){
//         cout<<"can do better";
//     }
//     else if (n>=51){
//         cout<<"Average";
//     }
//     else if (n>=41){
//         cout<<"Bellow Average";
//     }
//     else {
//         cout<<"Fail";
//     }

    
//     return 0;
// }


// ignore bracket 

// #include <iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"enter a number";
//     cin>>n;

//     if (n>=91)
//         cout<<"Excellent";
    
//     else if (n>=81)
//         cout<<"very good";
    
//     else if (n>=71)
//         cout<<"good";
    
//     else if (n>=61)
//         cout<<"can do better";
    
//     else if (n>=51)
//         cout<<"Average";
    
//     else if (n>=41)
//         cout<<"Bellow Average";
    
//     else 
//         cout<<"Fail";
    

    
//     return 0;
// }


// shortest

#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter a number";
    cin>>n;

    if (n>=91) cout<<"Excellent";
    else if (n>=81) cout<<"very good";
    else if (n>=71) cout<<"good";
    else if (n>=61) cout<<"can do better";
    else if (n>=51) cout<<"Average";
    else if (n>=41) cout<<"Bellow Average";
    else cout<<"Fail";
    return 0;
}