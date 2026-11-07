#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5, 9, 15, 18, 21};
    int target = 18;

    int n = sizeof(arr) / sizeof(arr[0]);

    int lo = 0;        // index
    int hi = n - 1;    // index
    bool flag = false;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;  // used maths for more optimized code 

        if (arr[mid] == target) {
            flag = true;
            break;
        }
        else if (arr[mid] < target) lo = mid + 1;
        else  hi = mid - 1;   // another way of writing this line else if (arr[mid]>target) hi = mid - 1;
    }

    if (flag) cout << "target present";
    else cout << "target not present";

    return 0;
}
