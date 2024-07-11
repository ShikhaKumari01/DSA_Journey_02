#include<iostream>
#include<queue>
#include<map>
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

void printBottomView(Node* root){
    if(root==NULL) return;
    map<int,int>topNode;
    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<Node*,int> temp=q.front();
        q.pop();
        Node* frontNode=temp.first;
        int hd=temp.second;
        
        topNode[hd]=frontNode->data;
        
        if(frontNode->left){
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right){
            q.push(make_pair(frontNode->right,hd+1));
        }   
    }
    for(auto i:topNode){
        cout<<i.first<<"->"<<i.second<<endl;
    }
}
int main(){
    Node* root=NULL;
    root=builtTree();
    printBottomView(root);
}