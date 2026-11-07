// Given a sentance split every single word of the sentence and print in a new line 
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    string s = "he is a maths teacher";
    stringstream ss(s);
    string temp;
    while (ss>>temp){
        cout<<temp<<endl;
    }
    
    return 0;
} 