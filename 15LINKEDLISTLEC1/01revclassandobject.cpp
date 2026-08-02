#include<iostream>
using namespace std;
class student{
    public:
    int rollno;
    string name;
    float marks;
    student(string name,int rollno,float m){
        this->name=name;
        (*this).rollno=rollno;
        this->marks=m;
    }
};
int main(){
    student s("saurav",72,90.4);
    cout << "Roll No: " << s.rollno << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
    return 0;
}
