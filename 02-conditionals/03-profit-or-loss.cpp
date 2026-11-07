/* if cost price and selling price of an item is input through the 
keyboard write a program to determine whether the seller has made profit or 
incurred loss. also determine how much profit he made or loss he incurred */


#include <iostream>
using namespace std;
int main(){
    int cp , sp;
    cout<<"enter cost price and selling price of an item";
    cin>>cp>>sp;
    if(cp>sp){
        cout<<"loss = "<<cp-sp;
    }if(sp>cp){
        cout<<"profit = "<<sp-cp;
    }if(cp==sp){
        cout<<"no profit no loss";
    }
    
    return 0;
}