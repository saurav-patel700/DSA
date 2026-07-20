#include<iostream>
#include<vector>
using namespace std;

void sort01(vector<int>& v){
    int i = 0, j = v.size() - 1;

    while(i < j){
        if(v[i] > 0){
            i++;
        }
        else if(v[j] <0){
            j--;
        }
        else{
            swap(v[i], v[j]);
            i++;
            j--;
        }
    } 
}

int main (){
    vector<int> v = {1,-2,3,-4,-5,6,-7,8};
  for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort01(v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
