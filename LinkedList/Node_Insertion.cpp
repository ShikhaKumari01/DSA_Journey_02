// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(){
//         this->data=0;
//         this->next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
    
// };
// void InsertAtHead(Node* &head,int data){
//     Node *newNode=new Node(data);
//     if(head==NULL){
//         head=newNode;
//         return;
//     }
//     newNode->next=head;
//     head=newNode;
// }
// void InsertAtTail(Node* head,int data){
//     Node *newNode=new Node(data);
//      while(head->next!=NULL){
//         head=head->next;
//     }
//     head->next=newNode;
// }
// void print(Node* head){
//         while(head!=NULL){
//             cout<<head->data<<" ";
//             head=head->next;
//         }
// }
// int main(){
//     Node *head=NULL;
//     InsertAtHead(head,20);
//     InsertAtHead(head,30);
//     InsertAtHead(head,40);
//     InsertAtTail(head,100);
//     InsertAtTail(head,111);
//     print(head);
// }



// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(){
//         this->data=0;
//         this->next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// void insertAtHead(Node* &head,Node* &tail,int data){
//     Node* newNode=new Node(data);
//     if(head==NULL){
//         head=newNode;
//         tail=newNode;
//         return;
//     }
//     newNode->next=head;
//     head=newNode;
// }
// void insertAtTail(Node* &head,Node* &tail,int data){
//     Node* newNode=new Node(data);
//     if(head==NULL){
//         head=newNode;
//         tail=newNode;
//         return;
//     }
//     tail->next=newNode;
//     tail=newNode;
// }
// void print(Node* &head){
//    while(head!=NULL){
//     cout<<head->data<<" ";
//     head=head->next;
//    }
// }
// int main(){
//     Node* head=NULL;
//     Node* tail=NULL;
//     insertAtHead(head,tail,20);
//     insertAtHead(head,tail,30);
//     insertAtHead(head,tail,40);
//     insertAtHead(head,tail,60);
//     insertAtTail(head,tail,7);
//     insertAtTail(head,tail,9);
//     print(head);
// }



#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertAtHead(Node* &head,int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        return;
    }
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
    head->next=newNode;
}
void insertAtPosition(Node* &head,int data,int position){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        return;
    }
    Node* newNode=new Node(data);
    Node* prev=head;
    if(position==1){
        insertAtHead(head,data);
        return;
    }
    int i=1;
    while(i<position-1){
        prev=prev->next;
        i++;
    }
    newNode->next=prev->next;
    prev->next=newNode;
}
void deleteAtHead(Node* &head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return;
    }
    Node *temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
}
void deleteAtTail(Node* head){
    while(head->next->next!=NULL){
        head=head->next;
    }
    head->next=NULL;
}
void deleteAtPosition(Node* head,int position){
    int i=1;
    while(i<position-1){
        head=head->next;
        i=i+1;
    }
    head->next=head->next->next;
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
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtPosition(head,999,3);
    // deleteAtHead(head);
    // deleteAtHead(head);
    // deleteAtHead(head);
    // deleteAtHead(head);
    // deleteAtHead(head);
    // deleteAtHead(head);
    // deleteAtTail(head);
    // deleteAtTail(head);
    // deleteAtPosition(head,1);
    deleteAtTail(head);
    deleteAtTail(head);
    deleteAtTail(head);
    print(head);
}