#include<iostream>
#include<string>
using namespace std;
int main(){
    // string s="saurav is saurav";
    // cout<<s.length()<<endl;
    // cout<<s.size()<<endl;
    // cout<<s.capacity()<<endl;
    // int len=s.length();
    // cout<<len<<endl;
    string str="saurav";
    cout<<str<<endl;
    str.push_back('k');
    str.push_back('a');
    str.push_back('r');
    str.pop_back();
    str.pop_back();
    cout<<str<<endl;

} 