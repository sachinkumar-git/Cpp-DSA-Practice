// input a string of size n and update all the even position in the string to character 'a' consider 0 - based indexing


#include <iostream>
using namespace std;
int main(){
    // updation 
    string str = "coding";
    cout<<str;
    cout<<endl;
    // str[1] = 'o';
    // cout<<str;
for (int  i = 0; str[i]!='\0'; i++){
    if (i%2==0) str[i] = 'a';
}
cout <<str<<endl;
    
    return 0;
}