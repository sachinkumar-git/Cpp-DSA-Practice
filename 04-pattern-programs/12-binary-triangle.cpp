/*   Binary TRIANGLE
print the given pattern
1
0 1
1 0 1
0 1 0 1 

we will do with help of extra veriable 
*/

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//     int a = 5; // you can intialize any thing
//    for(int i=1; i<=n; i++){
//     if (i%2!=0) a = 1; // row no odd
//     else a = 0; // row no even 
//      for(int j=1;j<=i;j++){
//         cout<<a<<" ";
//         // flipping 
//         if (a==1) a=0;
//         else a = 1;
//     }
//     cout<<endl;
//    }
//     return 0;
// }


// using maths logic

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
   for(int i=1; i<=n; i++){
        for(int j=1;j<=i;j++){
            if ((i+j)%2 == 0 ) cout<<1;
            else cout<<0;
    }
    cout<<endl;
   }
    return 0;
} 