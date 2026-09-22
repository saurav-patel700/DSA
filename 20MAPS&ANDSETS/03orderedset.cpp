#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    map<string,int> m;
    m["saurav"]=30;
    m["harsh"]=20;
    m["sanket"]=40;
    for(auto x:m){
        cout<<x.first<<endl;
        cout<<x.second<<endl;
    }
    // set<int> s;
    // s.insert(5);
    // s.insert(4);
    // s.insert(3);
    // for(int ele:s){
    //     cout<<ele<<endl;
    // }
}
