#include<iostream>
#include<climits>
#include<stack>
#include<queue>
#include<algorithm>
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
 void preordertraversal(Node* root){
    vector<int> ans;
    stack<Node*> st;
    if(root!=NULL) st.push(root);
    while(st.size()>0){
        Node* temp=st.top();
        st.pop();
        ans.push_back(temp->val);
        if(temp->right!=NULL) st.push(temp->right);
        if(temp->left!=NULL) st.push(temp->left);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
 }
 void postordertraversal(Node* root){
    vector<int> ans;
    stack<Node*> st;
    if(root!=NULL) st.push(root);
    while(st.size()>0){
        Node* temp=st.top();
        st.pop();
        ans.push_back(temp->val);
        if(temp->left!=NULL) st.push(temp->left);
        if(temp->right!=NULL) st.push(temp->right);
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
 }
 void inordertraversal(Node* root){
    vector<int> ans;
    stack<Node*> st;
    Node* node=root;
    while(st.size()>0 || node){
        if(node){
            st.push(node);
            node=node->left;
        }
        else{
            Node* temp=st.top();
            st.pop();
            ans.push_back(temp->val);
            node=temp->right;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
 }


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
    int arr[]= {1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    preordertraversal(root);
    cout<<endl;   
    postordertraversal(root);   
    cout<<endl;   
    inordertraversal(root);   
    
}
