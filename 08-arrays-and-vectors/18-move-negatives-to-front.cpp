// move all negative number to begninning and positive to end with constant extra space 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sort01m2(vector <int> &v){
    int n = v.size();
    int i = 0;
    int j = n-1;
    while(i < j){
        if (v[i] < 0) {
            i++;
        } else if (v[j] > 0) {
            j--;
        } else {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}

int main(){
     vector <int>v;
     v.push_back(1);
     v.push_back(-2);
     v.push_back(3);
     v.push_back(-4);
     v.push_back(-5);
     v.push_back(6);
     v.push_back(8);





     for (int i =0; i<v.size();i++){
        cout<<v[i]<<" ";
     }
     cout<<endl;
    
    sort01m2(v);
    for (int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
     }
     cout<<endl;


    return 0;
}