#include<iostream>
#include<vector>
using namespace std;
void change2dvector(vector< vector<int> > &v){
    v[1][1]=100;
}
void length(vector< vector<int> > &v){
    cout<<v.size();
}
int main(){
    vector<int> v1={1,2,3};
    vector<int> v2={1,2};
    vector<int> v3={1,2,3,4,5};
    vector< vector<int> > v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    cout<<v[1][1]<<endl;
    change2dvector(v);
    cout<<v[1][1]<<endl;
    length(v);
}