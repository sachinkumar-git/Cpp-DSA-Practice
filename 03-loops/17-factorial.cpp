// print the factorial of a given number 'n'
// 5! = 5*4*3*2*1
// 1! = 1
// 0! = 1
#include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//     int fact =1;
//     for(int i =1; i<=n; i++ ){
//         fact =  fact * i;
//     }
//     cout<<fact;
    
//     return 0;
// }

// print the factorial from 1 to n
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
        cout << "Factorial of " << i << " is: " << fact << endl;
    }

    return 0;
}
