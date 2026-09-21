#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 20, 8, 15, 25};
    int n = 6;
    int first = -1, second = -1, third = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second) {
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third) {
            third = arr[i];
        }
    }
    cout << "Largest = " << first << endl;
    cout << "Second Largest = " << second << endl;
    cout << "Third Largest = " << third << endl;

    return 0;
}