// #include<iostream>
// using namespace std;
// void display(int arr[],int n,int i){
//     if(i==n) return;
//     cout<<arr[i]<<" ";
//     display(arr,n,i+1);
// }
// int main(){
//     int arr[]={2,4,5,7,8,9,7,5,4,3,2,1,0};
//     display(arr,13,0);
// }

//VECTOR
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v,int i){
    if(i==v.size()) return;
    cout<<v[i]<<" ";
    display(v,i+1);
}
int main(){
    vector<int> v={2,4,5,7,8,9,7,5,4,3,2,1,0};
    display(v,0);
}