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
// int findPosition(int inorder[],int size,int element){
//     for(int i=0;i<size;i++){
//         if(inorder[i]==element){
//             return i;
//         }
//     }
//     return -1;
// }
// Node* builtTreefromInorderPreorder(int inorder[],int preorder[],int size,int &preIndex,int inorderStart,int inorderEnd){
//     if(preIndex>=size||inorderStart>inorderEnd){
//         return NULL;
//     }
//     int element=preorder[preIndex];
//     preIndex++;
//     Node* root=new Node(element);
//     int pos=findPosition(inorder,size,element);
//     root->left=builtTreefromInorderPreorder(inorder,preorder,size,preIndex,inorderStart,pos-1);
//     root->right=builtTreefromInorderPreorder(inorder,preorder,size,preIndex,pos+1,inorderEnd);
//     return root;
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
// int main(){
//     int inorder[]={40,20,50,10,60,30,70};
//     int preorder[]={10,20,40,50,30,60,70};
//     int size=7;
//     int preIndex=0;
//     int inorderStart=0;
//     int inorderEnd=size-1;
//     Node* root=builtTreefromInorderPreorder(inorder,preorder,size,preIndex,inorderStart,inorderEnd);
//     levelOrderTrav(root);
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
int findPosition(int inorder[],int size,int element){
    for(int i=0;i<size;i++){
        if(element==inorder[i]){
            return i;
        }
    }
    return -1;
}
Node* builtTreeInorderPreorder(int inorder[],int preorder[],int size,int &preIndex,int inorderStart,int inorderEnd){
    //base case
    if(preIndex>=size||inorderStart>inorderEnd){
        return NULL;
    }
    int element=preorder[preIndex];
    preIndex++;
    Node* root=new Node(element);
    int pos=findPosition(inorder,size,element);
    root->left=builtTreeInorderPreorder(inorder,preorder,size,preIndex,inorderStart,pos-1);
    root->right=builtTreeInorderPreorder(inorder,preorder,size,preIndex,pos+1,inorderEnd);
    return root;
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
int main(){
    int inorder[]={3,1,4,5,2};
    int preorder[]={5,1,3,4,2};
    int size=5;
    int preIndex=0;
    int inorderStart=0;
    int inorderEnd=size-1;
    
    Node* root=builtTreeInorderPreorder(inorder,preorder,size,preIndex,inorderStart,inorderEnd);
    levelOrderTraversal(root);
}