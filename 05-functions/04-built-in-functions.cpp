#include <iostream>
#include <cmath>
using namespace std;
int main(){ // int , void, bool, char, float 
    int x, y;
    cout<<"enter a nummber x & y";
    cin>>x>>y;
    // if (x<y) cout<<x;
    // else cout<<y;

    // shortcut
    cout<<"the minimum value "<<min(x,y)<<endl;
    cout<<"the maximum value "<<max(x,y)<<endl;
    cout<<sqrt(9); 


    
    return 0;
}