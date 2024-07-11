#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }
    Node(int val){
        this->data=val;
        this->prev=NULL;
        this->next=NULL;
    }
};
void insertAtHead(Node* &head,int data){
    Node* newNode=new Node(data);
    newNode->next=head;
    head=newNode;
}
void insertAtTail(Node* head,int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        return;
    }
    Node* newNode=new Node(data);
    while(head->next!=NULL){
        head=head->next;
    }
    newNode->prev=head;
    head->next=newNode;
}
int getlen(Node *head){
    int len=0;
    while(head!=NULL){
        head=head->next;
        len++;
    }
    return len;
}
void insertAtPosition(Node* &head,int data,int position){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        return;
    }
    Node* newNode=new Node(data);
    Node* previous=head;
    if(position==1){
        insertAtHead(head,data);
        return;
    }
    int len=getlen(head);
    if(position>len){
        insertAtTail(head,data);
        return;
    }
    int i=1;

    while(i<position-1){
        previous=previous->next;
        i++;
    }
    newNode->next=previous->next;
    newNode->prev=previous;
    previous->next->prev=newNode->next;
    previous->next=newNode;
}
void deleteAtHead(Node* &head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return;
    }
    Node *temp=head;
    head=head->next;
    temp->next=NULL;
    head->prev=NULL;
    delete temp;
}
void deleteAtTail(Node* head){
    while(head->next->next!=NULL){
        head=head->next;
    }
    head->next->next=NULL;
    head->next=NULL;
}
void deleteAtPosition(Node* head,int position){
    int i=1;
    Node *prevNode=head;
    while(i<position-1){
        prevNode=prevNode->next;
        i=i+1;
    }
    Node* currNode=prevNode->next;
    prevNode->next=currNode->next;
    currNode->next->prev=prevNode;
    delete currNode;
}
void print(Node* &head){
   while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
   }
}
int main(){
    Node* head=NULL;
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtTail(head,101);
    insertAtTail(head,202);
    insertAtTail(head,303);
    insertAtPosition(head,1000,3);
    // deleteAtHead(head);
    // deleteAtHead(head);
    // deleteAtTail(head);
    // deleteAtTail(head);
    deleteAtPosition(head,6);
    print(head);
    
}


// int main(){
//     Node* first=new Node(10);
//     Node* second=new Node(20);
//     Node* third=new Node(30);
//     Node* fourth=new Node(40);
//     Node* fifth=new Node(50);
//     first->next=second;
//     second->prev=first;

//     second->next=third;
//     third->prev=second;

//     third->next=fourth;
//     fourth->prev=third;

//     fourth->next=fifth;
//     fifth->prev=fourth;
//     print(first);
// }