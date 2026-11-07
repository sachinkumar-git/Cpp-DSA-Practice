// write a c++ program to find the smallest element of a given 2D array of integer

#include <iostream>
#include <climits>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of rows : ";
    cin>>m;
    int n;
    cout<<"Enter the number of columns : ";
    cin>>n;
    cout<<"enter the elements of matrix : ";
    int arr[m][n];
    for (int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            cin>>arr[i][j];
        }
    }
   // min
   int MIN  = INT_MAX;
   for (int i =0; i<=m-1; i++){
    for(int j=0; j<=n-1; j++){
        if (MIN > arr[i][j]) MIN = arr[i][j];
    }
   }
cout<<MIN;
    return 0;
}