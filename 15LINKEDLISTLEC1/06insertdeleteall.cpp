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
class Linkedlist{
public:
    Node* head;
    Node* tail;
    int size;
    Linkedlist(){
    head=tail=NULL;
    size=0;
    }
    void insertathead(int val){
        Node*temp=new Node(val);
        if(size==0) head=tail=temp;
        else {
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertattail(int val){
        Node*temp=new Node(val);
        if(size==0) head=tail=temp;
        else {
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
void insertatidx(int idx,int val){
    if(idx<0 || idx>size) cout<<"invalid index"<<endl;
    else if(idx==0) insertathead(val);
    else if(idx==size) insertattail(val);
    else{
        Node* t=new Node(val);
        Node* temp = head;
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        t->next=temp->next;
        temp->next=t;
        size++;
    }
}
    int getvalatidx(int idx){
        if(idx<0 || idx>=size){
            cout<<"invalid idx";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else {
            Node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }
    void deleteathead(){
        if(size==0) {
            cout<<"list is enpty"<<endl;
            return;
        }
        head=head->next;
        size--;
    }
    void deleteattail(){
        if(size==0){
            cout<<"list is empty"<<endl;
            return ;
        }
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;

        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void deleteatidx(int idx){
        if(idx<0 || idx>=size) cout<<"invalid index"<<endl;
        else if(idx==0) deleteathead();
        else if(idx==size-1) deleteattail();
        else{
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl<<"size"<<size<<endl;
        
    }
};
int main(){
    Linkedlist ll;
    ll.insertattail(107);
    ll.insertattail(106);
    ll.insertattail(105);
    ll.insertattail(104);
    ll.insertattail(103);
    ll.insertathead(102);
    ll.insertathead(101);
    ll.insertathead(100);
    ll.insertatidx(4,80);
    cout<<ll.getvalatidx(1)<<endl ;
    ll.deleteathead();
    ll.deleteattail();
    ll.display();
    ll.deleteatidx(3);
    ll.display();
}