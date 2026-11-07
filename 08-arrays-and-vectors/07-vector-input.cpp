// taking input in array

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> v(5);
//     for(int i = 0; i<5; i++){
//         cin>> v[i];
//     }
//     for(int i = 0; i<5; i++){
//         cout<< v[i]<< " ";
//     }
    
    
//     return 0;
// }

// if size not given then above code will show error 

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i = 0; i<5; i++){
        int x;
        cin>> x;
        v.push_back(x);
    }
    for(int i = 0; i<5; i++){
        cout<< v[i]<< " ";
    }
    
    
    return 0;
}