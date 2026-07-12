#include <iostream>
using namespace std;
int main(){
    char str[]={'a','a','a','\0','a','a','a','a'};
    cout<<str<<endl;
    char str1[5]="abcd";
    for(int i=0;i<5;i++){
        cout<<str1[i]<<" ";
    }
      cout<<str1;
}