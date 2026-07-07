#include<iostream>
#include<string>
using namespace std;
int main(){
string arr[]={"0123","4567","8901","2345"};
int max=stoi(arr[0]);
string maxs=arr[0];
for(int i=1;i<4;i++){
    int x=stoi(arr[i]);
    if(x>max){
        max=x;
        maxs=arr[i];
    }
    }
cout<<maxs<<endl;
}