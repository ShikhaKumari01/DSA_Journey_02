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
// bool checkMirrorImage(Node* root1,Node* root2){
//     if(root1==NULL&&root2==NULL) return true;
//     //if(root1==NULL||root2==NULL) return false;
//     if((checkMirrorImage(root1->left,root2->right))&&(checkMirrorImage(root1->right,root2->left))&&(root1->data==root2->data)){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     Node* root1=NULL;
//     Node* root2=NULL;
//     cout<<"Tree 1: "<<endl;
//     root1=builtTree();
//     cout<<"Tree 2: "<<endl;
//     root2=builtTree();
//     levelOrderTrav(root1);
//     cout<<endl;
//     levelOrderTrav(root2);
//     bool flag=checkMirrorImage(root1,root2);
//     if(flag){
//         cout<<"Root1 and Root2 are mirror image of each other"<<endl;
//     }
//     else{
//         cout<<"Root1 and Root2 are not mirror image of each other"<<endl;
//     }
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
    Node* root=new Node(data);
    cout<<"Left part of "<<data<<" node"<<endl;
    root->left=builtTree();
    cout<<"Right part of "<<data<<" node"<<endl;
    root->right=builtTree();
}
void printLOT(Node* root){
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
bool checkMirrorImage(Node* root1,Node* root2){
    if(root1==NULL&&root2==NULL) return true;
    if(root1!=NULL&&root2==NULL) return false;
    if(root1==NULL&&root2!=NULL) return false;
    if(checkMirrorImage(root1->left,root2->right)&&checkMirrorImage(root1->right,root2->left)&&root1->data==root2->data){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    Node* root1=NULL;
    Node* root2=NULL;
    cout<<"TREE 1: "<<endl;
    root1=builtTree();
    cout<<endl;
    cout<<"TREE 2: "<<endl;
    root2=builtTree();
    cout<<endl;
    cout<<"TREE 1: "<<endl;
    printLOT(root1);
    cout<<endl;
    cout<<"TREE 2: "<<endl;
    printLOT(root2);
    bool flag=checkMirrorImage(root1,root2);
    if(flag){
        cout<<"Tree 1 and Tree 2 are mirror image of each other"<<endl;
    }
    else{
        cout<<"Tree 1 and Tree 2 are not mirror image of each other"<<endl;
    }
}