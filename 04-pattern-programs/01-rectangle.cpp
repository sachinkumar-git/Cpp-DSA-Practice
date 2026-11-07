/*take user input → no. of rows & no. of colums and print the given pattern

*****
*****
*****

*/


// row modification 

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"no. of rows : ";
//     cin>>n;
//     for (int i=1; i<=n; i++){
//         cout<<"*****"<<endl;
//     }
    
//     return 0;
// }


// row & colomb modification

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"no. of rows : ";
    cin>>n;
    int m;
    cout<<"no. of columns : ";
    cin>>m;
    for (int i=1; i<=n; i++){
        for(int i =1; i<=m; i++){
          cout<<"*";  
        }
        cout<<endl;
    }
    
    return 0;
}

