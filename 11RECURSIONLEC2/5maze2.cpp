#include<iostream>
using namespace std;
int maze(int r,int c){
    if(r<1 || c<1) return 0;
    if(r==1 && c==1) return 1;
    int rightways = maze(r,c-1);
    int downways = maze(r-1,c);
    return rightways+downways;
}

int main(){
    cout<<maze(3,4)<<endl; 
   
}