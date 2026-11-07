#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& a, vector<int>& b, vector<int>& res){
    int i = 0, j = 0, k = 0;
    int n1 = a.size();
    int n2 = b.size();

    while(i < n1 && j < n2){
        if(a[i] < b[j]){
            res[k++] = a[i++];
        }
        else{ 
            res[k++] = b[j++];
        }
    }

     while (i < n1) res[k++] = a[i++];
    while (j < n2) res[k++] = b[j++];
}
void mergesort(vector<int>& v){
    int n = v.size();
    if (n <= 1){
        return;
    }
    int n1 = n/2, n2 = n - n1;
    vector<int> a(n1), b(n2);
    // copy pasting
    for (int i = 0; i < n1; i++){
        a[i] = v[i];
    }
    for (int i = 0; i < n2; i++){
        b[i] = v[i + n1];
    }

    // magic recursion
    mergesort(a);
    mergesort(b);

    // merging
    merge(a, b, v);
}
int main(){
    int arr[] = {5,1,3,0,4,9,6};
    // int arr[] = {1,4,5,8};
    // int n1 = sizeof(arr)/sizeof(arr[0]);
    // vector<int>a(arr, arr + n1);
    // int brr [] = {2,3,6,7,10,12};
    // int n2 = sizeof(brr)/sizeof(brr[0]);
    // vector<int>b(brr, brr + n2);

    // vector<int> res(n1 + n2);
    // merge(a,b,res);
    // for(int i = 0; i < n1 + n2; i++){
    //     cout << res[i] << " ";
    // }
    
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr, arr + n);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    mergesort(v);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}