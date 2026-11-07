#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v; // you need not mention the size  
    // inserting input do not use [] square bracket
    v.push_back(6);
    // cout<<v.size()<<endl;
    // v.push_back(1);
    // cout<<v.size()<<endl;
    // v.push_back(9);
    // cout<<v.size()<<endl;
    // v.push_back(0);
    // cout<<v.size()<<endl;

    v.push_back(6);
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.capacity()<<endl;
    v.push_back(0);
    cout<<v.capacity()<<endl;

    // if you want to access/ update
    // v[0] = 88;

    // for (int i =0; i<4; i++){
    //     cout<<v[i]<<" ";
    // }
        return 0;
}