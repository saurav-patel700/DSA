#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
int main (){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);
    display(v);

  vector<int> v2(v.size());
  for(int i=0;i<v2.size();i++){
    int j=v.size()-1-i;
    v2[i]=v[j];
  }cout<<endl;
  display(v2);
}