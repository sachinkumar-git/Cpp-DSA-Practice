// given an array of marks of student if the marks of any student is less than 
// 35 print its roll number. [ roll  number here refers to  the index of all the array ]
#include <iostream>
using namespace std;
int main(){
    // int marks [6]; not taking size by user

    int n;
    cout<<"enter no of student : ";
    cin>>n;
    int marks[n];
    
    //input
    
    for(int i =0; i<=n-1; i++){
        cout<<"enter a marks of student "<<i<<endl  ;
        cin>>marks[i];
    }

    // output 
    for(int i =0; i<=n-1; i++){
        if  (marks[i]<35){
            cout<<i<<endl;
        }
    }
    
    
    return 0;
}