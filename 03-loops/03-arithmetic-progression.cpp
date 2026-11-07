// display this AP - 1,3,5,7,9.. upto n terms

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    // with mathematicss formula a = a + (n-1)d
    // for(int i=1; i<=2*n-1; i+=2){ an = a+(n-1)d
    //     cout<<i<<endl;
    // }


// 1 3 5 7 9 ...
//withot formula - using separate variables
    // int a =1 ;
    // for(int i=1; i<=n; i++ ){
    //     cout<<a<<endl;
    //     a = a+2;
    // }
    
// 4 7 10 13 17 ....
int a =4 ;
    for(int i=1; i<=n; i++ ){
        cout<<a<<endl;
        a = a+3;
    }
    return 0;
}