#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int maxsum=INT_MIN,maxidx=0;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];//sum upto k-1th term
    }
    maxsum=sum;
    //slidingwindow TC=O(n)
    int i=1,j=k;
    while(j<n){
        sum=sum + arr[j]-arr[i-1];
        if(maxsum<sum){
            maxsum=sum;
            maxidx=i;
        }
        i++,j++;
    }
    cout<<maxsum<<endl;
    cout<<maxidx<<endl;
}