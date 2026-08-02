#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    Node* temp=&a; // temp is a pointer to the first node
    while(1){
        cout<<temp->val<<" "; // print the value of the current node
        if(temp->next==NULL) break; // if next is NULL then break the loop
        temp=temp->next; // move to the next node
    }
 }