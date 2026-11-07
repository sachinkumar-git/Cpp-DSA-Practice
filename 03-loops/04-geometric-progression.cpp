// display this GP - 1,2,4,8,16,32... upto n terms.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;

    // 1 2 4 8 16 .... n terms
    int a =1 ;
    for(int i=1; i<=n; i++ ){
        cout<<a<<endl;
        a = a*2;
    }
    
    
    return 0;
}