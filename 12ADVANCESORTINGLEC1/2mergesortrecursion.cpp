#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a, vector<int>& b, vector<int>& res){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            res[k++]=a[i++];
        }
        else{
            res[k++]=b[j++];
        }
    }
    while(i<a.size()){
        res[k++]=a[i++];
    }
    while(j<b.size()){
        res[k++]=b[j++];
    }
}
void mergesort(vector<int>& v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2, n2=n-n1;
    vector<int> a(n1), b(n2);
    for(int i=0;i<n1;i++)
        a[i]=v[i];
    for(int i=0;i<n2;i++)
        b[i]=v[n1+i];
    mergesort(a);
    mergesort(b);
    merge(a,b,v);
}
int main(){
    int arr[]={1,10,13,15,15,174,5,8,4,19,46,50};
    int n1=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n1);
    mergesort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}