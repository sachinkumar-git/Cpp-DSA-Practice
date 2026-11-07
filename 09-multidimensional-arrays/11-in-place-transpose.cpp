// you are given a matrix / 2D Array of size (n*n) change this matrix into its transpose 



#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of rows/ columns : ";
    cin>>m;
   
    cout<<"enter the elements of matrix : "<<endl;
    //input
    int arr[m][m];
    for (int i=0; i<=m-1; i++){
        for(int j=0; j<=m-1; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // print
    for (int i=0; i<=m-1; i++){
        for(int j=0; j<=m-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // transpose in the same matrix
    for (int i=0; i<=m-1; i++){
        for(int j=i+1; j<=m-1; j++){  // modify the loop only
            // swapping of i,j and j,i
           int temp = arr[i][j];
           arr[i][j] = arr[j][i];
           arr[j][i] = temp;
        }
    }
    cout<<endl;

    // printin matrix
    for (int i=0; i<=m-1; i++){
        for(int j=0; j<=m-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}