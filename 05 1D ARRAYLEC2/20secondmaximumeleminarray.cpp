#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,2,4,5,677,444,8,65,43};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=max && smax<arr[i]) smax=arr[i];
    }
    cout<<smax<<endl;
    cout<<max<<endl;
}