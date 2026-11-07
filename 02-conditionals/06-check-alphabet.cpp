// write a program to check whether a character is an alphabet or not 

#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character";
    cin>>ch;

    if((ch>65&&ch<90) || (ch>97&&ch<122)){
        cout<<"it is a character alphabet";
    }else{
        cout<<"it is not a character alphabet";
    }
    

    
    return 0;
}

// type casting → enter the character and get the ascii value 

// #include <iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"enter a character";
//     cin>>ch;
//     cout<<(int)ch;
    
//     return 0;
// }