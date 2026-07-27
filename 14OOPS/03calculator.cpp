#include<iostream>
using namespace std;
class calculator{
    private:
    int a;
    int b;
    public:
    void add(){
        cout<<a+b<<endl;
    }
    void sub(){
        cout<<a-b<<endl;
    }
};
int main(){
    calculator calci;
    calci.add();
    calci.sub();
    return 0;
}