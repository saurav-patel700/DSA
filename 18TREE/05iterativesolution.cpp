#include<iostream>
#include<climits>
#include<stack>
#include<queue>
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
//  int preordertraversal(Node* root){
//     vector<int> ans;
//     stack<Node*> st;
//     if(root!=NULL) st.push(root);
//     while(st.size()>0){
//         Node* temp=st.top();
//         st.pop();
//         ans.push_back(temp->val);
//         if(temp->right!=NULL) st.push(temp->right);
//         if(temp->left!=NULL) st.push(temp->left);
//     }
//     return ans;
//  }


Node*construct(int arr[],int n){
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        Node* temp=q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN) l=new Node(arr[i]);
        else l=NULL;
        if(j!=n && arr[j]!=INT_MIN) r=new Node(arr[j]);
        else r=NULL;
        temp->left=l;
        temp->right=r;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i+=2;
        j+=2;
    }
    return root;
}

int main(){
    int arr[]= {1,2,3,4,5,6,INT_MIN,INT_MIN,INT_MIN,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    // preordertraversal(root);   
    
}
