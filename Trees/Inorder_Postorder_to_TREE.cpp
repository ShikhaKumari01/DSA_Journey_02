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
// Node* builtTreefromInorderPostorder(int inorder[],int postorder[],int size,int &postIndex,int inorderStart,int inorderEnd){
//     if(postIndex<0||inorderStart>inorderEnd){
//         return NULL;
//     }
//     int element=postorder[postIndex];
//     postIndex--;
//     Node* root=new Node(element);
//     int pos=findPosition(inorder,size,element);
    
//     root->right=builtTreefromInorderPostorder(inorder,postorder,size,postIndex,pos+1,inorderEnd);
//     root->left=builtTreefromInorderPostorder(inorder,postorder,size,postIndex,inorderStart,pos-1);
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
//     int inorder[]={40,20,10,50,30,60};
//     int postorder[]={40,20,50,60,30,10};
//     int size=6;
//     int postIndex=size-1;
//     int inorderStart=0;
//     int inorderEnd=size-1;
//     Node* root=builtTreefromInorderPostorder(inorder,postorder,size,postIndex,inorderStart,inorderEnd);
//     levelOrderTrav(root);
// }



#include<iostream>
#include<queue>
#include<unordered_map>
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
void createMapping(unordered_map<int,int>&mapping,int inorder[],int size){
    for(int i=0;i<size;i++){
        mapping[inorder[i]]=i;
    }
}
Node* builtTreeInorderPostorder(int inorder[],int postorder[],int size,int &postIndex,int inorderStart,int inorderEnd,unordered_map<int,int>mapping){
    //base case
    if(postIndex<0||inorderStart>inorderEnd){
        return NULL;
    }
    int element=postorder[postIndex];
    postIndex--;
    Node* root=new Node(element);
    // int pos=findPosition(inorder,size,element);
    int pos=mapping[element];
    root->right=builtTreeInorderPostorder(inorder,postorder,size,postIndex,pos+1,inorderEnd,mapping);
    root->left=builtTreeInorderPostorder(inorder,postorder,size,postIndex,inorderStart,pos-1,mapping);
    
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
    int inorder[]={40,20,10,50,30,60};
    int postorder[]={40,20,50,60,30,10};
    int size=6;
    int postIndex=size-1;
    int inorderStart=0;
    int inorderEnd=size-1;
    unordered_map<int,int>mapping;
    createMapping(mapping,inorder,size);
    Node* root=builtTreeInorderPostorder(inorder,postorder,size,postIndex,inorderStart,inorderEnd,mapping);
    levelOrderTraversal(root);
}