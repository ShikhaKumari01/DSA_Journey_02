#include<iostream>
#include<queue>
#include<limits.h>
#include<vector>
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
Node* swapping(Node* root,vector<int>store,int &i){
    if(root==NULL) return NULL;
    swapping(root->left,store,i);
    swapping(root->right,store,i);
    root->data=store[i];
    i=i+1;
    return root;
}
void inorderTraversal(Node* root,vector<int>&store){
    if(root==NULL) return;
    inorderTraversal(root->left,store);
    store.push_back(root->data);
    inorderTraversal(root->right,store);
}
int main(){
    Node* root=NULL;
    cout<<"Enter data for BST: "<<endl;
    takeInput(root);
    cout<<endl;
    cout<<"Printing Tree: "<<endl;
    levelOrderTraversal(root);
    vector<int>store;
    cout<<endl<<"Printing Inorder: "<<endl;
    inorderTraversal(root,store);
    for(int i=0;i<store.size();i++){
        cout<<store[i]<<" ";
    }
    cout<<endl;
    int i=0;
    root=swapping(root,store,i);
    levelOrderTraversal(root);
}