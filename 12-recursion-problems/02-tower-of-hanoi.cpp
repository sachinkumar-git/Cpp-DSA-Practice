// The object of the game is to move all the disks over to Tower 3 (drag and drop). But you cannot place a larger disk onto a smaller disk.
#include <iostream>
using namespace std;
void hanoi (int n, char a, char b, char c){
    if (n==0) return;
    hanoi(n-1,a,c,b);
    cout<<a<<" -> "<<c<<endl;
    hanoi(n-1,b,a,c);
}
int main(){
    int n = 3;
    hanoi(n,'A','B','c');

    
    return 0;
}