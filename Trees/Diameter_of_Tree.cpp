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
// void levelOrderTrav(Node* root){
//     queue<Node*>q;
//     q.push(root);
//     q.push(NULL);
//     while(!q.empty()){
//         Node* temp=q.front();
//         q.pop();
//         if(temp==NULL){
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }
//         else{
//             cout<<temp->data<<" ";
//             if(temp->left) q.push(temp->left);
//             if(temp->right) q.push(temp->right);
//         }
        
//     }
// }
// int height(Node* root){
//     if(root==NULL) return 0;
//     int leftHeight=height(root->left);
//     int rightHeight=height(root->right);
//     int ans=max(leftHeight,rightHeight)+1;
//     return ans;
// }
// int diameter(Node* root){
//     if(root==NULL) return 0;
//     int ans;
//     int opt1=diameter(root->left);
//     int opt2=diameter(root->right);
//     int opt3=height(root->left)+1+height(root->right);
//     ans=max(opt1,max(opt2,opt3));
//     return ans;
// }
// int main(){
//     Node* root=NULL;
//     root=builtTree();
//     levelOrderTrav(root);
//     cout<<"Height of tree: "<<height(root)<<endl;
//     cout<<"Diameter of tree: "<<diameter(root)<<endl;
// }



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
int diameter(Node* root){
    if(root==NULL) return 0;
    int maxHeight=INT_MIN;
    int leftAns=diameter(root->left);
    int rightAns=diameter(root->right);
    int Ans=height(root->left)+height(root->right);
    maxHeight=max(Ans,max(leftAns,rightAns));
    return maxHeight;
}
int main(){
    Node* root=NULL;
    root=builtTree();
    levelOrderTraversal(root);
    cout<<"Diameter of tree:"<<diameter(root);
}