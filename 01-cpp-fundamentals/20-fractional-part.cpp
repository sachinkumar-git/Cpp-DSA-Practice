// take float input and print the fractional part of the real number

#include <iostream>
using namespace std;
int main(){
    float x;
    cin>>x;
    int y = (int)x;
    float z = (float)y;
    x= x-z;
    cout <<x;
    
    return 0;
}