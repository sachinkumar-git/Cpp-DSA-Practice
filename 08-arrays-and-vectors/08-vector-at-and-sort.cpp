#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;

int main() {
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6); 
    v.push_back(1);

//    cout<<v[0]<<endl; 
//    v.at(0) = 25; //  updated the value 
//    cout<<v.at(0);


    // Printing original vector
    for(int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;

    // Sorting the vector
    sort(v.begin(), v.end());

    // Printing sorted vector
    for(int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;

    return 0;
}
