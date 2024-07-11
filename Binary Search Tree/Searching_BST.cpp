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
// Node* insertIntoBST(Node* &root,int data){
//     if(root==NULL){
//         root=new Node(data);
//         return root;
//     }
//     if(root->data>data){
//         root->left=insertIntoBST(root->left,data);
//     }
//     else{
//         root->right=insertIntoBST(root->right,data);
//     }
//     return root;
// }
// void takeInput(Node* &root){
//     int data;
//     cin>>data;
//     while(data!=-1){
//         root=insertIntoBST(root,data);
//         cin>>data;
//     }
// }
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
// bool Searching(Node* root,int target){
//     if(root==NULL) return false;
//     if(root->data==target) return true;
//     if(target<root->data){
//         return Searching(root->left,target);
//     }
//     else{
//         return Searching(root->right,target);
//     }
//     return false;
// }
// int main(){
//     Node* root=NULL;
//     cout<<"Enter data: "<<endl;
//     takeInput(root);
//     cout<<"Printing Tree: "<<endl;
//     levelOrderTraversal(root);
//     cout<<endl;
//     int target =17;
//     bool flag=Searching(root,target);
//     if(flag){
//         cout<<"Target found"<<endl;
//     }
//     else{
//         cout<<"Target not found"<<endl; 
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
bool searchElement(Node* root,int target){
    if(root==NULL) return false;
    if(root->data==target) return true;
    if(target<root->data){
        return searchElement(root->left,target);
    }
    else{
        return searchElement(root->right,target);
    }
}
int main(){
    Node* root=NULL;
    cout<<"Enter data for BST: "<<endl;
    takeInput(root);
    cout<<endl;
    cout<<"Printing Tree: "<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    int target=27;
    bool flag=searchElement(root,target);
    if(flag){
        cout<<"Element present"<<endl;
    }
    else{
        cout<<"Element absent"<<endl;
    }
}