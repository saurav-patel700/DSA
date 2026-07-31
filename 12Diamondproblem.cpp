#include<iostream>
using namespace std;
class A{
    public:
    int apublicdata;
    void show(){
        cout<<"this is class A"<<endl;
    }
};
class B: virtual public A{
    public:
    int bpublicdata;
    void show(){
        cout<<"this is class B"<<endl;
    }
};
class C:virtual public A{
    public:
    int cpublicdata;
    void show(){
        cout<<"this is class C"<<endl;
    }
};
class D:public B, public C{
    public:
    int dpublicdata;
    void show(){
        //  cout<<C::apublicdata<<endl; 
        cout<<"this is class D"<<endl;
    }
};
int main(){
    D d;
    d.dpublicdata=10;
    d.show();
}