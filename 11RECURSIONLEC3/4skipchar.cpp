#include<iostream>
using namespace std;
// void removechar(string ans,string original){
//     if(original.size()==0){
//         cout<<ans;
//         return;
//     }
//     char ch = original[0];
//     if(ch=='a') removechar(ans,original.substr(1));
//     else removechar(ans+ch,original.substr(1));
// }
void removechar(string ans,string original,int i){
    if(original.size()==i){
        cout<<ans;
        return;
    }
    char ch = original[i];
    if(ch=='a') removechar(ans,original,i+1);
    else removechar(ans+ch,original,i+1);
}
int main(){
    string str="sauravkumar";
    removechar("",str,0);
}