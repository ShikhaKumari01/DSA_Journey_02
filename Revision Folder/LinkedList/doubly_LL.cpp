#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){
        int val=this->data;

        this->prev=NULL;
        this->next=NULL;
            
        cout<<"Deleted node :"<<val<<endl;
    }
};
Node* insertAtHead(Node* &head,int data){
    if(head==NULL){
       Node* newNode=new Node(data);
       head=newNode;
       return head; 
    }
    Node* newNode=new Node(data); 
    newNode->next=head;
    head->prev=newNode;
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
    newNode->prev=temp;
    return head; 
}
int getLen(Node* &head){
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}
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
    if(temp->next==NULL){
        return insertAtTail(head,data);
    }
    newNode->next=temp->next;
    newNode->prev=temp;
    temp->next->prev=newNode;
    temp->next=newNode;
    

    return head; 
}
Node* deleteAtPosition(Node* &head,int pos){
    if(pos==1){
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
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
    if(right->next==NULL){
        left->next=NULL;
        delete right;
        return head;
    }
    left->next=right->next;
    right->next->prev=left;
    delete right;
    return head;
}
void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* first=NULL;
    insertAtHead(first,40);
    insertAtHead(first,50);
    insertAtHead(first,60);
    // first=insertAtTail(first,2);
    insertAtTail(first,4);
    insertAtTail(first,6);
    printLL(first);
    cout<<endl;
    insertAtPosition(first,11,6);
    printLL(first);
    cout<<endl;
    deleteAtPosition(first,4);
    printLL(first);
    cout<<endl;
}