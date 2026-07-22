#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int k=3;
    int maxsum=INT_MIN;
    int maxidx=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=n-k;i++){
        int sum=0;
        for(int j=i;j<i+k;j++){
            sum+=arr[j];
        }
       if(sum>maxsum){
            maxsum=sum; 
            maxidx=i;
             }               
        }
        cout<<maxsum<<endl<<maxidx<<" ";
    }
// brute force approach