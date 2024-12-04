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
        this->left=NULL;
        this->right=NULL;
    }
};
Node* buildTree(Node* root){
    int val;
    cout<<"Enter data: "<<endl;
    cin>>val;
    if(val==-1){
        return NULL;
    }
    root=new Node(val);
    cout<<"Enter data in left of "<<val<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data in right of "<<val<<endl;
    root->right=buildTree(root->right);

    return root;
}
void inorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    
    inorderTraversal(root->right);
}

void buildTreeFromLOT(Node* root){
    queue<Node*>q;
    q.push(root);
    int data;
    cout<<"Enter data: "<<endl;
    cin>>data;
    root=new Node(data);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        Node* leftData
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
int main(){
    Node * root=NULL;
    root=buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    levelOrderTraversal(root);
    cout<<endl;
    inorderTraversal(root);
}