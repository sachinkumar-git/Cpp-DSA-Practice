// write a  program to  print sum of digit of a given number

#include <iostream>
using namespace std;
int main(){
    int n,last_digit;
    int sum =0;
    cout<<"enter a number ";
    cin>>n;
    while (n!=0){
        last_digit = n%10;
        sum = sum + last_digit;
        n=n/10;

    }
    cout<<"sum =  "<<sum;
    
    return 0;
}