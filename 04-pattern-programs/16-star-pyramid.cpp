// star Pyramid 


// method 1 
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//    for(int i=1; i<=n; i++){ 

//      // space
//      for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     // to print odd star j<=2*i-1
//      for(int k=1;k<=2*i-1;k++){
//         cout<<"*";
//     }
    
//     cout<<endl;
//    }
//     return 0;
// }

// method 2
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"number of lines";
    cin>>n;
    int nst =1;
    int nsp =n-1;
   for(int i=1; i<=n; i++){ 

     // space
     for(int j=1;j<=nsp;j++){
        cout<<" ";
    }
    nsp--;
     for(int k=1;k<=nst;k++){
        cout<<"*";
    }
    nst+=2;
    cout<<endl;
   }
    return 0;
}