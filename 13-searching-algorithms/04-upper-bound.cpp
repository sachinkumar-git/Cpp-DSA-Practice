// given a sorted array and an integer "x" find the upper bound of x 

// using linear search 
// O(n) time complexity

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[9] = {1, 2, 4, 5, 9, 15, 18, 21, 24};
//     int n = 9;    // int n = sizeof(arr) / sizeof(arr[0]);
//     int x = 20;

//     for (int i=0; i<n; i++){
//         if(arr[i]>x) {
//             cout<<arr[i];  // PRINT THE FIRST ELEMENT GREATER THAN X
//             break; 
//         }
//     }

//     return 0;
// }


// using binary search 
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5, 9, 15, 18, 21, 24};
    int n = 9;
    int x = 14;

    int lo = 0;        // index
    int hi = n - 1;    // index
    bool flag = false;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;  // used maths for more optimized code 

        if (arr[mid] == x) {
            flag = true;
            cout<<arr[mid+1]; // WHEN ELEMENT IS FOUND, PRINT THE NEXT ELEMENT
            break;
        }
        else if (arr[mid] < x) lo = mid + 1;
        else  hi = mid - 1;   // another way of writing this line else if (arr[mid]>target) hi = mid - 1;
    }

    if (flag == false ) cout << arr[lo]; // WHEN ELEMENT IS NOT FOUND, PRINT THE ELEMENT AT LO
    

    return 0;
}

