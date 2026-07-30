#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Bike{
public:
    int tyresize;
    int enginesize;
    static int bikes;

    Bike(int tyresize,int enginesize){
        this->tyresize=tyresize;
        this->enginesize  = enginesize;
    }
    static void setbikes(){
        bikes++;
    }
};

int Bike::bikes=10;
int main(){
    Bike tvs(12,50);
    Bike honda(13,60);
    tvs.setbikes();
    cout<<tvs.bikes<<endl;
    cout<<honda.bikes<<endl;
    // cout<<tvs.bikes<<endl;
    // cout<<honda.tyresize<<endl;

}
