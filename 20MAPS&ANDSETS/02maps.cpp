#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first="saurav";
    p1.second=1;
    m["harsh"]=11;
    m["loki"]=111;

    m.insert(p1);

    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    m.erase("loki");
    cout<<endl;
    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }
} 