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
// bool getKthAncestor(Node* root,int p,int &k){
//     if(root==NULL) return false;
//     if(root->data==p) return true;
//     bool leftAns=getKthAncestor(root->left,p,k);
//     bool rightAns=getKthAncestor(root->right,p,k);
//     if(leftAns==true||rightAns==true){
//         k--;
//     }
//     if(k==0){
//         cout<<"Answer: "<<root->data;
//         k=-1;
//     }
//     return leftAns||rightAns;
// }
// int main(){
//     Node* root=NULL;
//     int p=70;
//     int k=2;
//     root=builtTree();
//     // levelOrderTrav(root);
//     // cout<<endl;
//     bool flag=getKthAncestor(root,p,k);
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
bool kthAncestor(Node* root,Node* p,int &k){
    if(root==NULL) return false;
    if(root->data==p->data){
        return true;
    }
    bool leftAns=kthAncestor(root->left,p,k);
    bool rightAns=kthAncestor(root->right,p,k);
    if(leftAns==true||rightAns==true)
                k--;
        if(k==0) {
            k=-1;
            cout<<"Answer: "<< root->data;
        }
        else{
            return leftAns||rightAns;
        }
    
}
int main(){
    Node* root=NULL;
    root=builtTree();
    levelOrderTraversal(root);
    Node* p=new Node(6);
    int k=1;
    bool flag=kthAncestor(root,p,k);
}