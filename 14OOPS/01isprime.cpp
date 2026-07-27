#include<iostream>
using namespace std;
    int fac=0;
    bool isprime(int n){
        if(n==1) return false;
        for(int i=2;i<n;i++){
            if(n%i==0){
                fac=i;
                return false;
            }
        }
        return true;
    }
    int main(){
        int n;
        cout<<"Enter a number: ";
        cin>>n;
        if(isprime(n)){
            cout<<n<<" is a prime number."<<endl;
        }
        else{
            cout<<n<<" is not a prime number. It is divisible by "<<fac<<"."<<endl;
        }
        return 0;
    }