// combine both logic below and print the  star cross

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"no. of rows : ";
    cin>>n;
    

    for (int i=1; i<=n; i++){
        for(int j =1; j<=n; j++){ // keep diiferent like j in inner llop
          if (i==j || i+j== n+1) cout<<"*";
          else cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}


// print the diagonal star  pattern 
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"no. of rows : ";
//     cin>>n;
    

//     for (int i=1; i<=n; i++){
//         for(int j =1; j<=n; j++){ // keep diiferent like j in inner llop
//           if (i==j ) cout<<"*";
//           else cout<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

// to print reverse diagonal 

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"no. of rows : ";
//     cin>>n;
    

//     for (int i=1; i<=n; i++){
//         for(int j =1; j<=n; j++){ // keep diiferent like j in inner llop
//           if (i+j== n+1) cout<<"*";
//           else cout<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }



