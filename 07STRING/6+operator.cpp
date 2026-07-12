#include<iostream>
#include<string>
#include<algorithm>
using namespace std;        
int main(){
    // string s1="saurav";
    // string s2="kumar";
    // string s3="Mr. "+s1+" "+s2+" is a good boy";
    // cout<<s3<<endl;
//  reverse
string s="abcdefgh";
reverse(s.begin()+2,s.end()); 
cout<<s<<endl;
}