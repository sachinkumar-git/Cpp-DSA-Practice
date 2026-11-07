// make a function which calculate the factorial of n using recursion 

// property in recursion → n! = n * (n-1)!

// below code give factorial of a particular no. using recursion  
#include <iostream>
using namespace std;

int fact(int n ){
    // base case 
    if (n==1 || n ==0) return 1;
    //recursive call
    return n*fact(n-1);
}

int main(){
  
   cout<<fact(0);
    return 0;
}




// below code give factorial of a particular no. using loop 
// #include <iostream>
// using namespace std;

// void fact(int n ){
//     int f = 1;
//     for (int i=1; i<=n;i++){
//         f *= i;
//     }
//     cout<<f<<endl;
// }
// int main(){
    
//     fact(5);
//     return 0;
// }


// below code give factorial upto particular no. using loop 
// #include <iostream>
// using namespace std;

// void fact(int n ){
//     int f = 1;
// // it can also be done bu using two for loop but time complexity will be n square 
//     for (int i=1; i<=n;i++){
//         f *= i;
//         cout<<f<<endl;
//     }
// }
// int main(){
    
//     fact(5);
//     return 0;
// }