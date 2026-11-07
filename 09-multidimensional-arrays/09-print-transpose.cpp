// write a program to print the transpose of the matrix entered by the user and store it in a new matrix

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
    // Rowwise printing 
    for (int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // printing transpose coloumwise printing 
    for (int j=0; j<n;j++)
        for(int i=0; i<m; i++)
            cout<<arr[i][j]<<" ";
        
        cout<<endl;
    

    return 0;
}