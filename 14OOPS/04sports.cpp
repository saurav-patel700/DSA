#include<iostream>
using namespace std;
class player{
    private:
    int score;
    int health;
    public:
    void setscore(int s){
        cout<<"set hua hai"<<endl;
        score=s;
    }
    void sethealth(int h){
        cout<<"set hua hai"<<endl;
        health=h;
    }
    int gethealth(){
        return health;
    }
    int getscore(){
        return score;
    
    }
};
int main(){
    player harsh;
    harsh.setscore(10);
    harsh.sethealth(50);
    cout<<harsh.getscore()<<endl;
    cout<<harsh.gethealth();
} 