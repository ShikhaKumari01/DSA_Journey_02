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
Node* builtTree(){
    int data;
    cout<<"Enter data: ";
    cin>>data;
    if(data==-1) return NULL;
    Node *newNode=new Node(data);
    cout<<"Left part of "<<data<<" node"<<endl;
    newNode->left=builtTree();
    cout<<"Right part of "<<data<<" node"<<endl;
    newNode->right=builtTree();
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
int height(Node* root){
    if(root==NULL) return 0;
    int maxHeight=INT_MIN;
    int leftHeight=height(root->left);
    int rightHeight=height(root->right);
    maxHeight=max(leftHeight,rightHeight)+1;
    return maxHeight;
}
bool checkBalance(Node* root){
    if(root==NULL) return true;
    int leftHeight=height(root->left);
    int rightHeight=height(root->right);
    int diff=abs(leftHeight-rightHeight);
    bool ans=diff<=1;
    bool leftAns=checkBalance(root->left);
    bool rightAns=checkBalance(root->right);
    if(ans&&leftAns&&rightAns){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    Node* root=NULL;
    root=builtTree();
    levelOrderTraversal(root);
    bool flag=checkBalance(root);
    if(flag){
        cout<<"Balanced Binary Tree"<<endl;
    }
    else{
        cout<<"Not a Balanced Binary Tree"<<endl;
    }
}