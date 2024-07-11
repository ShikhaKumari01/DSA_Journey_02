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
Node* LCA(Node* root,Node* p,Node* q){
    if(root==NULL) return NULL;
    if(root->data==p->data){
        return p;
    }
    if(root->data==q->data){
        return q;
    }
    Node* leftAns=LCA(root->left,p,q);
    Node* rightAns=LCA(root->right,p,q);
    if(leftAns==NULL&&rightAns==NULL) return NULL;
    else if(leftAns!=NULL&&rightAns==NULL) return leftAns;
    else if(leftAns==NULL&&rightAns!=NULL) return rightAns;
    else{
        return root;
    }
    
}
int main(){
    Node* root=NULL;
    root=builtTree();
    levelOrderTraversal(root);
    Node* p=new Node(40);
    Node* q=new Node(30);
    cout<<"Lowest common ancestor: "<<LCA(root,p,q)->data;
}