#include<iostream>
#include<vector>
using namespace std;

void sort012(vector<int>& v){
    int low = 0, mid = 0, high = v.size() - 1;

    while(mid <= high){
        if(v[mid] == 0){
            swap(v[low], v[mid]);
            low++;
            mid++;
        }
        else if(v[mid] == 1){
            mid++;
        }
        else{
            swap(v[mid], v[high]);
            high--;
        }
    }
}

int main (){
    vector<int> v = {0,1,2,0,1,2,0,1};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort012(v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}