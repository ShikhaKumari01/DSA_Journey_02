#include<iostream>
#include<queue>
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
void printLeftBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL&&root->right==NULL) return;
    cout<<root->data<<" ";
    if(root->left){
        printLeftBoundary(root->left);
    }
    else{
        printLeftBoundary(root->right);
    }
}
void printLeafNode(Node* root){
    if(root==NULL) return;
    if(root->left==NULL&&root->right==NULL)
        cout<<root->data<<" ";
    printLeafNode(root->left);
    printLeafNode(root->right);
}
void printRightBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL&&root->right==NULL) return;
    cout<<root->data<<" ";
    if(root->left){
        printRightBoundary(root->left);
    }
    else{
        printRightBoundary(root->right);
    }
}
void BoundaryTraversal(Node* root){
    if(root==NULL) return;
    printLeftBoundary(root->left);
    printLeafNode(root);
    printRightBoundary(root->right);
}
int main(){
    Node* root=NULL;
    root=builtTree();
    BoundaryTraversal(root);
}