// for each loop 
// it will count all element in array or vector


#include <iostream>
using namespace std;
int main(){
    int arr[] = {5,3,1,4,2};
    int n = 5;
    for(int ele : arr)
{
    cout<<ele<<" ";
}    
    return 0;
}