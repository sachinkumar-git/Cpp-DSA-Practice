
// print 1 to n  ( without Extra parameter ) 
// most important concept vvvvvvvv.important 

#include <iostream>
using namespace std;

void print(int n){
   
    if (n==0) return;  // base case 
     print(n-1); // call 
    cout<<n<<endl; // kaam

}
int main(){
    print (5);
    
    return 0;
}


// print n to 1

// #include <iostream>
// using namespace std;

// void print(int n){
//     // base case 
//     if (n==0) return;
//     cout<<n<<endl; // kaam
//     // recursive call
//      print(n-1);

// }
// int main(){
//     print (5);
    
//     return 0;
// }


// print 1 to n  ( Extra parameter )

// #include <iostream>
// using namespace std;

// void print(int i, int n){
//     if (i>n) return;
//     cout<<i<<endl;
//     print(i+1,n);
// }
// int main(){
//     int n ;
//     cout<<"enter a number";
//     cin >> n;
//     cout<<endl;
//     print (1,n);    
//     return 0;
// }
