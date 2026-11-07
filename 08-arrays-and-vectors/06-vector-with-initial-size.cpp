#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v(5,7); // initial size = 5 and each element has value 7
    cout<<v.size()<<endl;
    cout<<v[4];
    
    
    return 0;
}