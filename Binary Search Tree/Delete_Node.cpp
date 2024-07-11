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
Node* insertIntoBST(Node* &root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }
    if(root->data>data){
        root->left=insertIntoBST(root->left,data);
    }
    else{
        root->right=insertIntoBST(root->right,data);
    }
    return root;
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertIntoBST(root,data);
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
Node* searchElement(Node* root,int target){
    if(root==NULL) return NULL;
    if(root->data==target) return root;
    if(target<root->data){
        return searchElement(root->left,target);
    }
    else{
        return searchElement(root->right,target);
    }
}
int maximumElem(Node* root){
    if(root==NULL) return -1;
    while(root->right!=NULL){
        root=root->right;
    }
    return root->data;
}
Node* deleteNode(Node* root,int target){
    if(root==NULL) return root;
    if(root->data==target){
        //4cases
        //1st case---->Leaf Node
        if(root->left==NULL&&root->right==NULL){
            return NULL;
        }
        //2nd case---->target node ke left me node h
        else if(root->left!=NULL&&root->right==NULL){
            Node* child=root->left;
            delete root;
            return child;
        }
        //3rd case---->target node ke right me node h
        else if(root->left==NULL&&root->right!=NULL){
            Node* child=root->right;
            delete root;
            return child;
        }
        //4th case---->target node ke done side node h
        else{
            int element=maximumElem(root->left);
            root->data=element;
            root->left=deleteNode(root->left,element);
            return root;
        }
    }
    else if(root->data>target){
        //left
        root->left=deleteNode(root->left,target);
    }
    else if(root->data<target){
        //right
        root->right=deleteNode(root->right,target);
    }
    return root;
}

int main(){
    Node* root=NULL;
    cout<<"Enter data: "<<endl;
    takeInput(root);
    cout<<"Printing Tree: "<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    root=deleteNode(root,5);
    levelOrderTraversal(root);

}