#include <iostream>
using namespace std;
int main(){
    string s="saurav";
    cout<<s<<endl;
    s[1]='o';
    cout<<s<<endl;
    for(int i=0;s[i]!='\0';i++){
        if(i%2==0) s[i]='a';
        
    }
      cout<<s<<endl;
}