#include<iostream>
#include<vector>
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
void solve(Node* root,vector<int>path,int currSum,int target,vector<vector<int>>&ans){
    if(root==NULL) return;
    if(root->left==NULL&&root->right==NULL){
        path.push_back(root->data);
        currSum=currSum+root->data;
        if(currSum==target){
            ans.push_back(path);
        }
    }
    path.push_back(root->data);
    currSum=currSum+root->data;
    solve(root->left,path,currSum,target,ans);
    solve(root->right,path,currSum,target,ans);
}
int main(){
    Node* root=NULL;
    root=builtTree();
    levelOrderTraversal(root);
    vector<vector<int>>ans;
    vector<int>path;
    int currSum=0;
    int target=90;
    solve(root,path,currSum,target,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<path.size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}