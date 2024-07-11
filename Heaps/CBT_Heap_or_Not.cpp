#include<iostream>
#include<queue>
#include<limits.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
Node* insertIntoNode(Node* &root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }
    if(data<root->data){
        //left
        root->left=insertIntoNode(root->left,data);

    }
    else{
        //right
        root->right=insertIntoNode(root->right,data);
    }
    return root;
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertIntoNode(root,data);
        cin>>data;
    }
}
void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        
    }
}
pair<bool,int>solve(Node* root){
    if(root==NULL){
        pair<bool,int>p=make_pair(true,INT_MIN);
        return p;
    }
    if(root->left==NULL&&root->right==NULL){
        pair<bool,int>p=make_pair(true,root->data);
        return p;
    }
    pair<bool,int>leftAns=solve(root->left);
    pair<bool,int>rightAns=solve(root->right);
    if(leftAns.first==true&&rightAns.first==true&&root->data>leftAns.second&&root->data>rightAns.second){
       pair<bool,int>p=make_pair(true,root->data);
       return p; 
    }
    else{
        pair<bool,int>p=make_pair(false,-1);
        return p; 
    }
}
int main(){
    Node* root=NULL;
    cout<<"Enter data for BST: "<<endl;
    takeInput(root);
    cout<<endl;
    cout<<"Printing Tree: "<<endl;
    levelOrderTraversal(root);
    pair<bool,int>p=solve(root);
    if(p.first==true){
        cout<<"CBT is a Heap"<<endl;
        cout<<p.second;
    }
    else{
        cout<<"CBT is not a Heap"<<endl;
        cout<<p.second;
    }
}