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
void printLeftView(Node* root,vector<int>&ans,int level){
    if(root==NULL) return;
    if(level==ans.size()){
        ans.push_back(root->data);
    }
    printLeftView(root->left,ans,level+1);
    printLeftView(root->right,ans,level+1);
}
int main(){
    Node* root=NULL;
    root=builtTree();
    vector<int>ans;
    int level=0;
    printLeftView(root,ans,level);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}