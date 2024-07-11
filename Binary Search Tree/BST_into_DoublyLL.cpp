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
Node* BSTusingInorder(int arr[],int s,int e){
    if(s>e) return NULL;
    int mid=(s+e)/2;
    int element=arr[mid];
    Node* root=new Node(element);
    root->left=BSTusingInorder(arr,s,mid-1);
    root->right=BSTusingInorder(arr,mid+1,e);
}
void convertDLL(Node* root,Node* &head){
    if(root==NULL) return;
    convertDLL(root->right,head);
    root->right=head;
    if(head!=NULL){
        head->left=root;
    }
    head=root;
    convertDLL(root->left,head);
}
void printDLL(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->right;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    
    int s=0;
    int e=8;
    Node* root=NULL;
    root=BSTusingInorder(arr,s,e);
    levelOrderTraversal(root);
    cout<<endl;
    Node* head=NULL;
    
    cout<<"Printing DLL:"<<endl;
    convertDLL(root,head);
    printDLL(head);
}