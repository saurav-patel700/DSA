#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main (){
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    // sort for sorting array
    sort(v.begin(),v.end());  
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
        }
        cout<<endl;
}