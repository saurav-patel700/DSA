#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
           cin >> arr[i][j];
        }
        cout << endl;
    }
int max = arr[0][0];

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        if(arr[i][j] > max){
            max = arr[i][j];
        }
    }
    cout << endl;
}
cout << "Maximum element in the 2D array is: " << max << endl;
}