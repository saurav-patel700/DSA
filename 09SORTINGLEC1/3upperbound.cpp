#include<iostream>
using namespace std;
int main(){
    int arr[9]={1,2,3,4,15,26,47,58,69};
    int n=9;
    int x=46;
     
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            flag=true;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]<x) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false) cout<<arr[lo];
}