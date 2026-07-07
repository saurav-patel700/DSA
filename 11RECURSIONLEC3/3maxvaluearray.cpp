#include<iostream>
using namespace std;
// void printarray(int arr[],int n,int i,int max){
//     if(i==n){
//         cout<<max;
//         return;
//     }
//     if(max<arr[i]) max=arr[i];
//     printarray(arr,n,i+1,max);
// }
int printarray1(int arr[],int n,int idx){
    if(idx==n) return -1;
    return max(arr[idx],printarray1(arr,n,idx+1));
}
int main(){
    int arr[]={2,4,5,7,8,9,7,5,4,3,2,1,0};
    // printarray(arr,13,0,-1);
    cout << printarray1(arr,13,0) << endl;
} 