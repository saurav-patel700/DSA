#include <iostream>
#include <vector>
using namespace std;

void printSubset(int arr[], int n, int idx, vector<int>& subset, int k) {
    // If we have selected k elements, print them
    if (subset.size() == k) {
        for (int x : subset)
            cout << x << " ";
        cout << endl;
        return;
    }
    // If not enough elements are left to complete the subset
    if (subset.size() + (n - idx) < k)
        return;
    // Include current element
    subset.push_back(arr[idx]);
    printSubset(arr, n, idx + 1, subset, k);
    // Backtrack
    subset.pop_back();
    // Exclude current element
    printSubset(arr, n, idx + 1, subset, k);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    vector<int> subset;
    printSubset(arr, n, 0, subset, k);
    return 0;
}