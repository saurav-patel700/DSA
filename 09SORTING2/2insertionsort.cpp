#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={5,3,4,1,2};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //insertion
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}