// write a c++ program to find the sum of all the element of a given 2D matrix

#include <iostream>
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
   // sum
   int sum =0 ;
   for (int i =0; i<=m-1; i++){
    for(int j=0; j<=n-1; j++){
        sum = sum + arr[i][j];
    }
   }
cout<<sum;
    return 0;
}