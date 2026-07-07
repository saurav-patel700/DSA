#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivotelement=arr[(si+ei)/2];
    int count = 0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotelement) count++;
    }
    int pivotidx=count + si;
    swap(arr[(si+ei)/2],arr[pivotidx]);
    int i=si,j=ei;
    while(i < pivotidx && j > pivotidx){
    while(arr[i] <= pivotelement) i++;
    while(arr[j] > pivotelement) j--;
    if(i < pivotidx && j > pivotidx){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
    return pivotidx; 
}
int kthsmallest(int arr[],int si,int ei,int k){
    if(si == ei)
    return arr[si];
    int pi=partition(arr,si,ei);
    if (pi+1==k) return arr[pi];
    else if(pi+1<k) return kthsmallest(arr,pi+1,ei,k);
    else return kthsmallest(arr,si,pi-1,k);
}
int main(){
    int arr[]={33,4,243,43,34,6,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=7;
   cout<<kthsmallest(arr,0,n-1,k);
    
}