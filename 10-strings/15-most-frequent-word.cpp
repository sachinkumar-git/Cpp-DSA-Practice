// given a sentance 'str' return the word that is occurinng most number of times in that sentence 
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string s = "he is a maths teacher. He is a DSA mentor as well ";
    stringstream ss(s);
    string temp;
    vector<string> v;

    while (ss>>temp){
        v.push_back(temp);
        }
  
    cout<<endl;
    sort(v.begin(),v.end());
    int maxcount = 1;
    int count = 1;
    
    for (int i =1; i<v.size(); i++){
        if (v[i]==v[i-1]) count++;
        else count = 1;
        maxcount = max(maxcount,count);
    }
    count = 1;
    for (int i =1; i<v.size(); i++){
        if (v[i]==v[i-1]) count++;
        else count = 1;
        if (count==maxcount){
            cout<<v[i]<<" "<<maxcount<<endl;
        }
    }
    return 0;
} 