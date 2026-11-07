#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int low = 0;
    int high = arr.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] < arr[mid + 1]) {
            // Increasing part
            low = mid + 1;
        } else {
            // Decreasing part (mid can be peak)
            high = mid;
        }
    }
    return low;   // peak index
}

int main() {
    vector<int> arr = {0, 2, 5, 3, 1};
    cout << peakIndexInMountainArray(arr);
    return 0;
}
