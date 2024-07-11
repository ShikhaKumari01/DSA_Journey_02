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
// Node* insertIntoBST(Node* &root,int data){
//     if(root==NULL){
//         root=new Node(data);
//         return root;
//     }
//     if(root->data>data){
//         root->left=insertIntoBST(root->left,data);
//     }
//     else{
//         root->right=insertIntoBST(root->right,data);
//     }
//     return root;
// }
// void takeInput(Node* &root){
//     int data;
//     cin>>data;
//     while(data!=-1){
//         root=insertIntoBST(root,data);
//         cin>>data;
//     }
// }
// void levelOrderTraversal(Node* root){
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
//             if(temp->left){
//                 q.push(temp->left);
//             }
//             if(temp->right){
//                 q.push(temp->right);
//             }
//         }
        
//     }
// }
// void preorderTraversal(Node* root){
//     if(root==NULL) return;
//     cout<<root->data<<" ";
//     preorderTraversal(root->left);
//     preorderTraversal(root->right);
// }
// void inorderTraversal(Node* root){
//     if(root==NULL) return;
//     inorderTraversal(root->left);
//     cout<<root->data<<" ";
//     inorderTraversal(root->right);
// }
// void postorderTraversal(Node* root){
//     if(root==NULL) return;
//     postorderTraversal(root->left);
//     postorderTraversal(root->right);
//     cout<<root->data<<" ";
// }
// int main(){
//     Node* root=NULL;
//     cout<<"Enter data: "<<endl;
//     takeInput(root);
//     cout<<"Printing Tree: "<<endl;
//     levelOrderTraversal(root);
//     cout<<"Printing Preorder: "<<endl;
//     preorderTraversal(root);
//     cout<<endl;
//     cout<<"Printing Inorder: "<<endl;
//     inorderTraversal(root);
//     cout<<endl;
//     cout<<"Printing Postorder: "<<endl;
//     postorderTraversal(root);
//     cout<<endl;
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
void preorderTraversal(Node* root){
   if(root==NULL) return;
   cout<<root->data<<" ";
   preorderTraversal(root->left);
   preorderTraversal(root->right);
}
void inorderTraversal(Node* root){
   if(root==NULL) return;
   inorderTraversal(root->left);
   cout<<root->data<<" ";
   inorderTraversal(root->right);
}
void postorderTraversal(Node* root){
   if(root==NULL) return;
   postorderTraversal(root->left);
   postorderTraversal(root->right);
   cout<<root->data<<" ";
}
int main(){
    Node* root=NULL;
    cout<<"Enter data for BST: "<<endl;
    takeInput(root);
    cout<<endl;
    cout<<"Printing Tree: "<<endl;
    levelOrderTraversal(root);
    cout<<endl<<"Printing PreOrder: "<<endl;
    preorderTraversal(root);
    cout<<endl<<"Printing Inorder: "<<endl;
    inorderTraversal(root);
    cout<<endl<<"Printing PostOrder: "<<endl;
    postorderTraversal(root);

}