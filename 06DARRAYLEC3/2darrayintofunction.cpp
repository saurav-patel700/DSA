#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    void change2d(int arr[3][3]){
        arr[0][0]=100;
    }
    int main(){
   int arr[3][3]={{1,2,3},{1,2,3},{1,2,3}};
   cout<<arr[0][0]<<endl;
   change2d(arr);
   cout<<arr[0][0];
}