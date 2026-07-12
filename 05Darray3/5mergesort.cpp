#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> merge(vector<int>& arr1,vector<int>& arr2){
int n=arr1.size();
int m=arr2.size();
vector<int> res(m+n); 
int i=0,j=0,k=0;
while(i<=n-1 && j<=m-1){
    if(arr1[i]<arr2[j]){
        res[k]=arr1[i];
        i++,k++;
    }
    else{
        res[k]=arr2[j];
        j++,k++;
    }
}


if(i==n){
    while(j<=m-1){
        res[k]=arr2[j];
        j++,k++;
    }
}
if(j==m){
    while(i<=n-1){
        res[k]=arr1[i];
        i++,k++;
    }
}
return res;
}
int main(){
    vector<int> arr1={1,4,5,8};
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";

    }
    cout<<endl;
    vector<int> arr2={2,3,6,7};
    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    vector<int> v=merge(arr1,arr2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
   
}