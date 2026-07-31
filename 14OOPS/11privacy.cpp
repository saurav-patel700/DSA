// multilevel inheritance
#include<iostream>
using namespace std;
class A{
    private: // private members are not accessible outside the class
    int aprivate;
    protected: //cant be accessed outside the class but can be accessed in derived class
    int aprotected;
    public: // public members are accessible outside the class
    int apublic;
};
class B : public A{
    private:
    int bprivate;
    protected:
    int bprotected;
    public:
    int bpublic;
    // void show(){
    //     aprotected = 10; // can access protected member of base class
    //     bprotected = 20; // can access protected member of derived class
    // }

};

int main(){
    B b;
    b.bpublic = 20;
  //  b.aprotected = 10; // error: 'int A::aprotected' is protected within this context
    cout << b.bpublic << endl;
    A a;
    a.apublic = 30;
    b.apublic = 40;
    cout << b.apublic << endl;
    cout << a.apublic << endl;
   // b.aprotected = 40; // error: 'int A::aprotected' is protected within this context
}
