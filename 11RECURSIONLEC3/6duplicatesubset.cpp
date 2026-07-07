#include<iostream>
#include<string>
#include<vector>
using namespace std;
void subset(string ans,string original,vector<string>& v,bool flag){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch=original[0];
    if(flag || ch!=original[1]){
        subset(ans+ch,original.substr(1),v,true);
    }
    subset(ans,original.substr(1),v,false);
}
int main(){
    string str="aabc";
    vector<string> v;
    subset("",str,v,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}  