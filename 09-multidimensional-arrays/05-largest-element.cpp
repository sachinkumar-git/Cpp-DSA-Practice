// write a c++ program to find the largest element of a given 2D array of integer

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
   // max
   int max  = INT_MIN;
   for (int i =0; i<=m-1; i++){
    for(int j=0; j<=n-1; j++){
        if (max<arr[i][j]) max = arr[i][j];
    }
   }
cout<<max;
    return 0;
}