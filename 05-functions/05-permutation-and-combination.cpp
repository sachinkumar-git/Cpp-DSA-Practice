// combination and permutation 

#include <iostream>
using namespace std;

int fact (int x) {
    int f = 1;
    for (int i=2; i<=x; i++){
        f *= i; 
    }
    return (float)f;
}


int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int r;
    cout<<"enter r : ";
    cin>>r;
    // int nfact = 1; // n!
    // for(int i=2; i<=n; i++){
    //     nfact =  nfact*i;
    // }
    
    // // r!
    // int rfact = 1;
    // for(int i=2; i<=r; i++){
    //     rfact = rfact *i;
    // }
    
    // // 
    // int nrfact =1 ; // (n-r)!
    // for (int i =2; i<=n-r; i++){
    //     nrfact*=i;
    // }


 // using function 
  
    int nfact = fact(n); // n!
    int rfact = fact(r); // r!
    int nrfact = fact(n-r); // (n-r)!
    int ncr = nfact/(rfact*nrfact);

    cout<<ncr;

    
    return 0;
}