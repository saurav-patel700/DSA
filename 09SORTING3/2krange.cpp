#include<iostream>
#include<climits>
#include<algorithm>
#include<iomanip>
using namespace std;

float maxf(float a,float b){
    return (a>=b)?a:b;
}

float minf(float a,float b){
    return (a<b)?a:b;
}

int main(){
    int arr[]={5,3,6,2};
    int n=4;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    float kmin = -1e9;
    float kmax = 1e9;

    bool flag=true;

    for(int i=0;i<n-1;i++){
        float mid = ((float)arr[i] + (float)arr[i+1]) / 2;

        if(arr[i] >= arr[i+1]){
            kmin = maxf(kmin, mid);
        }
        else{
            kmax = minf(kmax, mid);
        }

        if(kmin >= kmax){
            flag=false;
            break;
        }
    }

    if(!flag) cout<<"-1"<<endl;
    else cout<<fixed<<setprecision(6)<<kmin<<" "<<kmax<<endl;
}
