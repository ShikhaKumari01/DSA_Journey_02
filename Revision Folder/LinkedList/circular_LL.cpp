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
Node* insertNode(Node* &head,int elem,int data){
    if(head==NULL){
        Node *newNode=new Node(data);
        head=newNode;
        newNode->next=newNode;
        return head;
    }
    Node *temp=head;
    while(temp->data!=elem){
        temp=temp->next;
    }
    Node *newNode=new Node(data);
    newNode->next=temp->next;
    temp->next=newNode;
    return head;
    
}
Node* deleteNode(Node* &head,int elem){
    if(head==NULL){
        cout<<"LL is empty, please try again."<<endl;
        return head;
    }
    Node* prev=head;
    Node *curr=head->next;
    if(prev==curr){
        head=NULL;
        return head;
    }
    while(curr->data!=elem){
        prev=prev->next;
        curr=curr->next;
    }
    prev->next=curr->next;
    if(head==curr){
        head=prev;
    }
    delete curr;
    return head;

}
void printLL(Node* head){
    Node* temp=head;
    if(head==NULL){
        cout<<"LL is empty, can't print"<<endl;
        return;
    }
    do{
        cout<<head->data<<" ";
        head=head->next;
    }while(head!=temp);
}
int main(){
    Node* first=NULL;
    insertNode(first,2,3);
    insertNode(first,3,77);
    insertNode(first,3,87);
    insertNode(first,77,0);
    printLL(first);
    cout<<endl;
    deleteNode(first,3);
    printLL(first);
    // cout<<endl;
}