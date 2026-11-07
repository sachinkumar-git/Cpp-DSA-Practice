#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> &arr1, vector<int> &arr2) {
    int n = arr1.size();
    int m = arr2.size();
    vector<int> res(n + m);

    int i = 0; // pointer for arr1
    int j = 0; // pointer for arr2
    int k = 0; // pointer for res

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            res[k++] = arr1[i++];
        } else {
            res[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1
    while (i < n) {
        res[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2
    while (j < m) {
        res[k++] = arr2[j++];
    }

    return res;
}

int main() {
    vector<int> arr1 = {1, 4, 5, 8};
    vector<int> arr2 = {2, 3, 6, 7, 10, 12};

    cout << "Array 1: ";
    for (int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "Array 2: ";
    for (int i = 0; i < arr2.size(); i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    vector<int> merged = merge(arr1, arr2);

    cout << "Merged Array: ";
    for (int i = 0; i < merged.size(); i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}
