#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s="asxzfgtyudjs";
    string str="";
    for(int i=0;i<s.length();i++){
        if(s[i]>='x'){
            str.push_back(s[i]);
        }
    }
    sort(str.begin(),str.end());
    cout<<str;
}