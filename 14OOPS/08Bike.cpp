#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Bike{
public:
    int tyresize;
    int enginesize;
    //default constructer;
    //value initialize karne ke liye
    Bike(int tyresize,int enginesize){
        this->tyresize=tyresize;
        this->enginesize  =enginesize;
        cout<<"constructor call hua"<<endl;
    }
    ~Bike(){
        cout<<"destructor call hua"<<endl;
    }
};


int main(){
    //object creation
    Bike tvs(12,50);
    Bike honda(13,60);
    Bike bajaj(14,70);

    bool flag=true;
    if(flag==true){
        Bike bmw(17,1000);
        cout<<bmw.tyresize<<" "<<bmw.enginesize<<endl;
    }
    cout<<tvs.tyresize<<endl;
    cout<<honda.tyresize<<endl;
    cout<<bajaj.tyresize<<endl;

    cout<<tvs.enginesize<<endl;
    cout<<honda.enginesize<<endl;
    cout<<bajaj.enginesize<<endl;
}
