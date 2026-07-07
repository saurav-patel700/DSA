#include<iostream>
#include<vector>
using namespace std;
int c=0;
int inversion(vector<int>& a,vector<int>& b){
    int count=0,i=0,j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count+=(a.size()-i);
            j++;
        }
        else i++;
    }
    return count;
}
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
    c+=inversion(a,b);
    merge(a,b,v);
}
int main(){
    int arr[]={5,1,3,0,4,2,6};
    int n1=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n1);
    mergesort(v);
    cout<<c;
}