// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number";
//     cin>>n;
//     for (int i=0; i<=n; i++ ){
//         int curr = 1;
//         for (int j =0; j<=i; j++){
//             cout<<curr;
//             int next = curr*(i-j)/(j+1);
//             curr = next;

           
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // print spaces to center the triangle
        for (int space = 0; space < n - i - 1; space++) {
            cout << "  ";
        }

        int curr = 1;
        for (int j = 0; j <= i; j++) {
            cout << curr << "   ";  // print value with spaces
            curr = curr * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}
