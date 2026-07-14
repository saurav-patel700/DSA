#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    cout<<sum<<" ";
    for(int i=k;i<n;i++){
        sum+=arr[i]-arr[i-k];
        cout<<sum<<" ";
    }
}