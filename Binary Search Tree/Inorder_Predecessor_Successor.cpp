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
Node* insertIntoNode(Node* &root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }
    if(data<root->data){
        //left
        root->left=insertIntoNode(root->left,data);

    }
    else{
        //right
        root->right=insertIntoNode(root->right,data);
    }
    return root;
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertIntoNode(root,data);
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
void inorderTraversal(Node* root,vector<int>&ans){
   if(root==NULL) return;
   inorderTraversal(root->left,ans);
   ans.push_back(root->data);
   inorderTraversal(root->right,ans);
}
int findPosition(vector<int>&ans,int key){
    for(int i=0;i<ans.size();i++){
        if(ans[i]==key){
            return i;
        }
    }
}
void solve(vector<int>&ans,int key){
    int pos=findPosition(ans,key);
    if(pos-1==-1){
        cout<<"Predecessor: Not found"<<endl;
        cout<<"Successor: "<<ans[pos+1]<<endl;
        return;
    }
    if(pos+1==ans.size()){
        cout<<"Predecessor: "<<ans[pos-1]<<endl;
        cout<<"Successor: Not found "<<endl;
        return;
    }
    else{
        cout<<"Predecessor: "<<ans[pos-1]<<endl;
        cout<<"Successor: "<<ans[pos+1]<<endl;
    }
}
int main(){
    Node* root=NULL;
    cout<<"Enter data for BST: "<<endl;
    takeInput(root);
    cout<<endl;
    cout<<"Printing Tree: "<<endl;
    levelOrderTraversal(root);
    vector<int>ans;
    cout<<endl<<"Printing Inorder: "<<endl;
    inorderTraversal(root,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    int key=11;
    solve(ans,key);
}