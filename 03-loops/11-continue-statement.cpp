// write a  program to print odd numbers from 1 to 100

// #include <iostream>
// using namespace std;
// int main(){
//     for (int i=1; i<=10; i++){
//         if(i%2==0) continue;
//         cout<<i<<endl;
//     }

//     return 0;
// }

// important question → predict the output 

#include <iostream>
using namespace std;
int main()
{
    int x = 4, y = 0, z;
    while (x >= 0)
    {
        x--;
        y++;
        if (x == y)
        
            continue;
        
        else
            cout<< x << "" << y << endl;
    }

    return 0;
}