// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n==0 || n==1) return 1; 
//     return n*factorial(n-1);
// }
// int main(){
//     cout<<factorial(6);
// }




//PRINT N TO 1;
#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return;
    cout << n << endl;
    print(n-1);
}
int main(){
    print(6);
    return 0;
}