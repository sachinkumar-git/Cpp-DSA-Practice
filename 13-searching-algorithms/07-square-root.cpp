#include <iostream>
using namespace std;

int sqrtBinarySearch(int x) {
    if (x == 0 || x == 1)
        return x;

    int low = 1, high = x, ans = 0;

    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (mid * mid == x) return mid;
        if (mid * mid < x) {
            ans = mid;        // store possible answer
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int x;
    cin >> x;

    cout << sqrtBinarySearch(x);
    return 0;
}
