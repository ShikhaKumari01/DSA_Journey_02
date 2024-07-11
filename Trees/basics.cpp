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
// Node *buildTree(){
//     int data;
//     cout<<"Enter the data : ";
//     cin>>data;
//     if(data==-1) return NULL;
//     Node* root=new Node(data);
//     cout<<"Enter data for left part of "<<data <<" node"<<endl;
//     root->left=buildTree();
//     cout<<"Enter data for right part of "<<data <<" node"<<endl;
//     root->right=buildTree();
//     return root;
// }
// int main(){
//     Node* root=NULL;
//     root=buildTree();
    
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
//     return newNode;
// }
// void printLOT(Node *root){
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
// int main(){
//     Node *root=NULL;
//     root =buildTree();
//     printLOT(root);
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
// void printLOT(Node *root){
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
// int main(){
//     Node* root=NULL;
//     root=buildTree();
//     printLOT(root);
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
//     Node* root=NULL;
//     root=builtTree();
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
int main(){
    Node* root=NULL;
    root=builtTree();
    levelOrderTraversal(root);
}