#include<iostream>
using namespace std;
 class Vehicle{// parentclass
    public:
    int tyresize;
    int enginesize;
    int size;
    int light;
    string companyname;
    void showcompany(){
        cout<<"company name is "<<companyname<<endl;
    }
};
class Car : public Vehicle{//child class
    public:
    int tyresize;
};
class Bike : public Vehicle{
    public:
    int tyresize;
};

int main(){
    Bike honda;
    honda.size=5;
    honda.tyresize=5;
    honda.light=5;
    honda.showcompany();
    cout<<honda.light<<endl;
}
