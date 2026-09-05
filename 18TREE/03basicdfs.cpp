#include<iostream>
#include<climits>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void nthlevel(Node* root,int curr,int level){
    if(root==NULL) return;
    if(curr==level){ 
    cout<<root->val<<" ";
    return;
    }
    nthlevel(root->left,curr+1,level);
    nthlevel(root->right,curr+1,level);
}
int levels(Node* root){
    if(root==NULL) return 0;
    int lmax=levels(root->left);
    int rmax=levels(root->right);
    return 1 + max(lmax,rmax);
}
void levelorder(Node* root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        nthlevel(root,1,i);
        cout<<endl; 
    }
}

int main(){
    Node* a =new Node(1);
    Node* b =new Node(2);
    Node* c =new Node(3);
    Node* d =new Node(4);
    Node* e =new Node(5);
    Node* f =new Node(6);
    Node* g =new Node(7);
    Node* h =new Node(8);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    g->left=h;

    levelorder(a);
    cout<<endl;
}
