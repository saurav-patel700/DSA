#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a, vector<int>& b, vector<int>& res){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
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
int main(){
    int arr[]={1,4,5,8};
    int n1=sizeof(arr)/sizeof(arr[0]);
    int brr[]={2,3,6,7,10,49};
    int n2=sizeof(brr)/sizeof(brr[0]);
    vector<int> a(arr,arr+n1); //copy array into vector
    vector<int> b(brr,brr+n2);
    vector<int> res(n1+n2);
    merge(a,b,res);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}