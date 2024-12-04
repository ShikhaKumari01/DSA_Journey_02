#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            this->next=NULL;
            delete next;
        }
        cout<<"Deleted node :"<<val<<endl;
    }
};
Node* insertAtHead(Node* &head,int data){
    Node* newNode=new Node(data); 
    newNode->next=head;
    head=newNode; 
    return head; 
}
// Node* reverseLL(Node* &head){
//     if(head==NULL|| head->next==NULL){
//         return head;
//     }
//     Node* prev=NULL;
//     Node* curr=head;
//     Node* forward=NULL;
//     while(curr!=NULL){
//         forward=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//     }
//     return prev;
// }

// Node* reverseLL(Node* &prev,Node* &curr){
//     if(curr==NULL||curr->next==NULL){
//         return curr;
//     }
//     Node* forward=curr->next;
//     Node* newHead=reverseLL(curr,forward);
//     curr->next->next=curr;
//     curr->next=prev;
//     return newHead;

// }

Node* reverseLL(Node* &curr){
    if(curr==NULL||curr->next==NULL){
        return curr;
    }
    Node* newHead=reverseLL(curr->next);
    curr->next->next=curr;
    curr->next=NULL;
    return newHead;


}
void printLL(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    Node* first=NULL;
    insertAtHead(first,10);
    insertAtHead(first,20);
    insertAtHead(first,30);
    insertAtHead(first,40);
    insertAtHead(first,50);
    printLL(first);
    cout<<endl;

    // first=reverseLL(first);

    // Node* prev=NULL;
    // Node* curr=first;
    // first=reverseLL(prev,curr);

    first=reverseLL(first);
    printLL(first);
    cout<<endl;
}