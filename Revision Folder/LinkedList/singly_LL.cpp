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
Node* insertAtTail(Node* &head,int data){
    if(head==NULL){
       Node* newNode=new Node(data);
       return newNode;
    }
    Node* temp=head;
    Node* newNode=new Node(data); 
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    return head; 
}
// int getLen(Node* &head){
//     int count=0;
//     Node* temp=head;
//     while(temp!=NULL){
//         temp=temp->next;
//         count++;
//     }
//     return count;
// }
Node* insertAtPosition(Node* &head,int data,int pos){
    if(pos==1){
        return insertAtHead(head,data);
    }
    Node* temp=head;
    Node* newNode=new Node(data); 
    int i=1;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    return head; 
}
Node* deleteAtPosition(Node* &head,int pos){
    if(pos==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    Node* left=head;
    Node* right=head->next;
    int i=1;
    while(i<pos-1){
        left=left->next;
        right=right->next;
        i++;
    }
    left->next=right->next;
    delete right;
    return head;
}
void printLL(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    Node* first=new Node(0);
    insertAtHead(first,20);
    insertAtHead(first,30);
    insertAtHead(first,40);
    insertAtHead(first,50);
    first=insertAtTail(first,60);
    insertAtTail(first,70);
    insertAtPosition(first,33,2);
    
    insertAtTail(first,80);
    insertAtPosition(first,33,10);
    printLL(first);
    cout<<endl;
    deleteAtPosition(first,10);
    printLL(first);
}