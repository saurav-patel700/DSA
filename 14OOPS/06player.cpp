#include<iostream>
using namespace std;
class Gun{
    private:
    int ammo;
    int damage;
    int scope;

    public:
    void setAmmo(int ammo){
        this->ammo = ammo;
    }

    void setDamage(int damage){
        this->damage = damage;
    }

    void setScope(int scope){
        this->scope = scope;
    }

    int getAmmo(){
        return ammo;
    }

    int getDamage(){
        return damage;
    }

    int getScope(){
        return scope;
    }
};
class player{
    private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    public:
    int gethealth(){
        return health;
    }
    int getage(){
        return age;
    }
    int getscore(){
        return score;
    }
    bool isalive(){
        return alive;
    }
    Gun getGun(){
        return gun;
    }
    void setgun(Gun gun){
        this->gun=gun;
    }
    void sethealth(int health){
        this->health=health;
    }
    void setage(int age){
        this->age=age;
    }
    void setscore(int score){
       this->score=score;
    }
    void setisalive(bool alive){
        this->alive=alive;
    }
};
int addscore(player a,player b){
    return a.getscore()+b.getscore();
}
player maxscore(player a,player b){
    if(a.getscore()>b.getscore()) return a;
    else return b;
}
int main(){
    player harsh;
    player raghav;// compile time static allocation
    player *bhoot=new player; // run time dynamic allocation
    // player bhootobject =*bhoot;
    
    Gun akm;
    akm.setAmmo(100);
    akm.setDamage(100);
    akm.setScope(100);

    harsh.setage(21);
    harsh.setscore(100);
    harsh.setisalive(true);
    harsh.sethealth(21);
    harsh.setgun(akm);



    raghav.setage(2200);
    raghav.setscore(100);
    raghav.setisalive(true);
    raghav.sethealth(21);


    (*bhoot).setscore(40);
    bhoot->setage(90);

    
    cout<<(*bhoot).getscore()<<endl; //m1
    cout<<bhoot->getage()<<endl;  //m2 best
    cout<<addscore(harsh,raghav)<<endl;
    player x=(harsh,raghav);
    cout<<x.getscore()<<endl;
    cout<<x.gethealth()<<endl;

    player players[3]={harsh,raghav,*bhoot};
    cout<<players[0].getage();
}