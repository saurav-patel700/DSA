#include<iostream>
using namespace std;
class Bike{
    public:
    int tyresize;
    int enginesize;
//construction overloading
    Bike(int ts,int es) : tyresize(ts),enginesize(es) {}
    Bike(int ts) : tyresize(ts),enginesize(34) {}
    Bike() : tyresize(12),enginesize(13) {}
    
};
//function ovrloading
void calculatearea(int a,int b){
    cout<<b*a<<endl; 
}
void calculatearea(int a){
    cout<<a*a<<endl; 
}
void calculatearea(float a){
    cout<<3.14*a*a<<endl; 
}

int main(){
calculatearea(3.0f);
calculatearea(3);
calculatearea(3,12);

}