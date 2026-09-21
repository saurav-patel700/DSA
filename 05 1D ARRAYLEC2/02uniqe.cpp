// # Find the unique number in a given Array where all the elements are being repeated twice with one 
// value being unique
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 5, 3, 2};
    int n = 5;

    int ans = 0;

    for(int i = 0; i < n; i++) {
        ans = ans ^ arr[i];
    }

    cout << "Unique number = " << ans;

    return 0;
}
// (2 ^ 2) ^ (3 ^ 3) ^ 5
// = 0 ^ 0 ^ 5
// = 5