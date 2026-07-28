#include<iostream>
#include<vector>
#include<string>
using namespace std;
class cricket{
    public:
    string name;
    int age;
    int testmatch;
    int averagescore;
};
int main(){
    vector<cricket> cricketer;
    for(int i=0;i<2;i++){
        cricket c;
        cout<<"Enter name of cricketer: ";
        cin>>c.name;
        cout<<"Enter age of cricketer: ";
        cin>>c.age;
        cout<<"Enter number of test matches played: ";
        cin>>c.testmatch;
        cout<<"Enter average score of cricketer: ";
        cin>>c.averagescore;
        cricketer.push_back(c);
    }
    cout<<endl<<"Details of cricketers: "<<endl;
    for(int i=0;i<2;i++){
        cout<<"Name: "<<cricketer[i].name<<endl;
        cout<<"Age: "<<cricketer[i].age<<endl;  
        cout<<"Test Matches: "<<cricketer[i].testmatch<<endl;
        cout<<"Average Score: "<<cricketer[i].averagescore<<endl;
        cout<<endl;
    }
    return 0;
}