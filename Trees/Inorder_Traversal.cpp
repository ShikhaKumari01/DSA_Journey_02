// #include<iostream>
// #include<queue>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int data){
//         this->data=data;
//         left=NULL;
//         right=NULL;
//     }
// };
// Node* buildTree(){
//     int data;
//     cout<<"Enter data: ";
//     cin>>data;
//     if(data==-1) return NULL;
//     Node* newNode=new Node(data);
//     cout<<"Enter data for left part of "<<data<<" node"<<endl;
//     newNode->left=buildTree();
//     cout<<"Enter data for right part of "<<data<<" node"<<endl;
//     newNode->right=buildTree();
// }
// void inorderTraversal(Node *root){
//     if(root==NULL) return;
//     inorderTraversal(root->left);
//     cout<<root->data<<" ";
//     inorderTraversal(root->right);
// }
// int main(){
//     Node* root=NULL;
//     root=buildTree();
//     inorderTraversal(root);
// }



// #include<iostream>
// #include<queue>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int data){
//         this->data=data;
//         left=NULL;
//         right=NULL;
//     }
// };
// Node* builtTree(){
//     int data;
//     cout<<"Enter data: ";
//     cin>>data;
//     if(data==-1) return NULL;
//     Node* newNode=new Node(data);
//     cout<<"Enter data for the left part of "<<data<<" node"<<endl;
//     newNode->left=builtTree();
//     cout<<"Enter data for the right part of "<<data<<" node"<<endl;
//     newNode->right=builtTree();
// }
// void inorderTraversal(Node* root){
//     if(root==NULL) return;
//     inorderTraversal(root->left);
//     cout<<root->data<<" ";
//     inorderTraversal(root->right);
// }
// int main(){
//     Node* root=NULL;
//     root=builtTree();
//     inorderTraversal(root);
// }


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
void inorderTraversal(Node* root){
    if(root==NULL) return;
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}
int main(){
    Node* root=NULL;
    root=builtTree();
    inorderTraversal(root);
}