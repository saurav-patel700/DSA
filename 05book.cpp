#include<iostream>
using namespace std;
class book{
    public:
    char name;
    int price;
    int pages; 
    int countbooks(int p){
        if(price<p) return 1;
        else return 0;
    }
    bool isbookpresent(char book){
         if(name==book) return true;
         else return false;

    }
};

int main(){
book harrypotter;
harrypotter.name='H';
harrypotter.price=1000;
harrypotter.pages=500;
cout<<harrypotter.countbooks(2000)<<endl;
cout<<harrypotter.isbookpresent('H');
return 0;
}