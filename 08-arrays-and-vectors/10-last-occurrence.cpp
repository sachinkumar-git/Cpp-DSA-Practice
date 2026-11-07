// finding the last occurrence of x in the array

#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    v.push_back(12);
    v.push_back(11);
    v.push_back(6);
    v.push_back(0);
// 7 elements → size =7, 0-6
    int x = 6;
    int idx = -1;
// forward loop
//  for (int  i=0; i<v.size(); i++){
//     if(v[i]==x) idx = i;
//  }

 // brreak loop from backward
 for (int i=v.size()-1 ; i>=0; i--){
    if(v[i]==x) {
        idx = i;
        break; }
 }
cout<<idx;

    
    
    return 0;
}