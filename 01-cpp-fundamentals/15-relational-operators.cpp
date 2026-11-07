// what is the result of the following code

// #include <iostream>
// using namespace std;
// int main(){
//     bool p = false;
//     bool q = false;
//     bool r = true;

//     cout<<(p==q==r); // always go left to right 

//     return 0;
// } 

#include <iostream>
using namespace std;
int main(){
    bool p = 1;
    bool q = 2;
    bool r = 2;

    cout<<(p==q==r); //(p==q)==(r) → (0) == 2 → 0
    //when same operator always calculate left to right
    return 0;
} 