#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,4,5,6,7,8,9};
    int n=9;
    for(int i=0;i<n;i++){
        if(arr[i]!=i){
            cout<<i;
            break;
        }
    }
}